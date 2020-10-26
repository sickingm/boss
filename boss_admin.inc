<?php
	$url  =
"<td style='text-align: center;'>
			<a href='http://##SERVER##/signups/##PROG##.php?user=Matt%20Sicking&amp;signup=bpb##DATE##&sort_by=age%20desc' rel='me' target='_top'>
			##DATE##
			</a>
		</td>";
	$url = str_replace("##SERVER##", $server,$url);
	$url_admin = str_replace("##PROG##",'admin',$url);
	$url_signup = str_replace('##PROG##','index',$url);
	$url="<tr>$url_admin$url_signup</tr>";
?>

	<div id='admin'>
	<table style='margin-top:1em'>
		<tr>
			<th>Admin&nbsp;</th>
			<th>Signup</th>
		</tr>
<?php all_days($url);?>
	</table>
	</div>
<?php
function all_days($url) {
	echo str_replace('##DATE##', 'mon', $url);
	echo str_replace('##DATE##', 'tue', $url);
	echo str_replace('##DATE##', 'wed', $url);
	echo str_replace('##DATE##', 'thu', $url);
}
?>