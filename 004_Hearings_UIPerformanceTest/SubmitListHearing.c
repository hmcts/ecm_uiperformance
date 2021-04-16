//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SubmitListHearing()
{
	lr_start_transaction("004_007_ECM_ListHearingSubmit");
	truclient_step("1", "Click on Submit button", "snapshot=SubmitListHearing_1.inf");
	lr_end_transaction("004_007_ECM_ListHearingSubmit",0);

	return 0;
}
