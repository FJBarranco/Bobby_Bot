// Mode Check (Auto or Manual)

void Mode_Check()
{

	int ID_State;
	Blynk.virtualWrite(ID_State, V11);
	if (ID_State = 1)
	{
		Auto_Mode();
	}

}