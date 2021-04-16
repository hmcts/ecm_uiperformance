//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

LaunchHomePage()
{
	lr_start_transaction("004_001_ECM_LaunchHomePage");
	truclient_step("1", "Navigate to 'https://manage-case.per...form.hmcts.net/'", "snapshot=LaunchHomePage_1.inf");

	return 0;
}
