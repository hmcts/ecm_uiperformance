//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

CleanUp()
{
	lr_start_transaction("006_CleanUp");
	truclient_step("1", "Select Judgment from Next step listbox", "snapshot=CleanUp_1.inf");
	truclient_step("2", "Click on Go button", "snapshot=CleanUp_2.inf");
	truclient_step("3", "Wait 3 seconds", "snapshot=CleanUp_3.inf");
	truclient_step("4", "Click on Remove button", "snapshot=CleanUp_4.inf");
	truclient_step("5", "Wait 3 seconds", "snapshot=CleanUp_5.inf");
	truclient_step("6", "Click on Remove button", "snapshot=CleanUp_6.inf");
	truclient_step("7", "Wait 3 seconds", "snapshot=CleanUp_7.inf");
	truclient_step("8", "Click on Continue button", "snapshot=CleanUp_8.inf");
	truclient_step("9", "Wait 3 seconds", "snapshot=CleanUp_9.inf");
	truclient_step("10", "Click on Submit button", "snapshot=CleanUp_10.inf");
	truclient_step("11", "Wait 3 seconds", "snapshot=CleanUp_11.inf");
	truclient_step("12", "Click on Case list link", "snapshot=CleanUp_12.inf");
	truclient_step("13", "Wait 3 seconds", "snapshot=CleanUp_13.inf");
	truclient_step("14", "Click on Reset button", "snapshot=CleanUp_14.inf");
	lr_end_transaction("006_CleanUp",0);
	truclient_step("15", "Wait 3 seconds", "snapshot=CleanUp_15.inf");

	return 0;
}
