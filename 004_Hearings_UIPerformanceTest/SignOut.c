//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SignOut()
{
	lr_start_transaction("004_009_ECM_SignOut");
	truclient_step("1", "Click on Sign out link", "snapshot=SignOut_1.inf");
	lr_end_transaction("004_009_ECM_SignOut",0);

	return 0;
}
