function checking(currentForm)
{
	for(var i=0;i<7;i++)
	{
		if(currentForm.rad[i].checked==true)
			return true;
	}
	alert("please select something");	
	return false;	
}
