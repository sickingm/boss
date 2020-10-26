<?php
	extract($_GET);
?>

<div id='select'>
<h2<?php c();?>>Select Server</h2>
<form id='select_form'  method='get'>

<?php
if(empty($server))$server = $_SERVER['SERVER_NAME'];
echo "Current Server = $server<br />\n";
radiobutton('localhost');
radiobutton('www.sickingfamily.com');
function radiobutton($svr){
global $server;
$checked = ($svr == $server) ? "checked" : "";  // Default server is the one I'm in
echo "<p class='select'><input type='radio' name='server' value='$svr' $checked  onchange='document.getElementById(\"select_form\").submit();'>$svr</p>\n";
}
?>
</form>

</div>