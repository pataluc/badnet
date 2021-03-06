<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/t_user.inc";
include dirname(__FILE__)."/menu.inc";

// Titre  du navigateur
$users    = "Benutzer";

// Titres des fenetres
$tNewUser  = "Benutzer erstellen";
$tDelUsers = "Benutzer l�schen";
$tEditUser = "Update Informationen";
$tEditPwd  = "Passwort �ndern";

// Menus
$itModify   = "Status bearbeiten";
$itPassword = "Passwort �ndern";
$itSendMail = "Email verschicken";
$itForEvent = "Turniere";
$itManager  = "Verwalter";
$itAssistant = "Betreuer";
$itAll       = "Benutzer";
$itFriend    = "Freund";
$itGuest     = "Eingeladen";
$itVisitor   = "Gast";
$itUserList  = "Mitgliederliste";

// Titre des colonnes
$rowsUsers1  = "Name";
$rowsUsers2  = "Login";
$rowsUsers3  = "Pseudonym";
$rowsUsers4  = "Email";
$rowsUsers5  = "Sprache";
$rowsUsers6  = "Erstellt";
$rowsUsers7  = "Letzter Besuch";
$rowsUsers8  = "Anzahl Logins";

$rowsManagers1  = "Name";
$rowsManagers2  = "Login";
$rowsManagers3  = "Pseudonym";
$rowsManagers4  = "Email";
$rowsManagers5  = "Sprache";
$rowsManagers6  = "Anzahl Logins";
$rowsManagers7  = "Letzter Besuch";
$rowsManagers8  = "Turnier";

$selEvents1  = "Turniere";
$selEvents2  = "Rechte";

// Label des zones
$user_nameTitle = "";
$oldPwd    = "Altes Passwort :";
$userType1     = "Administrator";
$userType2     = "Benutzer";
$rghtNotify    = "Notifier le nouvel utilisateur";
$rghtAssoId    = "Verein erlaubt :";

// Messages d'erreur
$needrowsUsers  = "Mindestens einen Benutzer ausw�hlen.";
$needselEvents  = "Mindestens ein Turnier ausw�hlen.";
$msgLoginExist  = "Dieses Login gibt es schon, bitte probieren Sie ein anderes aus !";
$msgoldPwd     = "Das Passwort ist Pflicht !";
$msgBadPwd     = "Altes Passwort falsch !";
$msgBadUpdate  = "Sie sind nicht berechtigt diesen Benutzer zu bearbeiten !";
$msgConfirmDel = "Best�tigen Sie die L�schung der Benutzer.";
$msgNoManager  = "Kein Turnierverwalter.";
$msgNoMember   = "Kein Benutzer angemeldet.";

$emailBody    = "Hallo,\n\n Sie k�nnen sich Ihre Anmeldung auf der BadNet Homepage anschauen und diese �berpr�fen. Bei Problemen oder Fragen wenden Sie sich an den Turnierverwalter.";

?>