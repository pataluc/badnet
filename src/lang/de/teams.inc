<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
include dirname(__FILE__)."/t_teams.inc";
include dirname(__FILE__)."/t_asso.inc";

// Titre  du navigateur
$teams  = "Mannschaften";

// Titres des fenetres
$tNewTeam      = "Mannschaft erstellen";
$tEditTeam     = "Mannschaft bearbeiten";
$tEraseTeams   = "Mannschaft l�schen";
$tPubliTeams   = "Mannschaft ver�ffentlichen";
$tMergePlayers = "Spieler vereinigen";
$tMembers      = "Anmeldungen";
$tBilan        = "teams.inc -> keine Ahnung";

// Menus 
$itNewPlayer      = 'Neuer Spieler';
$itNewOfficial    = 'Neue Offizielle Begleitung';
$itNewOther       = 'Andere';
$itUpdate         = 'CPPP FFBa';
$itUpdateSept     = 'CPPP FFBa 01/09';
$itPdfPlayers     = 'Startzeit PDF';
$itPdfPairs       = 'Paarung PDF';
$itexport         = 'CSV Export';

$itMembers       = "Mitglieder";
$itCredits       = "Turnierstand";
$itReservation   = "Reservierung";
$itDiscount      = "Prise en charge";

$itNewResa        = 'R�server';
$itDiscount       = 'Prise en charge';
$itSelectItems    = 'Articles affich�s';
$itCredits        = 'Provisions';
$itSolder         = 'Solder';

$itDetailM   = 'Par Joueur';
$itDetailD   = 'Par date';
$itDetailI   = 'Par article';
$itHotel     = 'Hotels';

// Titre des colonnes
$rowsTeams1  = "Pseudonym";
$rowsTeams2  = "Mannschaft";
$rowsTeams3  = "Abk�rzung";
$rowsTeams4  = "Datum";
$rowsTeams5  = "Meldungen";

$rowsTies1  = "Ort";
$rowsTies2  = "Datum";
$rowsTies3  = "Runde";
$rowsTies4  = "Gegner";
$rowsTies5  = "Ergebnis";
$rowsTies6  = "Ergebnis";

$rowsPlayers_V1 = "Anrede";
$rowsPlayers_V2 = "NAME Vorname";
$rowsPlayers_V3 = "Klassement";

$rowsPairs1 = "Spieler/Paarungen";
$rowsPairs2 = "Feld";
$rowsPairs3 = "Spielst�rke";
$rowsPairs4 = "Punkte";
$rowsPairs5 = "Int. Ranking";
$rowsPairs6 = "Nat. Ranking";
$rowsPairs7 = "Stade teams.inc";

$rowsPlayers1  = "NAME Vorname";
$rowsPlayers2  = "Anrede";
$rowsPlayers3  = "Altersklasse";
$rowsPlayers4  = "Klassement";
$rowsPlayers5  = "Disziplinen";
$rowsPlayers6  = "Passnr.";
$rowsPlayers7  = "IBF Nr.";
$rowsPlayers8  = "NOC";
$rowsPlayers9  = "Erstes Spiel";
$rowsPlayers10  = "Anmeldung";
$rowsPlayers11  = "Ort";

$rowsRoom1  = "Anrede";
$rowsRoom2  = "NAME Vorname";
$rowsRoom3  = "Hotel";
$rowsRoom4  = "Typ";
$rowsRoom5  = "Zimmer";
$rowsRoom6  = "Ankunft";
$rowsRoom7  = "�bernachtungen";

$rowsOffos1  = "NAME Vorname";
$rowsOffos2  = "Anrede";
$rowsOffos3  = "Status";
$rowsOffos4  = "Funktion";
$rowsOffos5  = "NOC";

$rowsAdmRegis1  = "Anrede";
$rowsAdmRegis2  = "Name";
$rowsAdmRegis3  = "Funktion";
$rowsAdmRegis4  = "Kosten";
$rowsAdmRegis5  = "Erm��igung";
$rowsAdmRegis6  = "bezahlt";
$rowsAdmRegis7  = "Saldo";

$rowsAdmTeams1  = "Datum";
$rowsAdmTeams2  = "Mannschaft";
$rowsAdmTeams3  = "Kosten";
$rowsAdmTeams4  = "Erm��igung";
$rowsAdmTeams5  = "bezahlt";
$rowsAdmTeams6  = "Saldo";

$rowsPurchase1  = "Datum";
$rowsPurchase2  = "Achat";
$rowsPurchase3  = "Name";
$rowsPurchase4  = "Kosten";
$rowsPurchase5  = "Erm��igung";
$rowsPurchase6  = "Bezahlt";
$rowsPurchase7  = "Restant du";

$rowsCredits1 = "Datum";
$rowsCredits2 = "Wer";
$rowsCredits3 = "Funktion";
$rowsCredits4 = "Montant";
$rowsCredits5 = "Reste";
$rowsCredits6 = "Remboursable";

$rowsSend1 = "Verein";
$rowsSend2 = "Kontakt";
$rowsSend3 = "Email";
$rowsSend4 = "Ergebnis";


// Label des zones
$assoUrl     = "Website :";
$assoTeam    = "Verein :";
$assoCount   = "Konto :";
$publiPropa  = "Propager aux inscrits des �quipes";

$assoCount     = 'Konto :';
$accountName   = "Altes Konto :";
$accountId     = "Neues Konto :";
$resaDate      = "Reservierungs Datum :";

$costTeam     = "Total achats :";
$discountTeam = "Remise :";
$payedTeam    = "Pay� :";
$duTeam       = "Restant du :";

$teamText   = "Convocation :";

// Label des boutons
$btnAddAssoc = "Verein erstellen";
$btnAddLogo  = "Logo aussuchen";
$btnAddPhoto = "Photo aussuchen";
$btnMoreClub = "Neuer Verein";

// Label des messages
$msgNoPlayers     = "Keine Spieler in dieser Mannschaft.";
$msgNoPairs       = "Keine Spieler/Paarungen in dieser Mannschaft.";
$msgNoTies        = "Keine Begnungen dieser Mannschaft.";
$msgNoTeams       = "Keine Mannschaft verf�gbar.";
$msgassoId        = "Der Verein ist Pflicht.";
$msgNoSelectItems = "Aucun article publi�.";
$msgNoCredits     = "Aucun cr�dit alou�.";
$msgNoReservations = "Keine Reservierung.";
$msgConfirmDelTeam = "Die ausgew�hlten Mannschaften werden gel�scht.";
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