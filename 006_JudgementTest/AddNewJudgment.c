//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

AddNewJudgment()
{
	truclient_step("1", "Continue", "snapshot=AddNewJudgment_1.inf");
	{
		truclient_step("1.1", "Click on Add new button", "snapshot=AddNewJudgment_1.1.inf");
		truclient_step("1.2", "Wait 3 seconds", "snapshot=AddNewJudgment_1.2.inf");
		truclient_step("1.3", "Click on No radio", "snapshot=AddNewJudgment_1.3.inf");
		truclient_step("1.4", "Wait 3 seconds", "snapshot=AddNewJudgment_1.4.inf");
		truclient_step("1.5", "Click on No radio", "snapshot=AddNewJudgment_1.5.inf");
		truclient_step("1.6", "Click on Day textbox", "snapshot=AddNewJudgment_1.6.inf");
		truclient_step("1.7", "Type 16 in Day textbox", "snapshot=AddNewJudgment_1.7.inf");
		truclient_step("1.8", "Click on Month textbox", "snapshot=AddNewJudgment_1.8.inf");
		truclient_step("1.9", "Type 03 in Month textbox", "snapshot=AddNewJudgment_1.9.inf");
		truclient_step("1.10", "Click on Year textbox", "snapshot=AddNewJudgment_1.10.inf");
		truclient_step("1.11", "Type 2021 in Year textbox", "snapshot=AddNewJudgment_1.11.inf");
		truclient_step("1.12", "Select Judgment from Judgment Type listbox", "snapshot=AddNewJudgment_1.12.inf");
		truclient_step("1.13", "Wait 3 seconds", "snapshot=AddNewJudgment_1.13.inf");
		truclient_step("1.14", "Select Reconsideration from Judgment Type listbox", "snapshot=AddNewJudgment_1.14.inf");
		truclient_step("1.15", "Select Liability from Liability (Optional) listbox", "snapshot=AddNewJudgment_1.15.inf");
		truclient_step("1.16", "Click on Add new button", "snapshot=AddNewJudgment_1.16.inf");
		truclient_step("1.17", "Wait 3 seconds", "snapshot=AddNewJudgment_1.17.inf");
		truclient_step("1.18", "Select ADT from Jurisdiction listbox", "snapshot=AddNewJudgment_1.18.inf");
		truclient_step("1.19", "Click on Day textbox", "snapshot=AddNewJudgment_1.19.inf");
		truclient_step("1.20", "Type 16 in Day textbox", "snapshot=AddNewJudgment_1.20.inf");
		truclient_step("1.21", "Type 03 in Month textbox", "snapshot=AddNewJudgment_1.21.inf");
		truclient_step("1.22", "Type 2021 in Year textbox", "snapshot=AddNewJudgment_1.22.inf");
		truclient_step("1.23", "Type 16 in Day textbox", "snapshot=AddNewJudgment_1.23.inf");
		truclient_step("1.24", "Type 03 in Month textbox", "snapshot=AddNewJudgment_1.24.inf");
		truclient_step("1.25", "Type 2021 in Year textbox", "snapshot=AddNewJudgment_1.25.inf");
		truclient_step("1.26", "Type UI Performance test Run 16/03/2021 in Judgment Notes (Optional) textbox", "snapshot=AddNewJudgment_1.26.inf");
		truclient_step("1.27", "Click on No radio", "snapshot=AddNewJudgment_1.27.inf");
		truclient_step("1.28", "Click on No radio", "snapshot=AddNewJudgment_1.28.inf");
		truclient_step("1.29", "Click on No radio", "snapshot=AddNewJudgment_1.29.inf");
		truclient_step("1.30", "Click on No radio", "snapshot=AddNewJudgment_1.30.inf");
		truclient_step("1.31", "Click on No radio", "snapshot=AddNewJudgment_1.31.inf");
		truclient_step("1.32", "Click on No radio", "snapshot=AddNewJudgment_1.32.inf");
		truclient_step("1.33", "Wait 3 seconds", "snapshot=AddNewJudgment_1.33.inf");
		lr_start_transaction("006_006_ECM_AddNewJudgementContinue");
		truclient_step("1.34", "Click on Continue button", "snapshot=AddNewJudgment_1.34.inf");
	}
	truclient_step("2", "Verify Judgment 's Visible Text contains Judgment", "snapshot=AddNewJudgment_2.inf");
	lr_end_transaction("006_006_ECM_AddNewJudgementContinue",0);
	truclient_step("3", "Wait 3 seconds", "snapshot=AddNewJudgment_3.inf");

	return 0;
}
