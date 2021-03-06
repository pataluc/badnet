<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
include dirname(__FILE__)."/t_teams.inc";
include dirname(__FILE__)."/t_asso.inc";

// Titre  du navigateur
$teams  = "Equipes";

// Titres des fenetres
$tNewTeam      = "Cr�ation d'une �quipe";
$tEditTeam     = "Modification d'une �quipe";
$tEraseTeams   = "Suppression d'�quipes";
$tPubliTeams   = "Publication d'�quipes";
$tMergePlayers = "Fusion de joueur";
$tMembers      = "Inscrits";
$tBilan        = "Synth�se";

// Menus 
$itNewPlayer      = 'Nouveau joueur';
$itNewOfficial    = 'Nouvel officiel';
$itNewOther       = 'Autre';
$itUpdate         = 'Maj clt.';
$itUpdateSept     = 'CPPP FFBa 01/09';
$itPdfPlayers     = 'Imprimer convocations';
$itPdfPairs       = 'Imprimer paires';
$itPdfEntries     = 'Imprimer inscriptions';
$itXlsEntries     = 'Joueurs Xls';

$itMembers       = "Membres";
$itCredits       = "Buvette";
$itReservation   = "R�servations";
$itDiscount      = "Prise en charge";

$itNewResa        = 'R�server';
$itDiscount       = 'Prise en charge';
$itSelectItems    = 'Articles affich�s';
$itCredits        = 'Provisions';
$itSolder         = 'Solder';

$itDetailM   = 'Par Joueur';
$itDetailD   = 'Par date';
$itDetailI   = 'Par article';
$itHotel     = 'H�tels';

// Titre des colonnes
$rowsTeams1  = "Ville";
$rowsTeams2  = "Equipe";
$rowsTeams3  = "Sigle";
$rowsTeams4  = "Date";
$rowsTeams5  = "Nombre";

$rowsTies1  = "Lieu";
$rowsTies2  = "Date";
$rowsTies3  = "Tour";
$rowsTies4  = "Adversaire";
$rowsTies5  = "R�sultat";
$rowsTies6  = "Score";

$rowsPlayers_V1 = "Genre";
$rowsPlayers_V2 = "NOM Pr�nom";
$rowsPlayers_V3 = "Classement";

$rowsPairs1 = "Joueurs/Paires";
$rowsPairs2 = "Tableau";
$rowsPairs3 = "Niveau";
$rowsPairs4 = "Points";
$rowsPairs5 = "Rang int.";
$rowsPairs6 = "Rang nat.";
$rowsPairs7 = "Stade";

$rowsPlayers1  = "NOM Pr�nom";
$rowsPlayers2  = "Genre";
$rowsPlayers3  = "Cat�gorie";
$rowsPlayers4  = "Classement";
$rowsPlayers5  = "Rang";
$rowsPlayers6  = "Titulaire";
$rowsPlayers7  = "Licence";
$rowsPlayers8  = "NOC";
$rowsPlayers9  = "Premier match";
$rowsPlayers10  = "Convocation";
$rowsPlayers11  = "Lieu";

$rowsRoom1  = "Genre";
$rowsRoom2  = "NOM Pr�nom";
$rowsRoom3  = "Hotel";
$rowsRoom4  = "Type";
$rowsRoom5  = "Chambre";
$rowsRoom6  = "Arriv�e";
$rowsRoom7  = "Nb nuit";

$rowsOffos1  = "NOM Pr�nom";
$rowsOffos2  = "Genre";
$rowsOffos3  = "Status";
$rowsOffos4  = "Fonction";
$rowsOffos5  = "NOC";

$rowsAdmRegis1  = "Genre";
$rowsAdmRegis2  = "Identit�";
$rowsAdmRegis3  = "Fonction";
$rowsAdmRegis4  = "Cout";
$rowsAdmRegis5  = "Remise";
$rowsAdmRegis6  = "Pay�";
$rowsAdmRegis7  = "Solde";

$rowsAdmTeams1  = "Date";
$rowsAdmTeams2  = "Zone g�o";
$rowsAdmTeams3  = "Equipe";
$rowsAdmTeams4  = "Co�t";
$rowsAdmTeams5  = "Remise";
$rowsAdmTeams6  = "Pay�";
$rowsAdmTeams7  = "Solde";

$rowsPurchase1  = "Date";
$rowsPurchase2  = "Achat";
$rowsPurchase3  = "Identit�";
$rowsPurchase4  = "Co�t";
$rowsPurchase5  = "Remise";
$rowsPurchase6  = "Pay�";
$rowsPurchase7  = "Restant du";

$rowsCredits1 = "Date";
$rowsCredits2 = "Qui";
$rowsCredits3 = "Fonction";
$rowsCredits4 = "Montant";
$rowsCredits5 = "Reste";
$rowsCredits6 = "Remboursable";

$rowsSend1 = "Club";
$rowsSend2 = "Contact";
$rowsSend3 = "Email";
$rowsSend4 = "R�sultat";


// Label des zones
$assoUrl     = "Site Web :";
$assoTeam    = "Association :";
$assoCount   = "Compte :";
$publiPropa  = "Propager aux inscrits des �quipes";

$assoCount     = 'Compte :';
$accountName   = "Ancien compte :";
$accountId     = "Nouveau compte :";
$resaDate      = "Date de r�servation :";

$costTeam     = "Total achats :";
$discountTeam = "Remise :";
$payedTeam    = "Pay� :";
$duTeam       = "Restant du :";

$teamText   = "Convocation :";

// Label des boutons
$btnAddAssoc = "Cr�er association";
$btnAddLogo  = "Choix du logo";
$btnAddPhoto = "Choix de la photo";
$btnMoreClub = "Nouveau club";

// Label des messages
$msgNoPlayers     = "Pas de joueur dans cette �quipe.";
$msgNoPairs       = "Pas de joueurs/paires dans cette �quipe.";
$msgNoTies        = "Pas de rencontre pour cette �quipe.";
$msgNoTeams       = "Aucune �quipe engag�e.";
$msgassoId        = "L'association est obligatoire.";
$msgNoSelectItems = "Aucun article publi�.";
$msgNoCredits     = "Aucun cr�dit alou�.";
$msgNoReservations = "Aucune r�servation.";
$msgConfirmDelTeam = "Les �quipes s�lectionn�es vont �tre supprim�es.";
$msgConfirmPubTeam = "La publication des �quipes s�lectionn�es va �tre modifi�e.";
$msgNeedTeams      = "Vous devez s�lectionner au moins une �quipe";
$msgTeamWithMember = "Des joueurs sont enregistr�s avec une des �quipes. Impossible de supprimer!";
$msgNoOffos = "Aucun officiel dans cette �quipe.";
$msgNoTies = "Aucune rencontre pour cette �quipe.";
$msgNoTeamLogo   = "Pas de logo pour cette �quipe.<br />Utilisation du logo de son association.";
$msgNeedTwoPlayers  = "Vous devez s�lectionner 2 joueurs.";
$msgNeedTwoPlayers  = "Vous devez s�lectionner 2 joueurs.";
$msgLicenceDiffer   = "Les joueurs doivent avoir le m�me num�ro de licence.";
?>