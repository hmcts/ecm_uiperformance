//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SelectJurisdiction()
{
	truclient_step("1", "Select Jurisdiction from Next step listbox", "snapshot=SelectJurisdiction_1.inf");
	lr_start_transaction("005_006_ECM_SelectJuridiction");
	truclient_step("2", "Click on Go button", "snapshot=SelectJurisdiction_2.inf");
	truclient_step("3", "Verify Jurisdiction 's Visible Text contains Jurisdiction", "snapshot=SelectJurisdiction_3.inf");
	lr_end_transaction("005_006_ECM_SelectJuridiction",0);
	truclient_step("4", "Wait 3 seconds", "snapshot=SelectJurisdiction_4.inf");

	return 0;
}
