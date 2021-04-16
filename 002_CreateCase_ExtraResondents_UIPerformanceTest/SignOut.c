//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SignOut()
{
	lr_start_transaction("002_009_ECM_CreateCaseSignOut");
	truclient_step("1", "Click on Sign out link", "snapshot=SignOut_1.inf");
	truclient_step("2", "Verify Sign in 's Visible Text contains Sign in", "snapshot=SignOut_2.inf");
	lr_end_transaction("002_009_ECM_CreateCaseSignOut",0);

	return 0;
}
