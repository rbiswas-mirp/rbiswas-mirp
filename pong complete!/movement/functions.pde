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
  if((Pballx==displayWidth -radius)||(Pballx==radius))
  Vballx=-Vballx;
}