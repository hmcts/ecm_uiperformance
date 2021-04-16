//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Library_ECM_UI_Performance()
{
	truclient_step("1", "Function LaunchHomePage", "snapshot=ECM_UI_Performance_1.inf");
	{
		truclient_step("1.1", "Navigate to 'https://manage-case.per...form.hmcts.net/'", "snapshot=ECM_UI_Performance_1.1.inf");
	}
	truclient_step("2", "Function SearchCase", "snapshot=ECM_UI_Performance_2.inf");
	{
		truclient_step("2.1", "Verify Case type 's Visible Text contains Case type", "snapshot=ECM_UI_Performance_2.1.inf");
		truclient_step("2.2", "Verify Submission Reference 's Visible Text contains Submission Reference", "snapshot=ECM_UI_Performance_2.2.inf");
		truclient_step("2.3", "Select Leeds - Singles from Case type listbox", "snapshot=ECM_UI_Performance_2.3.inf");
		truclient_step("2.4", "Click on Case Number textbox", "snapshot=ECM_UI_Performance_2.4.inf");
		truclient_step("2.5", "Type 20210209 in Case Number textbox", "snapshot=ECM_UI_Performance_2.5.inf");
		truclient_step("2.6", "Click on Apply button", "snapshot=ECM_UI_Performance_2.6.inf");
	}
	truclient_step("3", "Function SelectCase", "snapshot=ECM_UI_Performance_3.inf");
	{
		truclient_step("3.1", "Verify Displaying 's Visible Text contains Displaying", "snapshot=ECM_UI_Performance_3.1.inf");
		truclient_step("3.2", "Click on 20210209/7 link", "snapshot=ECM_UI_Performance_3.2.inf");
	}
	truclient_step("4", "Function CleanUp", "snapshot=ECM_UI_Performance_4.inf");
	{
		truclient_step("4.1", "Click on Case list link", "snapshot=ECM_UI_Performance_4.1.inf");
		truclient_step("4.2", "Click on Reset button", "snapshot=ECM_UI_Performance_4.2.inf");
	}
	truclient_step("5", "Function SignOut", "snapshot=ECM_UI_Performance_5.inf");
	{
		truclient_step("5.1", "Click on Sign out link", "snapshot=ECM_UI_Performance_5.1.inf");
	}

	return 0;
}
