//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SignIn()
{
	truclient_step("1", "Sign in", "snapshot=SignIn_1.inf");
	{
		truclient_step("1.1", "Click on Email address textbox", "snapshot=SignIn_1.1.inf");
		truclient_step("1.2", "Type Username in Email address textbox", "snapshot=SignIn_1.2.inf");
		truclient_step("1.3", "Click on Email address textbox", "snapshot=SignIn_1.3.inf");
		truclient_step("1.4", "Click on Password passwordbox", "snapshot=SignIn_1.4.inf");
		truclient_step("1.5", "Type ******** in Password passwordbox", "snapshot=SignIn_1.5.inf");
		lr_start_transaction("006_002_SignIn");
		truclient_step("1.6", "Click on Sign in button", "snapshot=SignIn_1.6.inf");
		truclient_step("1.7", "Verify Case List 's Visible Text contains Case List", "snapshot=SignIn_1.7.inf");
		lr_end_transaction("006_002_SignIn",0);
	}
	truclient_step("2", "Wait 3 seconds", "snapshot=SignIn_2.inf");
	truclient_step("3", "Verify Sorry, there's a problem... 's Visible Text contains Sorry, there's a problem with this service", "snapshot=SignIn_3.inf");

	return 0;
}
