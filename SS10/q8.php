<?php
	if(isset($_GET['txt']))
		$word=$_GET['txt'];
	if($word=="")
		$word="mango";
	
	$url="http://de.wikipedia.org/wiki/".$word;
?>
<html><head><title>php</title></head>
<body><p>
<?php echo "<a href='$url'>$word</a>"; ?>
</p>
</body>
</html>

	