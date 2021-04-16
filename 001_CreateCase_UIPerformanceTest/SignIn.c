//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SignIn()
{
	truclient_step("1", "Verify Sign in 's Visible Text contains Sign in", "snapshot=SignIn_1.inf");
	lr_end_transaction("001_001_ECM_LaunchHomePage",0);
	truclient_step("2", "Sign in", "snapshot=SignIn_2.inf");
	{
		truclient_step("2.1", "Click on Email address textbox", "snapshot=SignIn_2.1.inf");
		truclient_step("2.2", "Type Users in Email address textbox", "snapshot=SignIn_2.2.inf");
		truclient_step("2.3", "Click on Password passwordbox", "snapshot=SignIn_2.3.inf");
		truclient_step("2.4", "Type ******** in Password passwordbox", "snapshot=SignIn_2.4.inf");
		lr_start_transaction("001_002_ECM_SignIn");
		truclient_step("2.5", "Click on Sign in button", "snapshot=SignIn_2.5.inf");
	}
	truclient_step("3", "Verify Case List 's Visible Text contains Case List", "snapshot=SignIn_3.inf");
	lr_end_transaction("001_002_ECM_SignIn",0);
	truclient_step("4", "Wait 3 seconds", "snapshot=SignIn_4.inf");

	return 0;
}
