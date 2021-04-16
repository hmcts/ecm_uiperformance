//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

LaunchHomePage()
{
	lr_start_transaction("005_001_ECM_LaunchHomePage");
	truclient_step("1", "Navigate to TC.getParam('URL')", "snapshot=LaunchHomePage_1.inf");
	truclient_step("2", "Verify Sign in 's Visible Text contains Sign in", "snapshot=LaunchHomePage_2.inf");
	lr_end_transaction("005_001_ECM_LaunchHomePage",0);
	truclient_step("3", "Wait 3 seconds", "snapshot=LaunchHomePage_3.inf");

	return 0;
}
