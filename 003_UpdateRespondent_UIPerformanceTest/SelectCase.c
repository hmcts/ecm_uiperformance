//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SelectCase()
{
	truclient_step("1", "Wait 3 seconds", "snapshot=SelectCase_1.inf");
	lr_start_transaction("003_004_ECM_SelectCase");
	truclient_step("2", "Click on 181300564/2021 link", "snapshot=SelectCase_2.inf");
	lr_end_transaction("003_004_ECM_SelectCase",0);

	return 0;
}
