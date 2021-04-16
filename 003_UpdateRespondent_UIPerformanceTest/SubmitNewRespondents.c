//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SubmitNewRespondents()
{
	lr_start_transaction("003_008_ECM_AddNewRepondentSubmit");
	truclient_step("1", "Click on Submit button", "snapshot=SubmitNewRespondents_1.inf");
	lr_end_transaction("003_008_ECM_AddNewRepondentSubmit",0);
	truclient_step("2", "Wait 3 seconds", "snapshot=SubmitNewRespondents_2.inf");
	truclient_step("3", "Verify has been updated with ev...spondent Details 's Visible Text contains has been updated with ev...spondent Details", "snapshot=SubmitNewRespondents_3.inf");

	return 0;
}
