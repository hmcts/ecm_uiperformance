//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SignOut()
{
	truclient_step("1", "Click on Sign out link", "snapshot=SignOut_1.inf");
	truclient_step("2", "Verify Sign in 's Visible Text contains Sign in", "snapshot=SignOut_2.inf");

	return 0;
}
