//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SignIn()
{
	truclient_step("1", "Wait until Email address textbox exists", "snapshot=SignIn_1.inf");
	truclient_step("2", "Wait until Password passwordbox exists", "snapshot=SignIn_2.inf");
	truclient_step("3", "Sign in", "snapshot=SignIn_3.inf");
	{
		truclient_step("3.1", "Click on Email address textbox", "snapshot=SignIn_3.1.inf");
		truclient_step("3.2", "Type User in Email address textbox", "snapshot=SignIn_3.2.inf");
		truclient_step("3.3", "Click on Password passwordbox", "snapshot=SignIn_3.3.inf");
		truclient_step("3.4", "Type ******** in Password passwordbox", "snapshot=SignIn_3.4.inf");
		lr_start_transaction("003_002_ECM_SignIn");
		truclient_step("3.5", "Click on Sign in button", "snapshot=SignIn_3.5.inf");
	}
	truclient_step("4", "Wait 3 seconds", "snapshot=SignIn_4.inf");

	return 0;
}
