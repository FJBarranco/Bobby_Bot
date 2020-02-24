// Movements
void Forward()
{
	digitalWrite(Motor1DR, HIGH); // Motor1
	digitalWrite(Motor1EN, HIGH); // Motor1
	analogWrite(Motor1PWM, 600); // Motor1 (Adjusted)

	digitalWrite(Motor2DR, HIGH); // Motor2
	digitalWrite(Motor2EN, HIGH); // Motor2
	analogWrite(Motor2PWM, 655); // Motor2
}

void Stop()
{
	digitalWrite(Motor1DR, LOW); // Motor1
	digitalWrite(Motor1EN, LOW); // Motor1
	analogWrite(Motor1PWM, 0); // Motor1

	digitalWrite(Motor2DR, LOW); // Motor2
	digitalWrite(Motor2EN, LOW); // Motor2
	analogWrite(Motor2PWM, 0); // Motor2
}

void Reverse()
{
	digitalWrite(Motor1DR, LOW); // Motor1
	digitalWrite(Motor1EN, HIGH); // Motor1
	analogWrite(Motor1PWM, 400); // Motor1 

	digitalWrite(Motor2DR, LOW); // Motor2
	digitalWrite(Motor2EN, HIGH); // Motor2
	analogWrite(Motor2PWM, 300); // Motor2 (Adjusted)
}

void Left()
{
	digitalWrite(Motor1DR, LOW); // Motor1
	digitalWrite(Motor1EN, HIGH); // Motor1
	analogWrite(Motor1PWM, 300); // Motor1

	digitalWrite(Motor2DR, HIGH); // Motor2
	digitalWrite(Motor2EN, HIGH); // Motor2
	analogWrite(Motor2PWM, 300); // Motor2
}

void Right()
{
	digitalWrite(Motor1DR, HIGH); // Motor1
	digitalWrite(Motor1EN, HIGH); // Motor1
	analogWrite(Motor1PWM, 300); // Motor1

	digitalWrite(Motor2DR, LOW); // Motor2
	digitalWrite(Motor2EN, HIGH); // Motor2
	analogWrite(Motor2PWM, 300); // Motor2
}

void servo1_Left()
{
	servo1.write(150);
}

void servo1_Right()
{
	servo1.write(0);
}

void servo1_Forward()
{
	servo1.write(90);
}

void Obstacle_Radar()
{
	servo1.write(15);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(20);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(25);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(30);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(35);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(40);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(45);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(50);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(55);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(60);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(65);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(70);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(75);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(80);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(85);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(90);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(95);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(100);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(105);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(110);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(115);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(120);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(125);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(130);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(135);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(140);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(145);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(150);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(155);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(160);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(155);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(150);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(145);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(140);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(135);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(130);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(125);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(120);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(115);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(110);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(105);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(100);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(95);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(90);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(85);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(80);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(75);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(70);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(65);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(60);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(55);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(50);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(45);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(40);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(35);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(30);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(25);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(20);
	ObstacleCheck();  // Start Checking Obstacles 
	delay(200);
	servo1.write(15);
	ObstacleCheck();  // Start Checking Obstacles 

}
