<?php
include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
include dirname(__FILE__)."/t_asso.inc";
include dirname(__FILE__)."/t_mber.inc";

// Titre  du navigateur
$maint   = "Verwaltung";

// Titres des blocs
$tDraws  = "Disziplinen"; 
$tPairs  = "Paarungen"; 
$tAsso   = "Verein"; 
$tMember = "Mitglieder"; 
$destAssoList   = "Zielverein :";
$srcAssoList    = "Quellverein :";
$destMemberList = "Zielmitglied :";
$srcMemberList  = "Quellmitglied :";
// Titre des colonnes

// Label des listes

// Messages
$msgAsso   = "Assistent zur Vereinigung von Mannschaften.";
$msgMember = "Assistent zur Vereinigung von Doppelpaarungen.";
$msgDraws  = "Beim Import eines Turniers neue Felder, die f�r die Erstellung eines Terminkalender verwendet werden, werden nicht aktualisiert.";
$msgPairs  = "Beim Import eines Turniers k�nnen 'Phantompaarungen' entstehen. Sie k�nnen hier gel�scht werden.";
$msgMergeAsso  = "Bei der Vereinigung werden alle Spieler dem Zielverein zugeordnet. Der andere Verein wird dann gel�scht.";
$msgMergeMember  = "Bei der Vereinigung wird das Quellmitglied dem Zielmitglied zugeordnet und dann gel�scht.";

// Label des boutons
$btnDraws  = "Felder aktualisieren";
$btnPairs  = "Phatompaarungen l�schen";
$btnAsso   = "Fusion";
$btnMember = "Fusion";
$btnMerge  = "Vereinigen";
?>
