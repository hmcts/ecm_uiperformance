//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SearchCase()
{
	truclient_step("1", "Verify Case List 's Visible Text contains Case List", "snapshot=SearchCase_1.inf");
	lr_end_transaction("003_002_ECM_SignIn",0);
	truclient_step("2", "Wait 3 seconds", "snapshot=SearchCase_2.inf");
	truclient_step("3", "Click on Case Number textbox", "snapshot=SearchCase_3.inf");
	truclient_step("4", "Type CaseNumberSearch in Case Number textbox", "snapshot=SearchCase_4.inf");
	truclient_step("5", "Click on Apply button", "snapshot=SearchCase_5.inf");
	truclient_step("6", "Click on Apply button", "snapshot=SearchCase_6.inf");
	truclient_step("7", "Select Leeds - Singles from Case type listbox", "snapshot=SearchCase_7.inf");
	lr_start_transaction("003_003_ECM_SearchCase");
	truclient_step("8", "Click on Apply button", "snapshot=SearchCase_8.inf");
	lr_end_transaction("003_003_ECM_SearchCase",0);
	truclient_step("9", "Wait 3 seconds", "snapshot=SearchCase_9.inf");

	return 0;
}
