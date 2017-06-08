void rightLose() {
       leftScore+=1; 
    displayScores();
    delay(100);
    ballX=displayWidth/2;
    ballY=0;
    ballVx=0.1*BALL_VELOCITY;
    ballVy=5;
}

void leftLose() {
       rightScore+=1;
    displayScores();
    delay(100);
     ballX=displayWidth/2;
    ballY=0;
    ballVx=0.1*BALL_VELOCITY;
    ballVy=5;
}