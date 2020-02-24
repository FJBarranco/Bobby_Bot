// Movements

//PWM Controlled
// Note: Motor 2 Spins Slighlt Slower than Motor 1 dispight the similar PWM's.

void Forward()
{
	analogWrite(Motor1_In1,650);  // Motor1
	digitalWrite(Motor1_In2, LOW); // Motor1

	analogWrite(Motor2_In3, 850);   // Motor2
	digitalWrite(Motor2_In4, LOW);  // Motor2
}

void Stop()
{
	digitalWrite(Motor1_In1, LOW); // Motor1
	digitalWrite(Motor1_In2, LOW); // Motor1


	digitalWrite(Motor2_In3, LOW); // Motor2
	digitalWrite(Motor2_In4, LOW); // Motor2
}

void Reverse()
{
	digitalWrite(Motor1_In1, LOW); // Motor1
	analogWrite(Motor1_In2, 650);  // Motor1

	digitalWrite(Motor2_In3, LOW); // Motor2
	analogWrite(Motor2_In4, 850);  // Motor2
}

void Left()
{
	digitalWrite(Motor1_In1, LOW); // Motor1
	analogWrite(Motor1_In2, 800);  // Motor1

	analogWrite(Motor2_In3, 700);   // Motor2
	digitalWrite(Motor2_In4, LOW); // Motor2
}

void Right()
{
	analogWrite(Motor1_In1, 800);  // Motor1
	digitalWrite(Motor1_In2, LOW); // Motor1

	digitalWrite(Motor2_In3, LOW); // Motor2
	analogWrite(Motor2_In4, 700);  // Motor2
}

// Full Power
//void Forward()
//{
//	digitalWrite(Motor1_In1, HIGH); // Motor1
//	digitalWrite(Motor1_In2, LOW); // Motor1
//	
//	digitalWrite(Motor2_In3, HIGH); // Motor2
//	digitalWrite(Motor2_In4, LOW); // Motor2
//}
//
//void Stop()
//{
//	digitalWrite(Motor1_In1, LOW); // Motor1
//	digitalWrite(Motor1_In2, LOW); // Motor1
//	
//
//	digitalWrite(Motor2_In3, LOW); // Motor2
//	digitalWrite(Motor2_In4, LOW); // Motor2
//}
//
//void Reverse()
//{
//	digitalWrite(Motor1_In1, LOW); // Motor1
//	digitalWrite(Motor1_In2, HIGH); // Motor1
//
//	digitalWrite(Motor2_In3, LOW); // Motor2
//	digitalWrite(Motor2_In4, HIGH); // Motor2
//}
//
//void Left()
//{
//	digitalWrite(Motor1_In1, LOW); // Motor1
//	digitalWrite(Motor1_In2, HIGH); // Motor1
//
//	digitalWrite(Motor2_In3, HIGH); // Motor2
//	digitalWrite(Motor2_In4, LOW); // Motor2
//}
//
//void Right()
//{
//	digitalWrite(Motor1_In1, HIGH); // Motor1
//	digitalWrite(Motor1_In2, LOW); // Motor1
//	
//	digitalWrite(Motor2_In3, LOW); // Motor2
//	digitalWrite(Motor2_In4, HIGH); // Motor2
//}