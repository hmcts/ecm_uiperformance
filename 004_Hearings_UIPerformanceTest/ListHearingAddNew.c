//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

ListHearingAddNew()
{
	truclient_step("1", "Verify List Hearing 's Visible Text contains List Hearing", "snapshot=ListHearingAddNew_1.inf");
	truclient_step("2", "Verify Add new 's Visible Text contains Add new", "snapshot=ListHearingAddNew_2.inf");
	truclient_step("3", "Continue", "snapshot=ListHearingAddNew_3.inf");
	{
		truclient_step("3.1", "Click on Add new button", "snapshot=ListHearingAddNew_3.1.inf");
		truclient_step("3.2", "Type 003003003003003 in Hearing number textbox", "snapshot=ListHearingAddNew_3.2.inf");
		truclient_step("3.3", "Select Hearing from Hearing type listbox", "snapshot=ListHearingAddNew_3.3.inf");
		truclient_step("3.4", "Click on In person", "snapshot=ListHearingAddNew_3.4.inf");
		truclient_step("3.5", "Click on Yes", "snapshot=ListHearingAddNew_3.5.inf");
		truclient_step("3.6", "Select Leeds from Hearing Venue listbox", "snapshot=ListHearingAddNew_3.6.inf");
		truclient_step("3.7", "Click on Estimated hearing length textbox", "snapshot=ListHearingAddNew_3.7.inf");
		truclient_step("3.8", "Type 2 in Estimated hearing length textbox", "snapshot=ListHearingAddNew_3.8.inf");
		truclient_step("3.9", "Select Days from Days, Hours or Minutes listbox", "snapshot=ListHearingAddNew_3.9.inf");
		truclient_step("3.10", "Click on Sit Alone radiogroup", "snapshot=ListHearingAddNew_3.10.inf");
	}

	return 0;
}
