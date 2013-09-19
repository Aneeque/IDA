function checked(currentForm)
{
	if(currentForm.c1.checked==true)
		return true;

	if(currentForm.c2.checked==true)
		return true;
	
	if(currentForm.c3.checked==true)
		return true;
	alert("Please select one option");
	return false;
}