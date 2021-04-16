//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SubmitJudgement()
{
	lr_start_transaction("006_007_ECM_SubmitNewJudgment");
	truclient_step("1", "Click on Submit button", "snapshot=SubmitJudgement_1.inf");
	truclient_step("2", "Verify Judgement Added 's Visible Text contains has been updated with event: Judgment", "snapshot=SubmitJudgement_2.inf");
	lr_end_transaction("006_007_ECM_SubmitNewJudgment",0);
	truclient_step("3", "Wait 3 seconds", "snapshot=SubmitJudgement_3.inf");

	return 0;
}
