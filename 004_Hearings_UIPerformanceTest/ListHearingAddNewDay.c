//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

ListHearingAddNewDay()
{
	truclient_step("1", "Evaluate JavaScript code //var my_results = docum...ert(my_results);", "snapshot=ListHearingAddNewDay_1.inf");
	truclient_step("2", "Evaluate JavaScript //var my_results = docum...rt(my_results1); on Add new button", "snapshot=ListHearingAddNewDay_2.inf");
	truclient_step("3", "Click on Add new button", "snapshot=ListHearingAddNewDay_3.inf");
	truclient_step("4", "Click on Add new button", "snapshot=ListHearingAddNewDay_4.inf");
	truclient_step("5", "Click on Day textbox", "snapshot=ListHearingAddNewDay_5.inf");
	truclient_step("6", "Type 14 in Day textbox", "snapshot=ListHearingAddNewDay_6.inf");
	truclient_step("7", "Click on Month textbox", "snapshot=ListHearingAddNewDay_7.inf");
	truclient_step("8", "Type 04 in Month textbox", "snapshot=ListHearingAddNewDay_8.inf");
	truclient_step("9", "Type 2021 in Year textbox", "snapshot=ListHearingAddNewDay_9.inf");
	truclient_step("10", "Click on Hour textbox", "snapshot=ListHearingAddNewDay_10.inf");
	truclient_step("11", "Type 09 in Hour textbox", "snapshot=ListHearingAddNewDay_11.inf");
	lr_start_transaction("004_006_ECM_SelectListHearingContinue");
	truclient_step("12", "Click on Continue button", "snapshot=ListHearingAddNewDay_12.inf");
	lr_end_transaction("004_006_ECM_SelectListHearingContinue",0);

	return 0;
}
