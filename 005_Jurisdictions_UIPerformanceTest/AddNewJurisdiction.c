//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

AddNewJurisdiction()
{
	lr_start_transaction("005_007_ECM_AddNewJurisdiction");
	truclient_step("1", "Click on Add new button", "snapshot=AddNewJurisdiction_1.inf");
	lr_end_transaction("005_007_ECM_AddNewJurisdiction",0);
	truclient_step("2", "Select Input in error from Outcome (Optional) listbox", "snapshot=AddNewJurisdiction_2.inf");
	truclient_step("3", "Select ADT from Jurisdiction CodeThis... listbox", "snapshot=AddNewJurisdiction_3.inf");
	truclient_step("4", "Select Unsuccessful at hearing from Outcome (Optional) listbox", "snapshot=AddNewJurisdiction_4.inf");
	lr_start_transaction("005_008_ECM_AddNewJurisdictionContinue");
	truclient_step("5", "Click on Continue button", "snapshot=AddNewJurisdiction_5.inf");
	lr_end_transaction("005_008_ECM_AddNewJurisdictionContinue",0);
	truclient_step("6", "Wait 3 seconds", "snapshot=AddNewJurisdiction_6.inf");

	return 0;
}
