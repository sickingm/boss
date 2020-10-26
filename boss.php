<!DOCTYPE html>
<html lang="en">

<head>
	<title>Master Control Panel</title>
	<link href="boss.css" rel="stylesheet" type="text/css" />
	<script>
		function sbmt() {
			document.getElementById("input_form").submit();
		}
	</script>
</head>

<?php
require 'boss_cron_detect.inc';
?>


<body>
	<div id='boss-page'>
		<div id='title'>
			<h1>Master Control Panel</h1>
		</div>

		<?php
		require 'boss_select_server.inc';
		require 'boss_admin.inc';
		require 'boss_cron.inc';
		require 'boss_misc.inc';
		require 'boss_logs.inc';
		?>

	</div>

	<div id="aa">&nbsp;</div>
	<div id="cc">&nbsp;</div>

</body>

</html>
<?php
function c()
{
	global $server;
	echo " class='";
	if ($server == 'localhost') echo "localhost'";
	else echo "sfdc'";
}
