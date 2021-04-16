//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

LaunchHomePage()
{
	lr_start_transaction("002_001_ECM_LaunchHomePage");
	truclient_step("1", "Navigate to TC.getParam('URL')", "snapshot=LaunchHomePage_1.inf");

	return 0;
}
