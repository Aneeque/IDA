function validator(currentform)
{
	if(currentform.customer.value=="")
	{
		alert("please enter your name");
		currentform.customer.value="customer name here";
		return false;	
	}
	return true;
}
function empty(element)
{
	element.value="";
}