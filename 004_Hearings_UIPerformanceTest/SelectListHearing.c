//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SelectListHearing()
{
	truclient_step("1", "Verify Case Details 's Visible Text contains Case Details", "snapshot=SelectListHearing_1.inf");
	truclient_step("2", "Verify Next step 's Visible Text contains Next step", "snapshot=SelectListHearing_2.inf");
	truclient_step("3", "Wait 3 seconds", "snapshot=SelectListHearing_3.inf");
	lr_start_transaction("004_005_ECM_SelectListHearing");
	truclient_step("4", "Select List Hearing from Next step listbox", "snapshot=SelectListHearing_4.inf");
	truclient_step("5", "Click on Go button", "snapshot=SelectListHearing_5.inf");
	lr_end_transaction("004_005_ECM_SelectListHearing",0);
	truclient_step("6", "Wait 3 seconds", "snapshot=SelectListHearing_6.inf");

	return 0;
}
