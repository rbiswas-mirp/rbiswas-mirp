void Miss()
{
  if(Pballx<radius)
  {
    rightScore+=1;
    Pbally=radius;
    Pballx=displayWidth/2;
    Vballx=10;
    Vbally=10;
    delay(100);
  }
}
void Point()
{if(Pballx==radius)
  {
  if((Pbally<=mouseY+sliderHeight)&&(Pbally>=mouseY))
  leftScore+=1;
  }
}