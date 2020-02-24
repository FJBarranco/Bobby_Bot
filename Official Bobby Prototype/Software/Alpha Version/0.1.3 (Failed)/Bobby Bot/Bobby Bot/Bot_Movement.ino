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