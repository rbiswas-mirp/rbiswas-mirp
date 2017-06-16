#include<Servo.h>
#include<TouchScreen.h>
#include<PID_v1.h>

int XP=A1, XM=A3, YP=A0, YM=A2;
double Inputx, Outputx, Setpointx, Inputy, Outputy, Setpointy;
int yServoPin =2;
int xServoPin =3;
float Kpx=0.1, Kdx=0.04, Kix=0.04, Kpy=0.1, Kdy=0.04, Kiy=0.04;
int t=40;

Servo ServoX, ServoY;
int mn=70, mx= 110;
int mn1 = 90, mx1 = 130;

TouchScreen ts = TouchScreen(XP, YP, XM, YM, 711);

PID pidx(&Inputx, &Outputx, &Setpointx, Kpx, Kix, Kdx,REVERSE);

PID pidy(&Inputy, &Outputy, &Setpointy, Kpy, Kiy, Kdy, REVERSE);
    
void setup() {
 
 Serial.begin(9600);
 ServoX.attach(xServoPin);
 ServoY.attach(yServoPin);
 pidx.SetMode(AUTOMATIC);
 pidx.SetOutputLimits(mn,mx);
 pidx.SetSampleTime(t);
 pidy.SetMode(AUTOMATIC);
 pidy.SetOutputLimits(mn1,mx1);
 pidy.SetSampleTime(t);
 ServoX.write(90);
 ServoY.write(110);
  
 
  //TSPoint p=ts.getPoint(); 

}

void loop() {
 TSPoint p=ts.getPoint(); 
  
  int x=(p.x);
  Serial.print("X : ");
  Serial.print(x);
  Serial.print(" ");
  Inputx=x; 
  Setpointx=520;
  int z=(p.z);
  if(z>=ts.pressureThreshhold){  
    pidx.Compute();
    ServoX.write(Outputx);
  }
  else
    ServoX.write(90);

   int y=(p.y);
   Serial.print("Y : ");
   Serial.println(y);
   Inputy=y;
   Setpointy=500;
   if(z>=ts.pressureThreshhold){    
    pidy.Compute();
    ServoY.write(Outputy);
   }
   else
    ServoY.write(110);   
  
}
