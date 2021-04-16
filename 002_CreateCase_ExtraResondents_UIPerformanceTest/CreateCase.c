//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

CreateCase()
{
	truclient_step("1", "Select Leeds - Singles from Case type listbox", "snapshot=CreateCase_1.inf");
	truclient_step("2", "Select Create Case from Event listbox", "snapshot=CreateCase_2.inf");
	lr_start_transaction("001_004_ECM_CreateCaseClickStart");
	truclient_step("3", "Click on Start button", "snapshot=CreateCase_3.inf");
	lr_end_transaction("001_004_ECM_CreateCaseClickStart",0);
	truclient_step("4", "Wait 3 seconds", "snapshot=CreateCase_4.inf");
	truclient_step("5", "Continue", "snapshot=CreateCase_5.inf");
	{
		truclient_step("5.1", "Click on Day textbox", "snapshot=CreateCase_5.1.inf");
		truclient_step("5.2", "Type 25 in Day textbox", "snapshot=CreateCase_5.2.inf");
		truclient_step("5.3", "Type 03 in Month textbox", "snapshot=CreateCase_5.3.inf");
		truclient_step("5.4", "Type 2021 in Year textbox", "snapshot=CreateCase_5.4.inf");
		truclient_step("5.5", "Click on Submission ReferenceSubmission... textbox", "snapshot=CreateCase_5.5.inf");
		truclient_step("5.6", "Type 001001001001 in Submission ReferenceSubmission... textbox", "snapshot=CreateCase_5.6.inf");
		truclient_step("5.7", "Click on Continue button", "snapshot=CreateCase_5.7.inf");
	}
	truclient_step("6", "Continue", "snapshot=CreateCase_6.inf");
	{
		truclient_step("6.1", "Select Mr from Title (Optional) listbox", "snapshot=CreateCase_6.1.inf");
		truclient_step("6.2", "Click on First Name textbox", "snapshot=CreateCase_6.2.inf");
		truclient_step("6.3", "Type UI in First Name textbox", "snapshot=CreateCase_6.3.inf");
		truclient_step("6.4", "Type PerfTest001 in Last Name textbox", "snapshot=CreateCase_6.4.inf");
		truclient_step("6.5", "Click on Day textbox", "snapshot=CreateCase_6.5.inf");
		truclient_step("6.6", "Type 01 in Day textbox", "snapshot=CreateCase_6.6.inf");
		truclient_step("6.7", "Type 01 in Month textbox", "snapshot=CreateCase_6.7.inf");
		truclient_step("6.8", "Type 2000 in Year textbox", "snapshot=CreateCase_6.8.inf");
		truclient_step("6.9", "Select Male from Gender (Optional) listbox", "snapshot=CreateCase_6.9.inf");
		truclient_step("6.10", "Click on Enter a UK postcode textbox", "snapshot=CreateCase_6.10.inf");
		truclient_step("6.11", "Type sw1h9hg in Enter a UK postcode textbox", "snapshot=CreateCase_6.11.inf");
		truclient_step("6.12", "Click on Find address button", "snapshot=CreateCase_6.12.inf");
		truclient_step("6.13", "Select Flat 75, Vandon Court, 6...y France, London from Select an address listbox", "snapshot=CreateCase_6.13.inf");
		truclient_step("6.14", "Click on Continue button", "snapshot=CreateCase_6.14.inf");
	}
	truclient_step("7", "Continue", "snapshot=CreateCase_7.inf");
	{
		truclient_step("7.1", "Click on Add new button", "snapshot=CreateCase_7.1.inf");
		truclient_step("7.2", "Type Mr UI PerformanceTester001 in Name of respondent textbox", "snapshot=CreateCase_7.2.inf");
		truclient_step("7.3", "Click on Yes", "snapshot=CreateCase_7.3.inf");
		truclient_step("7.4", "Click on ACAS Certificate Number textbox", "snapshot=CreateCase_7.4.inf");
		truclient_step("7.5", "Type 001001001001 in ACAS Certificate Number textbox", "snapshot=CreateCase_7.5.inf");
		truclient_step("7.6", "Click on Enter a UK postcode textbox", "snapshot=CreateCase_7.6.inf");
		truclient_step("7.7", "Type sw1h 9hg in Enter a UK postcode textbox", "snapshot=CreateCase_7.7.inf");
		truclient_step("7.8", "Click on Find address button", "snapshot=CreateCase_7.8.inf");
		truclient_step("7.9", "Select Flat 75, Vandon Court, 6...y France, London from Select an address listbox", "snapshot=CreateCase_7.9.inf");
		truclient_step("7.10", "Click on Continue button", "snapshot=CreateCase_7.10.inf");
	}
	truclient_step("8", "Click on Yes", "snapshot=CreateCase_8.inf");
	truclient_step("9", "Select Mr UI PerformanceTester0..., United Kingdom from Please select the Respondent... listbox", "snapshot=CreateCase_9.inf");
	truclient_step("10", "Continue", "snapshot=CreateCase_10.inf");
	{
		truclient_step("10.1", "Click on Continue button", "snapshot=CreateCase_10.1.inf");
		truclient_step("10.2", "Click on Continue button", "snapshot=CreateCase_10.2.inf");
		truclient_step("10.3", "Click on No", "snapshot=CreateCase_10.3.inf");
		truclient_step("10.4", "Click on Continue button", "snapshot=CreateCase_10.4.inf");
	}
	truclient_step("11", "Click on Submit button", "snapshot=CreateCase_11.inf");
	truclient_step("12", "Click on Sign out link", "snapshot=CreateCase_12.inf");

	return 0;
}
