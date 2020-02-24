void Roam()
{
	//==============================================================================

	ObstacleCheck(); // Continue Monitoring Area

	//==============================================================================

	//Movement Algorythem

	if (distance <= 30)
	{
		Stop();
		servo1.write(15); // Check first path
		ObstacleCheck();  // Start Checking Obstacles 

		if (distance > 30)
		{
			Right();
			delay(550);
			servo1.write(90); // Straighten The Sensor
			delay(50);
			Auto_Mode(); // Continue
		}

		if (distance <= 30)
		{
			Stop();
			servo1.write(160); // Check second path
			ObstacleCheck();  // Start Checking Obstacles 

			if (distance > 30)
			{
				Left();
				delay(550);
				servo1.write(90); // Straighten The Sensor
				delay(50);
				Auto_Mode(); // Continue
			}

			if (distance <= 30)
			{
				servo1.write(90); // Straighten The Sensor
				delay(50);
				Stop();
				delay(500);
				Reverse();
				delay(300);
				Right();
				delay(550);

				if (distance <= 30)
				{
					servo1.write(90); // Straighten The Sensor
					delay(50);
					Stop();
					delay(500);
					Reverse();
					delay(550);
					Left();
					delay(550);
				}

				else
					servo1.write(90); // Straighten The Sensor
				delay(50);
				Forward();

			}

			else
				servo1.write(90); // Straighten The Sensor
			delay(50);
			Forward();
		}

		else
			servo1.write(90); // Straighten The Sensor
		delay(50);
		Forward();
	}


	else
		servo1.write(90); // Straighten The Sensor
	delay(50);
	Forward();
}