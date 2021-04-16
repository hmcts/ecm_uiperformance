//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SelectJudgement()
{
	truclient_step("1", "Select Judgment from Next step listbox", "snapshot=SelectJudgement_1.inf");
	lr_start_transaction("006_005_ECM_SearchJudgement");
	truclient_step("2", "Click on Go button", "snapshot=SelectJudgement_2.inf");
	truclient_step("3", "Verify Judgment 's Visible Text contains Judgment", "snapshot=SelectJudgement_3.inf");
	lr_end_transaction("006_005_ECM_SearchJudgement",0);
	truclient_step("4", "Wait 3 seconds", "snapshot=SelectJudgement_4.inf");

	return 0;
}
