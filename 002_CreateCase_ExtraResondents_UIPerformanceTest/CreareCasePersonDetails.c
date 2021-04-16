//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

CreareCasePersonDetails()
{
	truclient_step("1", "Verify Type of claimant 's Visible Text contains Type of claimant", "snapshot=CreareCasePersonDetails_1.inf");
	truclient_step("2", "Continue", "snapshot=CreareCasePersonDetails_2.inf");
	{
		truclient_step("2.1", "Select Mr from Title (Optional) listbox", "snapshot=CreareCasePersonDetails_2.1.inf");
		truclient_step("2.2", "Click on First Name textbox", "snapshot=CreareCasePersonDetails_2.2.inf");
		truclient_step("2.3", "Type UI in First Name textbox", "snapshot=CreareCasePersonDetails_2.3.inf");
		truclient_step("2.4", "Type PerfTest001 in Last Name textbox", "snapshot=CreareCasePersonDetails_2.4.inf");
		truclient_step("2.5", "Click on Day textbox", "snapshot=CreareCasePersonDetails_2.5.inf");
		truclient_step("2.6", "Type 01 in Day textbox", "snapshot=CreareCasePersonDetails_2.6.inf");
		truclient_step("2.7", "Type 01 in Month textbox", "snapshot=CreareCasePersonDetails_2.7.inf");
		truclient_step("2.8", "Type 2000 in Year textbox", "snapshot=CreareCasePersonDetails_2.8.inf");
		truclient_step("2.9", "Select Male from Gender (Optional) listbox", "snapshot=CreareCasePersonDetails_2.9.inf");
		truclient_step("2.10", "Click on Enter a UK postcode textbox", "snapshot=CreareCasePersonDetails_2.10.inf");
		truclient_step("2.11", "Type sw1h9hg in Enter a UK postcode textbox", "snapshot=CreareCasePersonDetails_2.11.inf");
		truclient_step("2.12", "Click on Find address button", "snapshot=CreareCasePersonDetails_2.12.inf");
		truclient_step("2.13", "Select Flat 75, Vandon Court, 6...y France, London from Select an address listbox", "snapshot=CreareCasePersonDetails_2.13.inf");
		lr_start_transaction("001_006_ECM_CreateCasePersonalDetailsContinue");
		truclient_step("2.14", "Click on Continue button", "snapshot=CreareCasePersonDetails_2.14.inf");
		lr_end_transaction("001_006_ECM_CreateCasePersonalDetailsContinue",0);
	}
	truclient_step("3", "Wait 3 seconds", "snapshot=CreareCasePersonDetails_3.inf");

	return 0;
}
