<?php

extract($_GET);
if(!empty($server) AND !empty($only_user) AND !empty($mailer_name)){
	$pgm = array(
		'mvp'=>'mvp',
		'bpbmon'=>'signup',
		'bpbtue'=>'signup',
		'bpbwed' => 'signup',
		'bpbthu'=>'signup'
	);
	
	$only= ($only_user=="all") ? '': "&only_user=$only_user";

echo "only_user=[" . $only_user ."]<br />";
echo "only=[" . $only ."]<br />";

	echo "
	<script>
		document.location.href='http://$server/cron/email_{$pgm[$mailer_name]}/email_{$pgm[$mailer_name]}.php?force=true&signup=$mailer_name$only';
	</script>
";

echo "DID NOT WORK";
	die();
 }

?>