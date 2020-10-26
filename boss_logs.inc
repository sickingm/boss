<div id='sheets'>
	<h2<?php c();?>>Error Logs</h2>
	<ul>
<?php
	function logit($target) {
		global $server;
		echo "<li><a href='http://$server/common/error_log_view.php?dir=$target' rel='me' target='_top'>$target</a></li>";
}
	logit('sickingfamily');
	logit('common');
	logit('test');
	logit('cron');
	logit('cron/email_mvp');
	logit('cron/email_signup');
	logit('cron/forwarders');
	logit('mvp');
	logit('cron/sams_loan');
	logit('signups');

?>
	</ul>

</div>

<?php
