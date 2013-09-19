<?php 
	
	if(isset($_GET['txt']))
		$word=$_GET['txt'];
	else
		$word="first call";
	
	if($word=="pong")
		$word="ping";
	else if($word=="ping")	
		$word="pong";
?>

<html><head><title>pingpong</title></head>
<body>
<form action="pingpong.php">
<p>
<?php echo "<input type='text' name='txt' value='$word'/>"; ?>
<input type="submit"/>
</p>
</form>
</body>
</html>

