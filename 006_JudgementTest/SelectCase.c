//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SelectCase()
{
	lr_start_transaction("006_004_ECM_SelectCase");
	truclient_step("1", "Click on ArgsContext.LR.getParam(...seNumberSelect') link", "snapshot=SelectCase_1.inf");
	truclient_step("2", "Verify Next step 's Visible Text contains Next step", "snapshot=SelectCase_2.inf");
	lr_end_transaction("006_004_ECM_SelectCase",0);
	truclient_step("3", "Wait 3 seconds", "snapshot=SelectCase_3.inf");

	return 0;
}
