
void ID_Check()
{


	// ID Check (Auto or Manual)

	int ID_State;
	Blynk.virtualWrite(ID_State, V11);
	if (ID_State = 1)
	{
		Auto_Mode();
	}

}