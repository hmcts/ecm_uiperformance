//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SelectCase()
{
	truclient_step("1", "Verify Displaying 's Visible Text contains Displaying", "snapshot=SelectCase_1.inf");
	truclient_step("2", "Wait 3 seconds", "snapshot=SelectCase_2.inf");
	lr_start_transaction("004_004_ECM_SelectACase");
	truclient_step("3", "Click on ArgsContext.LR.getParam(...seNumberSelect') link", "snapshot=SelectCase_3.inf");
	lr_end_transaction("004_004_ECM_SelectACase",0);
	truclient_step("4", "Wait 3 seconds", "snapshot=SelectCase_4.inf");

	return 0;
}
