//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SelectRespondents()
{
	truclient_step("1", "Wait 3 seconds", "snapshot=SelectRespondents_1.inf");
	truclient_step("2", "Verify Next step 's Visible Text contains Next step", "snapshot=SelectRespondents_2.inf");
	truclient_step("3", "Select Respondent Details from Next step listbox", "snapshot=SelectRespondents_3.inf");
	lr_start_transaction("003_005_ECM_SelectUpdateRespondents");
	truclient_step("4", "Click on Go button", "snapshot=SelectRespondents_4.inf");
	lr_end_transaction("003_005_ECM_SelectUpdateRespondents",0);

	return 0;
}
