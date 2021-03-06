<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";

// Titre  du navigateur
$ties      = "Rencontres";

// Titres des fenetres
$tieTitle = 'Rencontre :';
$tTieResult = 'R�sultat de la rencontre';
$tDetail    = 'D�tails';

// Menus 

// Titre des colonnes
$titleDraw0   = "Premier tour";
$titleDraw1   = "Deuxi�me tour";
$titleDraw2   = "Troisi�me tour";
$drawTitle1   = "Vainqueur";
$drawTitle2   = "Finale";
$drawTitle3   = "Demi-finale";
$drawTitle4   = "Quart de finale";

$rowsMatchs1  = "Match";
$rowsMatchs4  = "R�sultat";
$rowsMatchs5  = "Score<br />A";
$rowsMatchs6  = "Score<br />B";
$rowsMatchs7  = "Set<br />A";
$rowsMatchs8  = "Set<br />B";
$rowsMatchs9  = "Pt<br />A";
$rowsMatchs10  = "Pt<br />B";


$rowsRanking1 = "Equipe";
$rowsRanking2 = "Sigle";
$rowsRanking3 = "Pts";
$rowsRanking4 = "P";
$rowsRanking5 = "V";
$rowsRanking6 = "EV";
$rowsRanking7 = "E";
$rowsRanking8 = "ED";
$rowsRanking9 = "D";
$rowsRanking10 = "Matchs<br />++";
$rowsRanking11 = "Matchs<br />--";
$rowsRanking12 = "Matchs<br />diff";
$rowsRanking13 = "Sets<br />++";
$rowsRanking14 = "Sets<br />--";
$rowsRanking15 = "Sets<br />diff";
$rowsRanking16 = "Pts<br />++";
$rowsRanking17 = "Pts<br />--";
$rowsRanking18 = "Pts<br />diff";

$tiesList  = "Rencontres du groupe";
$tiesList1  = "Equipe";

// Label des champs
$tdivsList   = "Divisions";
$divsList   = "Divisions :";
$groupsList = "Groupes";
$resultsDiv = "R�sultats :";
$rankingsDiv = "Classements :";
$penaltiesL  = "Bonus/malus :";
$penaltiesR  = "Bonus/malus :";
$t2rPenalties = "Bonus(+)/malus(-) :";

$draw_name  = "Division :";
$rund_name  = "Groupe :";
$tie_place  = "Lieu de la rencontre :";
$tie_step   = "Tour :";
$tie_schedule  = "Date pr�vue :";

$tieToValid    = "Rencontres � valider :";
$tieToComplete = "Rencontre � saisir :";
$tieFinished   = "Rencontres termin�es :";

$team1   = "Equipe hote:";
$team2   = "Equipe visiteuse:";


// Messages d'erreur
$msgNoTeam     = "Pas d'�quipe dans ce groupe";
$msgNoDivs     = "Aucune division d�clar�e";
$msgNoGroups   = "Aucun groupe dans cette division";
$msgNoTeams    = "Aucune �quipe dans les groupes de cette division.";
$msgNotSamePlayer = "Une paire doit avoir deux joueurs diff�rents";
$msgpenaltiesL    = "Le bonus/malus ne peut etre vide.";
$msgpenaltiesR    = $msgpenaltiesL;

$msgResult = "Deux �quipes � �galit�s sont d�partag�es par le r�sultat de la rencontre les ayant oppos�es.";
$msgRank   = "En cas d'�galit�, les �quipes sont d�partag�es par la diff�rence de match gagn�s/perdus. Si l'�galit� persiste, c'est la diff�rence set gagn�s/perdus qui est utilis�e. En dernier lieu, la diff�rence point gagn�s/perdus est prise en compte.";
$msgIncompletedTie = "Rencontre incompl�te; saisie impossible.";

// Label des boutons
$btnAddPlayerL  = "Ajout joueur";
$btnAddPlayerR  = $btnAddPlayerL;
$btnResult     = "Saisir r�sultats";
$btnValid      = "Valider les r�sultats";
$btnPdf          = "Version PDF";
$btnPdfRanking   = "R�sultats PDF";
$btnPdfSchedule  = "Horaires PDF";
$btnPdfAllTies   = "Rencontres PDF";
$btnRaz          = "Effacer";
$btnPoona        = "Export Poona";
$btnArchive      = "Archiver";
$btnDelSaisie    = "Raz date de saisie";
$btnDelValid     = "Raz date de validation";
?>