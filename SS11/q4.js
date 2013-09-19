function validator(currentform)
{
	for(var i=0;i<10;i++)
		if(currentform.rad[i].checked==true)
			return true;

	alert("Please select one");
	return false;
}