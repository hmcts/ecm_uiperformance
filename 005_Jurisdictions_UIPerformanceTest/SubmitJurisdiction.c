//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SubmitJurisdiction()
{
	lr_start_transaction("005_009_ECM_SubmitNewJurisdiction");
	truclient_step("1", "Click on Submit button", "snapshot=SubmitJurisdiction_1.inf");
	truclient_step("2", "Verify Case #1618 2376 0307... 's Visible Text contains has been updated with event: Jurisdiction", "snapshot=SubmitJurisdiction_2.inf");
	lr_end_transaction("005_009_ECM_SubmitNewJurisdiction",0);
	truclient_step("3", "Wait 3 seconds", "snapshot=SubmitJurisdiction_3.inf");
	lr_start_transaction("005_010_ECM_JurisdictionTab");
	truclient_step("4", "Click on Jurisdictions tab", "snapshot=SubmitJurisdiction_4.inf");
	truclient_step("5", "Verify Jurisdiction 's Visible Text contains Jurisdiction", "snapshot=SubmitJurisdiction_5.inf");
	lr_end_transaction("005_010_ECM_JurisdictionTab",0);
	truclient_step("6", "Wait 3 seconds", "snapshot=SubmitJurisdiction_6.inf");

	return 0;
}
