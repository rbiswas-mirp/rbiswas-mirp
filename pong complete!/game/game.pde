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
fill(c2);
rect(0,mouseY,sliderWidth,sliderHeight);
rect(displayWidth-sliderWidth,cslider,sliderWidth,sliderHeight);
}