<?php
	if(isset($_GET['customer']))
		$cust=$_GET['customer'];
	else
		$cust="Amjad";
	if($cust=="")
		$cust="Amjad";
		
	$url=$_SERVER['HTTP_USER_AGENT'];

?>

<html><head><title>q8</title></head>
<body><p>Hello
<?php echo "$cust you are using the browser $url."; ?>
</p></body></html>

	