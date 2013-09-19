function checkpass(currentForm)
{
	if(currentForm.secretPW.value=="")
	{
		alert("Please enter a password");
		return false;
	}
	return true;
}