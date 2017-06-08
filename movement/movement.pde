int displayWidth=500, displayHeight=500;
int floorWidthX=displayWidth,floorHeightX=50;

float MAX_VELOCITY = 10;

float bgColor = 255;

float gravity = 0.1;
float ballX, ballY;
float ballVx = 0, ballVy = 1;
float ballRadius = 10;
color ballColor = color(100, 100, 188, 150);

float restitutionCoeff = 0.95;

char UP = 'w', LEFT = 'a', RIGHT = 'd',DOWN='s';
boolean up, left, right, down;

boolean keys[] = new boolean [4];

void setup() {
  size(displayWidth, displayHeight);
  ballX=displayWidth/2;
  ballY=displayHeight/2;
  ballVx = 4;
  ballVy = 0;
}

void draw() {
  background(bgColor);
  drawfloor();
  detectKeys();
  drawBall();
  updateBallVelocity();
  updateBallPosition();
  resolveCollisions();
}

void drawBall() {
  fill(ballColor);
  ellipse(ballX, ballY, 2*ballRadius, 2*ballRadius);
}
void drawfloor(){
  fill( 0, 0, 0,500);
  rect(displayHeight-floorHeightX,0,displayWidth,floorHeightX);
}