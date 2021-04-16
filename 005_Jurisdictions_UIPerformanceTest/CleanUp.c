//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

CleanUp()
{
	truclient_step("1", "Navigate to 'https://manage-case.per...8#Jurisdictions'", "snapshot=CleanUp_1.inf");
	lr_start_transaction("005_CleanUp");
	truclient_step("2", "Select Jurisdiction from Next step listbox", "snapshot=CleanUp_2.inf");
	truclient_step("3", "Click on Go button", "snapshot=CleanUp_3.inf");
	truclient_step("4", "Click on Remove button", "snapshot=CleanUp_4.inf");
	truclient_step("5", "Click on Remove button", "snapshot=CleanUp_5.inf");
	truclient_step("6", "Click on Continue button", "snapshot=CleanUp_6.inf");
	truclient_step("7", "Click on Submit button", "snapshot=CleanUp_7.inf");
	truclient_step("8", "Click on Case list link", "snapshot=CleanUp_8.inf");
	truclient_step("9", "Click on Reset button", "snapshot=CleanUp_9.inf");
	lr_end_transaction("005_CleanUp",0);

	return 0;
}
