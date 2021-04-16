//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SignIn()
{
	truclient_step("1", "Sign in", "snapshot=SignIn_1.inf");
	{
		truclient_step("1.1", "Click on Email address textbox", "snapshot=SignIn_1.1.inf");
		truclient_step("1.2", "Type UserName in Email address textbox", "snapshot=SignIn_1.2.inf");
		truclient_step("1.3", "Click on Email address textbox", "snapshot=SignIn_1.3.inf");
		truclient_step("1.4", "Type ccdloadtest4501@gmail.com in Email address textbox", "snapshot=SignIn_1.4.inf");
		truclient_step("1.5", "Click on Password passwordbox", "snapshot=SignIn_1.5.inf");
		truclient_step("1.6", "Type ******** in Password passwordbox", "snapshot=SignIn_1.6.inf");
		lr_start_transaction("005_002_ECM_SignIn");
		truclient_step("1.7", "Click on Sign in button", "snapshot=SignIn_1.7.inf");
		truclient_step("1.8", "Verify Case List 's Visible Text contains Case List", "snapshot=SignIn_1.8.inf");
	}
	lr_end_transaction("005_002_ECM_SignIn",0);
	truclient_step("2", "Wait 3 seconds", "snapshot=SignIn_2.inf");
	truclient_step("3", "Sign in", "snapshot=SignIn_3.inf");
	{
		truclient_step("3.1", "Click on Email address textbox", "snapshot=SignIn_3.1.inf");
		truclient_step("3.2", "Type a.	ccdloadtest4501@gmail.com in Email address textbox", "snapshot=SignIn_3.2.inf");
		truclient_step("3.3", "Click on Email address textbox", "snapshot=SignIn_3.3.inf");
		truclient_step("3.4", "Type ccdloadtest4501@gmail.com in Email address textbox", "snapshot=SignIn_3.4.inf");
		truclient_step("3.5", "Click on Email address textbox", "snapshot=SignIn_3.5.inf");
		truclient_step("3.6", "Type ccdloadtest4501@gmail.com in Email address textbox", "snapshot=SignIn_3.6.inf");
		truclient_step("3.7", "Click on Password passwordbox", "snapshot=SignIn_3.7.inf");
		truclient_step("3.8", "Type ********** in Password passwordbox", "snapshot=SignIn_3.8.inf");
		truclient_step("3.9", "Click on Sign in button", "snapshot=SignIn_3.9.inf");
	}

	return 0;
}
