void setup() {
  size(displayWidth, displayHeight);
  ballVx = 4;
  ballVy = 0;
  resetGame();
  textFont(createFont("Arial Bold", 50));
}

void draw() {
  drawPaddles();
  drawGameScreen();
  drawBall();
  updatePaddlePositions();
  updateBallVelocity();
  updateBallPosition();
  resolveCollisions();
}

void drawGameScreen() {
  // Draw background
  // Update Ball Velocity and Resolve Collisions
  // Update Ball and Paddle Positions
  // Draw Ball and Paddles
  // Display Scores
}

void drawBall() {
  fill(ballColor);
  ellipse(ballX, ballY, 2*ballRadius, 2*ballRadius);
  // Display Ball in correct position
}

void drawPaddles() {
  fill(0,50,150,100);
  rect(10,0,20,100);
  fill(0,50,150,100);
  rect(470,0,20,100);
  // Display Left and Right paddles in correct position
}

void resetGame(){
  // Reset Ball and Paddle Positions
  // Reset Ball Velocity
}

void displayScores() {
  // Display Left and Right player Scores
}