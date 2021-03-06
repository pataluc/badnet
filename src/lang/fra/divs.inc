<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
//include dirname(__FILE__)."/t_div.inc";

// Titre  du navigateur
$divs    = "Divisions";

// Titres des fenetres
$tNewDiv     = "Cr�ation d'une division";
$tEditDiv    = "Modification d'une division";
$tDelDiv     = "Suppression d'une division";
$tEditGroup  = "Modification d'un groupe";
$tDelGroups  = "Suppression de groupe";
$tSelectTeam = "S�lection des �quipes";

// Menus 
$itForDivs  = "Divisions";
$itNewDiv   = "Ajouter";
$itDelDiv   = "Supprimer";
$itUpdtDiv  = "Modifier";

// Label des zones
$tGroups   = "Groupes de la division";

$divName  = "Nom :";
$divStamp = "Sigle :";
$divSize  = "Nombre de groupes :";

$blkGroup = "Groupe";
$blkNewGroup = "Nouveaux groupes";

$groupName  = "Nom :";
$groupStamp = "Sigle :";
$groupSize  = "Nombre d'�quipes :";

$firstRound   = "Premier tour";
$secondRound  = "Deuxieme tour";

$divPbl1 = $itPublic;
$divPbl2 = $itPrivate;
$divPbl3 = $itConfident;

$blkNbMatch    = "Nombre de matchs";
$groupNbms  = "Nombre de simple homme :";
$groupNbws  = "Nombre de simple dame :";
$groupNbmd  = "Nombre de double homme :";
$groupNbwd  = "Nombre de double dame :";
$groupNbxd  = "Nombre de mixte :";
$groupNbas  = "Nombre de simple m�lang� :";
$groupType1 = "Poule";
$groupType2 = "Poule A/R";
$groupType3 = "KO";
$groupType4 = "Qualif";
$groupRankType1 = "Classement g�n�ral";
$groupRankType2 = "R�sultat particulier";
$groupUmpire = "Arbitrage :";
$groupsDiv   = "Composition : ";
$blkTiePoint = "Points des rencontres";
$tieWin      = "Victoire 1 match d'�cart ou plus :";
$tieEqualPlus    = "Victoire �galit� de match :";
$tieEqual    = "Egalit�e :";
$tieEqualMinus    = "D�faite �galit� de match :";
$tieLoose    = "D�faite 1 match d'�cart ou plus :";
$tieWO       = "Forfait :";
$blkResTie  = "R�sultat d'une rencontre";
$tieranktype = "Calcul du r�sultat :";
$tiematchdecisif  = "Discipline du match d�cisif :";
$tiematchnum  = "Num�ro du match d�cisif :";

$blkMatchPoint = "Points des matchs";
$matchWin      = "Match gagn� :";
$matchLoose    = "Match perdu :";
$matchRtd      = "Forfait involontaire :";
$matchWO       = "Forfait volontaire :";

$groupSizemax  = "Nombre d'�quipes maximum:";
$groupNameno   = "Groupe ";

$propagation = "Aligner la publication des joueurs";

// Titre de colonnes 
$rowsGroups1 = "Nom";
$rowsGroups2 = "Taille";
$rowsGroups3 = "Type";
$rowsGroups4 = "SH";
$rowsGroups5 = "SD";
$rowsGroups6 = "DH";
$rowsGroups7 = "DD";
$rowsGroups8 = "Mx";

$rowsTeams1  = "Equipe";
$rowsTeams2  = "Sigle";
$rowsTeams3  = "Club";
$rowsTeams4  = "Capitaine";
$rowsTeams5  = "Commentaire";

$selectTeams1 = "Nom";
$selectTeams2 = "Sigle";
$selectTeams3 = "Capitaine";
$selectTeams4 = "Commentaire";

$rowsGroup1 = "Equipe";
$rowsGroup2 = "Sigle";
$rowsGroup3 = "Capitaine";

$tiesList  = "Rencontres du groupe";
$tiesList1  = "Journ�e";
$tiesList2  = "Date";
$tiesList3  = "Lieu";
$tiesList4  = "H�te";
$tiesList5  = "Visiteur";
$tiesList6  = "Score";


// Messages d'erreur
$msgExistSerial    = "Cette s�rie existe d�j�.";
$msgPositif        = "Tous les nombres doivent �tre > 0.";
$msgNeedSelect     = "S�lectionner au moins une �quipe";
$msgTooTeam        = "Trop d'�quipes dans ce groupe";
$msgNoTeam         = "Aucune �quipe dans ce groupe";
$msgNeedTeams      = "Vous devez s�lectionner au moins une �quipe.";
$msgNoGroups       = "Aucun groupe dans cette division";
$msgNoTeams        = "Aucune �quipe dans les groupes de cette division.";
$msgNoDivs         = "Aucune division d�clar�e.";
$msgNeedGroups     = "Vous devez s�lectionner au moins un groupe.";
$msgConfirmDelGroups = "Le groupe va �tre supprim�.";
$msgConfirmDelDiv  = "La division va �tre supprim�e. Tous ses groupes et matches seront perdus!";
$msgdivName     = "Le Nom est obligatoire.";
$msgdivStamp    = "Le sigle est obligatoire.";
$msgdivSize     = "Le nombre de groupe est obligatoire.";
$msggroupName   = "Le nom du groupe est obligatoire.";
$msggroupStamp  = "Le sigle du groupe est obligatoire.";
$msggroupNbms   = "Le nombre de simple homme est obligatoire.";
$msggroupNbws   = "Le nombre de simple dame est obligatoire.";
$msggroupNbmd   = "Le nombre de double homme est obligatoire.";
$msggroupNbwd   = "Le nombre de double dame est obligatoire.";
$msggroupNbxd   = "Le nombre de mixte est obligatoire.";
$msgmatchWin    = "Les points pour un match gagn� sont obligatoires.";
$msgmatchLoose  = "Les points pour un match perdu sont obligatoires.";
$msgmatchRtd    = "Les points pour un forfait involontaire sont obligatoires.";
$msgmatchWO     = "Les points pour un forfait volontaire sont obligatoires.";
$msgtieWin    = "Les points pour une rencontre gagn�e sont obligatoires.";
$msgtieLoose  = "Les points pour une rencontre perdue sont obligatoires.";
$msgtieEqual  = "Les points pour une rencontre � �galit� sont obligatoires.";
$msgtieWO     = "Les points pour une rencontre forfait sont obligatoires.";
$msgInfoAddTeam = "Pour ajouter des �quipes, enregistrer le groupe puis ouvrez la page de modification accessible depuis l'icone en d�but de ligne.";


// Label des boutons
$btnSelectTeam  = "Choisir �quipes";
$btnNewTeam     = "Cr�er �quipes";
$btnTeamUp      = "Monter";
$btnTeamDown    = "Descendre";
$btnDelTeam     = "Enlever";
$btnEnd         = "Terminer";

$btnPdf      = "Version PDF";

?>