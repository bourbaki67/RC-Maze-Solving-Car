#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define wall_distance 15

#define trigFront 6 
#define trigRight 7
#define trigLeft 8
#define echoFront 9
#define echoRight 10
#define echoLeft 11

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(echoFront, INPUT);
  pinMode(echoRight, INPUT);
  pinMode(echoLeft, INPUT);
  pinMode(trigFront, OUTPUT);
  pinMode(trigRight, OUTPUT);
  pinMode(trigLeft, OUTPUT);
}
void loop()
{
   int frontDistance=getDistance(trigFront, echoFront);
   int rightDistance=getDistance(trigRight, echoRight);
   int leftDistance=getDistance(trigLeft, echoLeft);

   Serial.print("FRONT:");
   Serial.print(frontDistance);
   Serial.print("RIGHT:");
   Serial.print(rightDistance);
   Serial.print("LEFT:");
   Serial.print(leftDistance);
   
   if (frontDistance>wall_distance)
   {
    moveForward();
   }
   else if (rightDistance>wall_distance)
   {
    moveRight();
   }
   else if (leftDistance>wall_distance)
   {
    moveLeft();
   }
}

int getDistance(int trigPin, int echoPin)
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration=pulseIn(echoPin, HIGH);
  int distance=duration*0.034/2; 
  return distance;
}

void moveForward() 
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(600);
}

void turnRight()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(600); 
}

void turnLeft() 
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(600);
}
