<?php
include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/t_user.inc";

$inst = "BadNet Installation";

// Titres des fenetres
$leftTitle = "Badminton Netware";
$rightTitle = "Installation";

// Label des zones de saisies
$serverDb  = "Server Adresse :";
$loginDb   = "Verbindungslogin :";
$passDb    = "Verbindungspasswort :";
$typeDb    = "Serverart :";
$langDb    = "Installationssprache :";

$choixDb1 = "Neue Datenbank";
$choixDb2 = "Existierende Datenbank benutzen";
$listDb   = "Datenbank ausw�hlen &nbsp; :";
$newDb    = "Name der neuen Datenbank &nbsp; :";
$prefxDb  = "Pr�fix der BadNet Tabellen in der Datenbank :";

$blkEmail = "Postaccount";
$host = "SMTP Server :";
$port = "Verbindungsport :";
$userLog = "Benutzer :";
$password = "Passwort :";

$blkTitle  = "Titel";
$ffbaEmail = "Email FFBa :";
$ffbaUrl = "Url Spielerkartei (National) :";
$ibfUrl = "Url Spielerkartei (International) :";

$blkUrl    = "Externe Seite";
$mainTitle = "Titel der Seite:";
$subTitle  = "Untertitel Seite:";



// Legende des blocs
$blkServer = "Server";
$blkBase   = "Datenbank";
$blkAdmi   = "Administrator";

// Label des boutons
$btnNext = "N�chste >>";

// Messages d'erreur
$msgErrDir = "Die ordner m�ssen existieren und schreibbar sein. Die Installation wird abgebrochen.";
$msgDirNoRigth = "Dieser Ordner muss f�r alle schreibbar sein. Rechte �ndern.";
$msgDirNoExist = "Dieser Ordner muss vorhanden sein.";

$msgserverDb = "Die Serveradresse muss angegeben werden. Wenn sie diese nicht kennen oder unsicher snid versuchen sie es mit: localhost.";
$msgloginDb   = "Login ist Pflicht !";
$msgpassDb    = "Das Passwort ist Pflicht !";
$msgnewDb      = "Name der neuen Datenbank !";
$msgConnectNOK = "Server Verbindung unm�glich";
$msgFileCreation = "Fehler beim erstellen der Installationsdatei.";
$msgBaseCreation = "Fehler beim erstellen der Datenbank.";
$msgErrorRight   = "Sie m�ssen die Schreibrechte f�r den Ordner besitzen in dem BadNet installiert ist. Installation abgebrochen.";

// Labels explicatifs
$TutServer = "Die Installation ben�tigt Verbindung mit der Datenbank. Bitte die Informationen �ber den Datenbankenserver angeben.";

$TutDatabase = "Die Verbindung zum Datenbankenserver war erfolgreich. Bitte die Datenbank ausw�hlen.";

$TutAdmin = "Die Datenbank ist korrekt installiert. Sie m�ssen nun einen Administrator erstellen. <BR>Er ist als einziger berechtigt auf die Datenbank aller  Turniere zuzugreifen und diese zu �ndern.<BR> Er ist der einzige der die Rechte der anderen Benutzer verwalten kann. <BR>";

?>