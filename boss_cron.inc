<?php
/**
 *   	+---------------+
 * 	 	| boss_cron.inc |
 * 		+---------------+
 
 * Executes various cron jobs
 *
 * Type one is a simple link, e.g., an href to cron/forwarders/_cron_forwarders_create.php
 * Type two requires a number of variables to be defined.  
 *
 * Specifically, in order to generate an emailer to a single user, we need to define:
 * 	- the event (bpbmon, etc.)
 * 	- the user name
 * 	- whether we are testing it on localhost or in reality on sickingfamily.com
 *
 * The first item is a selection from a list, the second is a text input and the
 * third has already been defined so it is implemented as a hidden variable.
 *
 * The cron job in question will be executed as soon as all of these variables are defined,    only
 * so the first order of business is to determine if, indeed, they are.  This is 
 * accomplished by calling cron_detect() at the very beginning of this application
 */

 $default = (empty($only_user) AND $server=="localhost") ? 'Matt Sicking' : '';
?>
	<div id='cron'>
		<h2 <?php c(); $only_user?>>Cron Jobs</h2>
		<span class='list'>
			<a href='http://<?php echo $server;?>/cron/forwarders/_cron_forwarders_create.php'>
				Forwarders
			</a>
		</span><br />
		<span class='list'>Mailers:
		<form method='get' id='mailer_form'>
			<select name = "mailer_name" required><option disabled selected value="" hidden >Mailer:</option>
<?php
	mailer_option("mvp");
	mailer_option("bpbmon");
	mailer_option("bpbtue");
	mailer_option("bpbwed");
	mailer_option("bpbthu");

?>
			</select><br />
			<input type='text' name='only_user' placeholder='User:' value='<?php echo !empty($only_user) ? $only_user : $default;?>' /><br />
			<input type="submit" value="Submit" />
			<input type="hidden" name = "server" value="<?php echo $server;?>"/>
		</form>
		</span>
	</div>
<?php	function mailer_option($mailer,$val=""){
	// Creates an individual option for the mailer select form
		global $mailer_name;
		$selected = (isset($mailer_name) && $mailer_name==$mailer) ? "selected" : "";
		$value = empty($val) ? $mailer : $val;
		echo "<option value ='$mailer' $selected>$value</option>\n";
	}
?>