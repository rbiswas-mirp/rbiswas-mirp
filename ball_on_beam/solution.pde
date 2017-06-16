float previousError = 0.0, currentError;
float angleError = 0.02;

void solution(){
  currentError = desiredX - ballX;
  float Kp = 0.0005, Kd = 0.01;
  float angleValue = Kp*currentError;
  float speed = currentError - previousError; 
  angleValue += Kd*speed;
  gotoAngle(angleValue);
  previousError = currentError;
}