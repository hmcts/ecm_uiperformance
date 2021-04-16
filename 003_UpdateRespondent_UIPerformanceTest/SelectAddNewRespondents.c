//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SelectAddNewRespondents()
{
	truclient_step("1", "Wait 3 seconds", "snapshot=SelectAddNewRespondents_1.inf");
	truclient_step("2", "Verify Respondent Details 's Visible Text contains Respondent Details", "snapshot=SelectAddNewRespondents_2.inf");
	truclient_step("3", "Continue", "snapshot=SelectAddNewRespondents_3.inf");
	{
		lr_start_transaction("003_006_ECM_AddNewRepondent");
		truclient_step("3.1", "Click on Add new button", "snapshot=SelectAddNewRespondents_3.1.inf");
		lr_end_transaction("003_006_ECM_AddNewRepondent",0);
		truclient_step("3.2", "Type Mr UI PerformanceTest in Name of respondent textbox", "snapshot=SelectAddNewRespondents_3.2.inf");
		truclient_step("3.3", "Click on Yes", "snapshot=SelectAddNewRespondents_3.3.inf");
		truclient_step("3.4", "Click on ACAS Certificate Number... textbox", "snapshot=SelectAddNewRespondents_3.4.inf");
		truclient_step("3.5", "Type 001001001001 in ACAS Certificate Number... textbox", "snapshot=SelectAddNewRespondents_3.5.inf");
		truclient_step("3.6", "Click on Enter a UK postcode textbox", "snapshot=SelectAddNewRespondents_3.6.inf");
		truclient_step("3.7", "Type SW1H 9HG in Enter a UK postcode textbox", "snapshot=SelectAddNewRespondents_3.7.inf");
		truclient_step("3.8", "Click on Find address button", "snapshot=SelectAddNewRespondents_3.8.inf");
		truclient_step("3.9", "Select Flat 75, Vandon Court, 6...y France, London from Select an address listbox", "snapshot=SelectAddNewRespondents_3.9.inf");
		truclient_step("3.10", "Click on Contact preference (Optio... label", "snapshot=SelectAddNewRespondents_3.10.inf");
		truclient_step("3.11", "Select Post from Contact preference (Optio... listbox", "snapshot=SelectAddNewRespondents_3.11.inf");
		truclient_step("3.12", "Click on Yes", "snapshot=SelectAddNewRespondents_3.12.inf");
		truclient_step("3.13", "Click on Yes", "snapshot=SelectAddNewRespondents_3.13.inf");
		truclient_step("3.14", "Click on Day textbox", "snapshot=SelectAddNewRespondents_3.14.inf");
		truclient_step("3.15", "Type 14 in Day textbox", "snapshot=SelectAddNewRespondents_3.15.inf");
		truclient_step("3.16", "Click on Month textbox", "snapshot=SelectAddNewRespondents_3.16.inf");
		truclient_step("3.17", "Type 4 in Month textbox", "snapshot=SelectAddNewRespondents_3.17.inf");
		truclient_step("3.18", "Click on Year textbox", "snapshot=SelectAddNewRespondents_3.18.inf");
		truclient_step("3.19", "Type 2021 in Year textbox", "snapshot=SelectAddNewRespondents_3.19.inf");
		truclient_step("3.20", "Click on No", "snapshot=SelectAddNewRespondents_3.20.inf");
		truclient_step("3.21", "Select Accepted from Response (Optional) listbox", "snapshot=SelectAddNewRespondents_3.21.inf");
		truclient_step("3.22", "Click on No", "snapshot=SelectAddNewRespondents_3.22.inf");
		truclient_step("3.23", "Click on Enter a UK postcode textbox", "snapshot=SelectAddNewRespondents_3.23.inf");
		truclient_step("3.24", "Type SW1H 9HG in Enter a UK postcode textbox", "snapshot=SelectAddNewRespondents_3.24.inf");
		truclient_step("3.25", "Click on Find address button", "snapshot=SelectAddNewRespondents_3.25.inf");
		truclient_step("3.26", "Click on Find address button", "snapshot=SelectAddNewRespondents_3.26.inf");
		truclient_step("3.27", "Mouse up on Town or City (Optional) label", "snapshot=SelectAddNewRespondents_3.27.inf");
		truclient_step("3.28", "Select Flat 75, Vandon Court, 6...y France, London from Select an address listbox", "snapshot=SelectAddNewRespondents_3.28.inf");
		truclient_step("3.29", "Click on heading (1)", "snapshot=SelectAddNewRespondents_3.29.inf");
		truclient_step("3.30", "Click on Add new", "snapshot=SelectAddNewRespondents_3.30.inf");
		truclient_step("3.31", "Click on No", "snapshot=SelectAddNewRespondents_3.31.inf");
		lr_start_transaction("003_007_ECM_AddNewRepondentContinue");
		truclient_step("3.32", "Click on Continue button", "snapshot=SelectAddNewRespondents_3.32.inf");
		lr_end_transaction("003_007_ECM_AddNewRepondentContinue",0);
		truclient_step("3.33", "Wait 3 seconds", "snapshot=SelectAddNewRespondents_3.33.inf");
	}

	return 0;
}
