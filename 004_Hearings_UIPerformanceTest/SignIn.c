//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SignIn()
{
	truclient_step("1", "Verify Sign in 's Visible Text contains Sign in", "snapshot=SignIn_1.inf");
	lr_end_transaction("004_001_ECM_LaunchHomePage",0);
	truclient_step("2", "Wait 3 seconds", "snapshot=SignIn_2.inf");
	truclient_step("3", "Wait until Email address textbox exists", "snapshot=SignIn_3.inf");
	truclient_step("4", "Wait until Password passwordbox exists", "snapshot=SignIn_4.inf");
	truclient_step("5", "Sign in", "snapshot=SignIn_5.inf");
	{
		truclient_step("5.1", "Click on Email address textbox", "snapshot=SignIn_5.1.inf");
		truclient_step("5.2", "Type User in Email address textbox", "snapshot=SignIn_5.2.inf");
		truclient_step("5.3", "Click on Password passwordbox", "snapshot=SignIn_5.3.inf");
		truclient_step("5.4", "Type ******** in Password passwordbox", "snapshot=SignIn_5.4.inf");
		lr_start_transaction("004_002_ECM_SignIn");
		truclient_step("5.5", "Click on Sign in button", "snapshot=SignIn_5.5.inf");
	}
	truclient_step("6", "Verify Case List 's Visible Text contains Case List", "snapshot=SignIn_6.inf");
	lr_end_transaction("004_002_ECM_SignIn",0);
	truclient_step("7", "Wait 3 seconds", "snapshot=SignIn_7.inf");

	return 0;
}
