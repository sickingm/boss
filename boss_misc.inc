	<div id='misc'>
		<h2<?php c(); ?>>Miscellaneous</h2>
			<ul>
				<li>
					<a href='http://<?php echo $server; ?>/sickingfamily/homepage/_homepage.php' title='sickingfamily.com'>
						SFDC
					</a>
				</li>
				<?php
				if ($server == 'localhost') echo "<li>
											<a href='http://{$server}/phpmyadmin/' 
												title='phpMyAdmin'>
												phpMyAdmin
											</a>
										</li>";
				else echo "<li>
										  <a href='https://cpanel-box5507.bluehost.com/cpsess9279771528/3rdparty/phpMyAdmin/index.php  
											title='phpMyAdmin'>
											phpMyAdmin
										  </a>
									 </li>";
				?>
				<li><a href='http://<?php echo $server; ?>/trick_fusion/trick_fusion.php' title='Trick Fusion Library'>
						Trick Fusion
					</a>
				</li>
				<li>
					<a href='http://<?php echo $server; ?>/test/' title='test directory'>
						Test
					</a>
				</li>
				<li>
					<a href="https://docs.google.com/spreadsheets/d/1gtcd_wXMb8MNwya0qSobQYLliYZPnP_mlUd9VaZQFv4/edit#gid=0" target="_blank" title="Beta Status - Sicking Family Website">
						Beta Status
					</a>
				</li>
				<li>
					<a href="https://docs.google.com/spreadsheets/d/1U4EMgiHP2FF3ewdVMGO7oJdJ80OU_RGOCCu_dTik-kg/edit#gid=0" target="_blank">
						Sam's Loan
					</a>
				</li>
			</ul>
	</div>