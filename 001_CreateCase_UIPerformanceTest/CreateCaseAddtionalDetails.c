//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

CreateCaseAddtionalDetails()
{
	truclient_step("1", "Verify Respondents 's Visible Text contains Respondents", "snapshot=CreateCaseAddtionalDetails_1.inf");
	lr_end_transaction("001_006_ECM_CreateCasePersonalDetailsContinue",0);
	truclient_step("2", "Continue", "snapshot=CreateCaseAddtionalDetails_2.inf");
	{
		truclient_step("2.1", "Click on Add new button", "snapshot=CreateCaseAddtionalDetails_2.1.inf");
		truclient_step("2.2", "Type Mr UI PerformanceTester001 in Name of respondent textbox", "snapshot=CreateCaseAddtionalDetails_2.2.inf");
		truclient_step("2.3", "Click on Yes", "snapshot=CreateCaseAddtionalDetails_2.3.inf");
		truclient_step("2.4", "Click on ACAS Certificate Number textbox", "snapshot=CreateCaseAddtionalDetails_2.4.inf");
		truclient_step("2.5", "Type 001001001001 in ACAS Certificate Number textbox", "snapshot=CreateCaseAddtionalDetails_2.5.inf");
		truclient_step("2.6", "Click on Enter a UK postcode textbox", "snapshot=CreateCaseAddtionalDetails_2.6.inf");
		truclient_step("2.7", "Type sw1h 9hg in Enter a UK postcode textbox", "snapshot=CreateCaseAddtionalDetails_2.7.inf");
		truclient_step("2.8", "Click on Find address button", "snapshot=CreateCaseAddtionalDetails_2.8.inf");
		truclient_step("2.9", "Select Flat 75, Vandon Court, 6...y France, London from Select an address listbox", "snapshot=CreateCaseAddtionalDetails_2.9.inf");
		lr_start_transaction("001_007_ECM_CreatseCaseRespondentContinue");
		truclient_step("2.10", "Click on Continue button", "snapshot=CreateCaseAddtionalDetails_2.10.inf");
	}
	truclient_step("3", "Wait 3 seconds", "snapshot=CreateCaseAddtionalDetails_3.inf");
	truclient_step("4", "Click on Yes", "snapshot=CreateCaseAddtionalDetails_4.inf");

	return 0;
}
