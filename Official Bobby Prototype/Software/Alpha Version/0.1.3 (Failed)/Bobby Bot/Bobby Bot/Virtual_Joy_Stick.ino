BLYNK_WRITE(V6)  // Joystick Virtual Input
{
	Flag = 1;
	int y = param[1].asInt();
	int x = param[0].asInt();
	if (y > 750 && Flag == 1) {  // Forward
		Flag = 0;
		incomingByte = '1';
		Forward();
	}
	if (y < 250 && Flag == 1) {  // Backward
		Flag = 0;
		incomingByte = '2';
		Reverse();
	}
	if (x < 250 && Flag == 1) {  // Left
		Flag = 0;
		incomingByte = '3';
		Left();
	}
	if (x > 750 && Flag == 1) {  // Right
		Flag = 0;
		incomingByte = '4';
		Right();
	}
	if (y == 512 && y == 512) {  // Full Stop
		incomingByte = '0';
		Stop();
	}
}