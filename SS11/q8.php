<?php
	$result=false;
	if(isset($_GET['pass']))
		$result=true;
	if($_GET['pass']=="")
		$result=false;
	$refer=$_SERVER['HTTP_REFERER'];
?>
	
<html><head><title>q8</title></head>
<body><p>
<?php if($result==true)
	echo("OK");
	else
	echo ("try again");
	echo "<a href='$refer'>Go back</a>";
?>
</p></body></html>

		
