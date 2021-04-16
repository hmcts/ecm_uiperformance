//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SelectCreateCase()
{
	truclient_step("1", "Verify Case List 's Visible Text contains Case List", "snapshot=SelectCreateCase_1.inf");
	lr_start_transaction("001_003_ECM_SelectCreateCase");
	truclient_step("2", "Click on Create case link", "snapshot=SelectCreateCase_2.inf");
	lr_end_transaction("001_003_ECM_SelectCreateCase",0);
	truclient_step("3", "Wait 3 seconds", "snapshot=SelectCreateCase_3.inf");

	return 0;
}
