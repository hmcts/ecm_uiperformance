//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

CreateCaseSubmission()
{
	truclient_step("1", "Verify Date of Receipt 's Visible Text contains Date of Receipt", "snapshot=CreateCaseSubmission_1.inf");
	lr_end_transaction("001_004_ECM_CreateCaseClickStart",0);
	truclient_step("2", "Continue", "snapshot=CreateCaseSubmission_2.inf");
	{
		truclient_step("2.1", "Click on Day textbox", "snapshot=CreateCaseSubmission_2.1.inf");
		truclient_step("2.2", "Type 25 in Day textbox", "snapshot=CreateCaseSubmission_2.2.inf");
		truclient_step("2.3", "Type 03 in Month textbox", "snapshot=CreateCaseSubmission_2.3.inf");
		truclient_step("2.4", "Type 2021 in Year textbox", "snapshot=CreateCaseSubmission_2.4.inf");
		truclient_step("2.5", "Click on Submission ReferenceSubmission... textbox", "snapshot=CreateCaseSubmission_2.5.inf");
		truclient_step("2.6", "Type 001001001001 in Submission ReferenceSubmission... textbox", "snapshot=CreateCaseSubmission_2.6.inf");
	}
	lr_start_transaction("001_005_ECM_CreateCase_RefSubmission");
	truclient_step("3", "Click on Continue button", "snapshot=CreateCaseSubmission_3.inf");
	truclient_step("4", "Wait 3 seconds", "snapshot=CreateCaseSubmission_4.inf");

	return 0;
}
