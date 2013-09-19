function checks(currentform)
{
	if(currentform.term.checked==false)
	{	
		alert("please accept the terms");
		return false;
	}
	if(currentform.nam.value=="")
	{
		alert("please enter a name");
		return false;
	}
	return true;
}