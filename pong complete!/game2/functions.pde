void uPosition()
{
  Pballx=Pballx+Vballx;
Pbally=Pbally+Vbally;
bounceY();
bounceX();
}
void bounceY()
{
  if((Pbally==displayHeight -radius)||(Pbally==radius))
  Vbally=-Vbally;
}
void bounceX()
{
  if(Pballx==radius)
  {
    if((Pbally<=mouseY+sliderHeight)&&(Pbally>=mouseY))
    Vballx=-Vballx;
  }
  if(Pballx==displayWidth -radius)
  {
      cslider=Pbally+radius-sliderHeight/2;
      Vballx=-Vballx; 
  }
}