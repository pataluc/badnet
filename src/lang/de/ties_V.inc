<?php

include dirname(__FILE__)."/badnet_V.inc";
include dirname(__FILE__)."/menu_V.inc";

// Titre  du navigateur
$ties      = "Begegnungen";

// Titres des fenetres
$tieTitle = 'Begegnung :';
//$tTieResult = 'R�sultat de la rencontre';

// Menus 
$itDivision = "Ergebnis";

// Titre des colonnes

$titleDraw0   = "Erste Runde";
$titleDraw1   = "Zweite Runde";
$titleDraw2   = "Dritte Runde";
$drawTitle1   = "Sieger";
$drawTitle2   = "Finale";
$drawTitle3   = "Halbfinale";
$drawTitle4   = "Viertelfinale";


$rowsMatchs1  = "Spiel";
$rowsMatchs4  = "Tendenz";
$rowsMatchs5  = "Ergebnis<br />A";
$rowsMatchs6  = "Ergebnis<br />B";
$rowsMatchs7  = "Satz<br />A";
$rowsMatchs8  = "Satz<br />B";
$rowsMatchs9  = "Pkt<br />A";
$rowsMatchs10  = "Pkt<br />B";


$rowsRanking1 = "Mannschaft";
$rowsRanking2 = "Abk�rzung";
$rowsRanking3 = "Pkt";
$rowsRanking4 = "P";
$rowsRanking5 = "V";
$rowsRanking6 = "E";
$rowsRanking7 = "D";
$rowsRanking8 = "Spiele<br />++";
$rowsRanking9 = "Spiele<br />--";
$rowsRanking10 = "Spiele<br />diff";
$rowsRanking11 = "S�tze<br />++";
$rowsRanking12 = "S�tze<br />--";
$rowsRanking13 = "S�tze<br />diff";
$rowsRanking14 = "Pkt<br />++";
$rowsRanking15 = "Pkt<br />--";
$rowsRanking16 = "Pkt<br />diff";
/*

$tiesList  = "Rencontres du groupe";
$tiesList1  = "Equipe";
*/
// Label des champs
/*
$tdivsList   = "Divisions";
$divsList   = "Divisions :";
$groupsList = "Groupes";
$resultsDiv = "R�sultats :";
$rankingsDiv = "Classements :";
$penaltiesL  = "Bonus/malus :";
$penaltiesR  = "Bonus/malus :";
$t2rPenalties = "Bonus(+)/malus(-) :";
*/
$draw_name  = "Liga :";
$rund_name  = "Gruppe :";
$tie_place  = "Ort der Begegnung :";
$tie_step   = "Runde :";
$tie_schedule  = "Datum :";


// Messages d'erreur
/*
$msgNoTeam     = "Pas d'�quipe dans ce groupe";
$msgNoDivs     = "Aucune division d�clar�e";
$msgNoTeams    = "Aucune �quipe dans les groupes de cette division.";
$msgNotSamePlayer = "Une paire doit avoir deux joueurs diff�rents";
*/
$msgResult = "Deux �quipes � �galit�s sont d�partag�es par le r�sultat de la rencontre les ayant oppos�es. ties_V.inc";
$msgRank   = "Bei Punktgleichheit z�hlt zuerst die Spieldifferenz, dann die Satzdifferenz und letztendlich die Spieldifferenz.";
$msgIncompletedTie = "Begegnung unvollst�ndig; Eintrag unm�glich.";
$msgNoGroups   = "Keine Gruppe f�r eine Rangliste.";

// Label des boutons
/*
$btnAddPlayer  = "Ajout joueur";
$btnResult     = "Saisir r�sultats";
$btnValid      = "Valider les r�sultats";
$btnPdf          = "Version PDF";
$btnPdfRanking   = "R�sultats PDF";
$btnPdfSchedule  = "Horaires PDF";
$btnPdfAllTies   = "Rencontres PDF";
*/
$btnPdf          = "PDF Version";
$btnPdfRanking   = "Ergebnisse PDF";
$btnPdfSchedule  = "Uhrzeiten PDF";
$btnPdfAllTies   = "Begegnungen PDF";
?>