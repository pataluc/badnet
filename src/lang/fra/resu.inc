<?php
include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
include dirname(__FILE__)."/database.inc";
include dirname(__FILE__)."/t_mber.inc";
include dirname(__FILE__)."/t_regi.inc";

// Titre  du navigateur
$resu   = "Fiche joueur";

// Titre de la page 
$playerName = "Joueur : ";
$tEditRegi  = "Modification �tat joueur";
$tCivil   =  "Etat civil";
$tPlay    =  "Tournoi";
$tDraws   =  "Tableaux";
$tRegis   =  "Inscription";

$mberCatage =  "Cat�gorie :";
$mberCompet =  "Autorisation :";
$mberSurclasse =  "Surclassement :";
$mberDateSurclasse =  "depuis :";
$mberDate   =  "Date :";
$mberDraws  =  "Tableaux :";
$mberPartnerD  =  "Partenaire double :";
$mberPartnerM  =  "Partenaire mixte :";


$mberAsso = "Association : ";
$mberRank = "Classements : ";
$mberCPPP = "Moyennes : ";
$mberTeam = "Equipe : ";

$regiIsWo = "Joueur forfait";
$regiIsPresent = "Joueur pr�sent";
$umpireCourt   = "Arbitre terrain :";

// Titre des colonnes
$rowsResuV1 = "Date";
$rowsResuV2 = "Discipline<br />(Partenaire)";
$rowsResuV3 = "Adversaire(s)";
$rowsResuV4 = "R�sultat";
$rowsResuV5 = "Score";

$rowsResuTeam1 = "Date";
$rowsResuTeam2 = "Discipline<br />(Partenaire)";
$rowsResuTeam3 = "Adversaire(s)";
$rowsResuTeam4 = "R�sultat";
$rowsResuTeam5 = "Score";


// Titre des colonnes
$rowsResuIndiv1 = "Date";
$rowsResuIndiv2 = "Lieu";
$rowsResuIndiv3 = "Num";
$rowsResuIndiv4 = "Phase";
$rowsResuIndiv5 = "Tour";
$rowsResuIndiv6 = "Adversaire(s)";
$rowsResuIndiv7 = "R�sultat";
$rowsResuIndiv8 = "Score";
$rowsResuIndiv9 = "D�but";
$rowsResuIndiv10 = "Fin";
$rowsResuIndiv11 = "Dur�e";


$rowsEntries1 = "Tableau";

// Messages
$msgNoMatch = "Pas de match pour ce joueur";

$btnEdit  = "Modifier";
$btnPhoto = "Photo";
?>