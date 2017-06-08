void setup()
{
  size(displayWidth,displayHeight);
}
void draw()
{
background(0);
fill(c1);
ellipse(Pballx,Pbally,2*radius,2*radius);
uPosition();
//rect(0,mouseY,sliderWidth,slideHeight);
}