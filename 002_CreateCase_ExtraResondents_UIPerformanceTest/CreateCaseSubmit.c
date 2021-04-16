//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

CreateCaseSubmit()
{
	truclient_step("1", "Verify Is this the same as the... 's Visible Text contains Is this the same as the ...'s work address?", "snapshot=CreateCaseSubmit_1.inf");
	lr_end_transaction("001_007_ECM_CreateCaseRespondentContinue",0);
	truclient_step("2", "Wait 3 seconds", "snapshot=CreateCaseSubmit_2.inf");
	truclient_step("3", "Click on Yes", "snapshot=CreateCaseSubmit_3.inf");
	truclient_step("4", "Select Mr UI PerformanceTester0..., United Kingdom from Please select the Respondent... listbox", "snapshot=CreateCaseSubmit_4.inf");
	truclient_step("5", "Continue", "snapshot=CreateCaseSubmit_5.inf");
	{
		truclient_step("5.1", "Click on Continue button", "snapshot=CreateCaseSubmit_5.1.inf");
		truclient_step("5.2", "Click on Continue button", "snapshot=CreateCaseSubmit_5.2.inf");
		truclient_step("5.3", "Click on No", "snapshot=CreateCaseSubmit_5.3.inf");
		truclient_step("5.4", "Click on Continue button", "snapshot=CreateCaseSubmit_5.4.inf");
	}
	lr_start_transaction("002_008_ECM_CreateCaseSubmit");
	truclient_step("6", "Click on Submit button", "snapshot=CreateCaseSubmit_6.inf");
	lr_end_transaction("002_008_ECM_CreateCaseSubmit",0);
	truclient_step("7", "Wait 3 seconds", "snapshot=CreateCaseSubmit_7.inf");

	return 0;
}
