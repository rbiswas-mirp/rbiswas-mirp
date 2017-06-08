void setup()
{
  size(displayWidth,displayHeight);
  textFont(createFont("Arial Bold", 50));
}
void draw()
{
background(0);
fill(c1);
ellipse(Pballx,Pbally,2*radius,2*radius);
uPosition();
fill(c2);
rect(0,mouseY,sliderWidth,sliderHeight);
rect(displayWidth-sliderWidth,cslider,sliderWidth,sliderHeight);
displayScore();
}
void displayScore()
{text("Point",displayWidth/4,50);
 text(leftScore,displayWidth/4,100);
 text("Miss",3*displayWidth/4,50);
  text(rightScore,3*displayWidth/4,100);
  Miss();
  Point();
}