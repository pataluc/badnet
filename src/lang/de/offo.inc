<?php
include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
include dirname(__FILE__)."/database.inc";
include dirname(__FILE__)."/t_mber.inc";
include dirname(__FILE__)."/t_regi.inc";

// Titre  du navigateur
$offo   = "Anmeldungen Offizielle und Andere";

// Titres des fenetres
$tNewRegOfficial    = "Offizielle Person anmelden";
$tNewRegistration   = "Neue Anmeldung";
$tEditRegistration  = "Anmeldung bearbeiten";
$tDelRegistration   = "Anmeldung l�schen";
$tPubliMembers      = "Anmeldungen ver�ffentlichen";

// Titre  des menus
$itRegisterMember = "Neue Anmeldung";
$itActivite       = "Aktivit�tskartei PDF";

// titre des blocs
$blkAdmi  = "Administrativ";
$blkRegi  = "Anmeldung";
$blkCriteria   = "Suchkriterien";

// Label des zones
$mberSexeLabel  = "Geschlecht :";
$rowsMembers1   = "Geschlecht";
$rowsMembers2   = "Name";
$rowsMembers3   = "Vorname";

$rowsOfficials1  = "Datum";
$rowsOfficials2  = "Photo";
$rowsOfficials3  = "NAME Vorname";
$rowsOfficials4  = "Geschlecht";
$rowsOfficials5  = "Status";
$rowsOfficials6  = "Funktion";
$rowsOfficials7  = "NOC";
$rowsOfficials8  = "Mannschaft";

// Label des listes

// Messages d'erreur
$msgNoMemberFound    = "Keine Person mit diesen Kriterien gefunden !";
$msgNeedRegistration    = "Sie m�ssen mindestens einen angemeldeten ausw�hlen.";
$msgNoRegisteredOfficials = "Keine Offizieler angemeldet";
$msgNoAutoPubli          = "Ver�ffentlichung nicht m�glich, das Mannschaft nicht ver�ffentlicht";

// Label des boutons
$btnAddMber     = "Mitglied erstellen";
$btnValidate    = "Best�tigen";
$btnSearch      = "Suchen";
$btnAddPhoto    = "Photo ausw�hlen";

?>