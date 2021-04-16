//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SearchCaseList()
{
	truclient_step("1", "Verify Case type 's Visible Text contains Case type", "snapshot=SearchCaseList_1.inf");
	truclient_step("2", "Verify Submission Reference 's Visible Text contains Submission Reference", "snapshot=SearchCaseList_2.inf");
	truclient_step("3", "Wait 3 seconds", "snapshot=SearchCaseList_3.inf");
	lr_start_transaction("004_003_ECM_SearchCase");
	truclient_step("4", "Select Leeds - Singles from Case type listbox", "snapshot=SearchCaseList_4.inf");
	truclient_step("5", "Click on Case Number textbox", "snapshot=SearchCaseList_5.inf");
	truclient_step("6", "Type CaseNumberSearch in Case Number textbox", "snapshot=SearchCaseList_6.inf");
	truclient_step("7", "Click on Apply button", "snapshot=SearchCaseList_7.inf");
	lr_end_transaction("004_003_ECM_SearchCase",0);
	truclient_step("8", "Wait 3 seconds", "snapshot=SearchCaseList_8.inf");

	return 0;
}
