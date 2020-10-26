<?php

/*
 This included file, used by boss.php, returns the list of the various email cron jobs
 If another one is needed just append the name to the list.
 It assumes that the cron job requires the following input 
 	- job name (identical to the mailers identified below)
 	- force (causes the mailer to run even if not the correct day to do so)
 	- only_user (name of user to send mail to, test string as firstname lastname)
 and that the db has defined the following fields (among others):
 	- first_name
 	- last_name
 	- email
 */
$mailers = array (
	'bpbmon',
	'bpbtue',
	'bpbwede',
	'bpbthu',
	'mvp')

?>