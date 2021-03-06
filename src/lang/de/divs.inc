<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
//include dirname(__FILE__)."/t_div.inc";

// Titre  du navigateur
$divs    = "Ligen";

// Titres des fenetres
$tNewDiv     = "Liga erstellen";
$tEditDiv    = "Liga bearbeiten";
$tDelDiv     = "Liga entfernen";
$tEditGroup  = "Gruppe bearbeiten";
$tDelGroups  = "Gruppe entfernen";
$tSelectTeam = "Mannschaften ausw�hlen";

// Menus 
$itForDivs  = "Ligen";
$itNewDiv   = "Hinzuf�gen";
$itDelDiv   = "L�schen";
$itUpdtDiv  = "Bearbeiten";

// Label des zones
$tGroups   = "Gruppen der Liga";

$divName  = "Name :";
$divStamp = "Abk�rzung :";
$divSize  = "Anzahl der Gruppen :";

$blkGroup = "Gruppe";
$blkNewGroup = "Neue Gruppe";

$groupName  = "Name :";
$groupStamp = "Abk�rzung :";
$groupSize  = "Anzahl der Mannschaften :";

$firstRound   = "Erste Runde";
$secondRound  = "Zweite Runde";

$divPbl1 = $itPublic;
$divPbl2 = $itPrivate;
$divPbl3 = $itConfident;

$blkNbMatch    = "Anzahl der Spiele";
$groupNbms  = "Anzahl Herreneinzel :";
$groupNbws  = "Anzahl Dameneinzel :";
$groupNbmd  = "Anzahl Herrendoppel :";
$groupNbwd  = "Anzahl Damendoppel :";
$groupNbxd  = "Anzahl Mixed :";
$groupType1 = "Gruppe";
$groupType2 = "Gruppe A/R";
$groupType3 = "KO";
$groupType4 = "Quali";
$groupRankType1 = "Tabelle";
$groupRankType2 = "Einzelergebnisse";
$groupUmpire = "Schiedsrichter :";
$groupsDiv   = "Zusammentstellung : ";
$blkTiePoint = "Punkte";
$tieWin      = "Gewonnene Spiele :";
$tieEqual    = "Unentschieden :";
$tieLoose    = "Verlorene Spiele :";
$tieWO       = "Aufgabe :";

$blkMatchPoint = "Punkte Einzelbegegnungen";
$matchWin      = "Gewonnen :";
$matchLoose    = "Verloren :";
$matchRtd      = "Unfreiwilliges W-O :";
$matchWO       = "Freiwilliges W-O :";

$groupSizemax  = "Maximale Mannschaftsanzahl:";
$groupNameno   = "Gruppe ";

$propagation = "Aligner la publication des joueurs";

// Titre de colonnes 
$rowsGroups1 = "Name";
$rowsGroups2 = "Gr��e";
$rowsGroups3 = "Typ";
$rowsGroups4 = "HE";
$rowsGroups5 = "DE";
$rowsGroups6 = "HD";
$rowsGroups7 = "DD";
$rowsGroups8 = "Mx";

$rowsTeams1  = "Mannschaft";
$rowsTeams2  = "Abk�rzung";
$rowsTeams3  = "Verein";
$rowsTeams4  = "Kapit�n";
$rowsTeams5  = "Kommentar";

$selectTeams1 = "Name";
$selectTeams2 = "Abk�rzung";
$selectTeams3 = "Kapit�n";
$selectTeams4 = "Kommentar";

$rowsGroup1 = "Mannschaft";
$rowsGroup2 = "Abk�rzung";
$rowsGroup3 = "Kommentar";

$tiesList  = "Begegnungen in der Gruppe";
$tiesList1  = "Spieltag";
$tiesList2  = "Datum";
$tiesList3  = "Ort";
$tiesList4  = "Gastgeber";
$tiesList5  = "Gast";
$tiesList6  = "Ergebnis";


// Messages d'erreur
$msgExistSerial    = "Diese Gruppe gibt es schon.";
$msgPositif        = "die Zahlen m�ssen > 0 sein.";
$msgNeedSelect     = "Mindestens eine Mannschaft ausw�hlen";
$msgTooTeam        = "Zu viele Mannschaften in dieser Gruppe";
$msgNoTeam         = "Keine Mannschaft in dieser Gruppe";
$msgNeedTeams      = $msgNeedSelect;
$msgNoGroups       = "Keine Gruppe in der Liga";
$msgNoTeams        = "Keine Mannschaften in Gruppen dieser Liga.";
$msgNoDivs         = "Keine Liga definert.";
$msgNeedGroups     = "Mindestens eine Gruppe w�hlen.";
$msgConfirmDelGroups = "Die Gruppe wird gel�scht.";
$msgConfirmDelDiv  = "Die Liga wird gel�scht. Alle Gruppen und Spiele werden entfernt!";
$msgdivName     = "Der Name ist Pflicht.";
$msgdivStamp    = "Die Abk�rzung ist Pflicht.";
$msgdivSize     = "Die Gruppenanzahl ist Pflicht.";
$msggroupName   = "Der Gruppenname ist Pflicht.";
$msggroupStamp  = "Die Abk�rzung der Gruppe ist Pflicht.";
$msggroupNbms   = "Die Anzahl der Herreneinzel ist Pflicht.";
$msggroupNbws   = "Die Anzahl der Dameneinzel ist Pflicht.";
$msggroupNbmd   = "Die Anzahl der Herrendoppel ist Pflicht.";
$msggroupNbwd   = "Die Anzahl der Damendoppel ist Pflicht.";
$msggroupNbxd   = "Die Anzahl der Mixed ist Pflicht.";
$msgmatchWin    = "Bitte d�finieren die Punkte f�r eine Einzelbegegnung.";
$msgmatchLoose  = $msgmatchWin;
$msgmatchRtd    = $msgmatchWin;
$msgmatchWO     = $msgmatchWin;
$msgtieWin    = "Bitte definieren die Punkte f�r eine Begegnung.";
$msgtieLoose  = $msgtieWin;
$msgtieEqual  = $msgtieWin;
$msgtieWO     = $msgtieWin;
$msgInfoAddTeam = "Um Mannschaften hinzuzuf�gen, speichern Sie die Gruppe und klicken Sie auf das 'bearbeiten' Icon in der ersten Zeile.";


// Label des boutons
$btnSelectTeam  = "Mannschaft aussuchen";
$btnNewTeam     = "Mannschaft erstellen";
$btnTeamUp      = "Hoch";
$btnTeamDown    = "Runter";
$btnDelTeam     = "Entfernen";
$btnEnd         = "Beenden";

$btnPdf      = "PDF";

?>