<?php
include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
include dirname(__FILE__)."/database.inc";
include dirname(__FILE__)."/t_mber.inc";
include dirname(__FILE__)."/t_regi.inc";

// Titre  du navigateur
$regi    = "Anmeldung";

// Titres des fenetres
$tNewRegPlayer       = "Spieler anmelden";
$tNewRegOfficial     = "Offzielle Person anmelden";
$tNewRegistration    = "Neue Anmeldung";
$tEditRegistration   = "Anmeldung bearbeiten";
$tDelRegistration    = "Anmeldung L�schen";
$tSearchPlayer       = 'Spieler suchen';
$tSearchFedePlayer   = 'Verbindung zur Verbandshomepage im Gange....';
$tSearchIbfPlayer    = 'Verbindung zur IBF Homepage im Gange...';
$tSelectFees         = "Schriftverwaltung";

$itPurchases   = "Achats";
$itCredits     = "Provision";
$itPdf         = "Pdf";
$itFees        = "Anmeldung";
$itHotel       = "�bernachtung";
$itItems       = "Achat";
$itSolder      = 'Solder';
$itArrivals    = 'Ankunft';
$itDepartures  = 'Abfahrt';

// Titre  des menus
$itRegisterMember = "Neue Anmeldung";

// titre des blocs
$blkAdmi  = "Etat civil";
$blkRegi  = "Anmeldung";
$blkCriteria   = "Suchkriterium";

// Titre des colonnes
$rowsTeams1  = "Name";
$rowsTeams2  = "Abk�rzung";
$rowsTeams3  = "Verein";
$rowsTeams4  = "Spielf�hrer";

$rowsAssos1  = "Name";
$rowsAssos2  = "Pseudonym";
$rowsAssos3  = "Internetadresse";

$rowsRegiTeam1  = "Anmeldedatum";
$rowsRegiTeam2  = 'Geschlecht';
$rowsRegiTeam3  = 'Spieler';
$rowsRegiTeam4  = 'Klassement';
$rowsRegiTeam5  = "Passnr.";
$rowsRegiTeam6  = "IBF Nr.";
$rowsRegiTeam7  = "Mannschaft";

$rowsRegiV1  = "Geschlecht";
$rowsRegiV2  = "NAME Vorname";
$rowsRegiV3  = "Land";
$rowsRegiV4  = "Mannschaft";
$rowsRegiV5  = "Mannschaft";

$rowsRegis2  = "Photo";
$rowsRegis3  = "Geschlecht";
$rowsRegis4  = "NAME Vorname";
$rowsRegis5  = 'Kategorie';
$rowsRegis6  = "Klassement";
$rowsRegis7  = "Passnr.";
$rowsRegis8  = "IBF Nr.";
$rowsRegis9  = "Mannschaft";

$rowsPlayers1  = "Photo";
$rowsPlayers2  = "Geschlecht";
$rowsPlayers3  = "Name";
$rowsPlayers3  = "Vorname";
$rowsPlayers4  = "Passnr.";
$rowsPlayers5  = "Geburtstag";
$rowsPlayers6  = "Mannschaft";
$rowsPlayers7  = "Dep";
$rowsPlayers8  = "Einzel";
$rowsPlayers9  = "Doppel";
$rowsPlayers10  = "Mixed";

$rowsFind1  = "Geschlecht";
$rowsFind2  = "Name";
$rowsFind3  = "Vorname";
$rowsFind4  = "Passnr.";
$rowsFind5  = "Kategorie";
$rowsFind6  = "Verein";


$rowsAdmRegis1  = "Geschlecht";
$rowsAdmRegis2  = "Identit�t";
$rowsAdmRegis3  = "Funktion";
$rowsAdmRegis4  = "Konto";
$rowsAdmRegis5  = "Eink�ufe";
$rowsAdmRegis6  = "Erm��igung";
$rowsAdmRegis7  = "bezahlt";
$rowsAdmRegis8  = "Saldo";
$rowsAdmRegis10  = "Einzel";
$rowsAdmRegis11  = "Doppel";
$rowsAdmRegis12  = "Mixed";

$rowsPurchase1  = "Datum";
$rowsPurchase2  = "Eink�ufe";
$rowsPurchase3  = "Konto";
$rowsPurchase4  = "Kosten";
$rowsPurchase5  = "Erm��igung";
$rowsPurchase6  = "Bezahlt";
$rowsPurchase7  = "Saldo";

$rowsCredit1  = "Datum";
$rowsCredit2  = "Eink�ufe";
$rowsCredit3  = "Konto";
$rowsCredit4  = "Initial regi.inc";
$rowsCredit5  = "Reste regi.inc";
$rowsCredit6  = "Remboursable regi.inc";

$rowsTransport1  = "Geschlecht";
$rowsTransport2  = "NAME Vorname";
$rowsTransport3  = "Status";
$rowsTransport4  = "Ankunft";
$rowsTransport5  = "Ort";
$rowsTransport6  = "Abfahrt";
$rowsTransport7  = "Ort";

// Label des zones
$regiAccount = "Konto :";
$regiTeam    = "Mannschaft :";
$mberSexeLabel  = "Geschlecht :";
$noc            = "NOC :";
$rankRankS      = "Einzel :";
$rankRankD      = "Doppel :";
$rankRankM      = "Mixed :";
$rankAverageS   = "Einzel :";
$rankAverageD   = "Doppel :";
$rankAverageM   = "Mixed :";
$club           = "Abk�rzung Verein :";
$departement    = "D�partement :";
$licencie       = "Spieler ohne Pass";
$septembre      = "CPPP september";
$single      = "Einzel :";
$double      = "Doppel :";
$mixed       = "Mixed :";
$inscOne     = "1 Disziplin :";
$inscTwo     = "2 Disziplinen :";
$inscThree   = "3 Disziplinen :";
$regiCatage  = "Kategorie :";
$assoId      = "Verein :";
$assoDpt     = "Departement :";

$sourceS = "Einzel : Bearbeitet am";
$sourceD = "Doppel : Bearbeitet am";
$sourceM = "Mixed : Bearbeitet am";
$sourceSF = "Einzel: source f�d� du";
$sourceDF = "Doppel : source f�d� du";
$sourceMF = "Mixed : source f�d� du";

$Page   = "Angezeigte Seite :";
$Nombre = "Anzahl der Spieler pro Seite :";
$Total  = "Gesamtanzahl an Spieler :";

$memberSolde     = "Saldo des angemeldeten :";
$accountSolde    = "Saldo des Kontos :";


// Label des listes

// Messages d'erreur
$msgNeedLicence     = "Nur Spieler mit Passnr. werden gespeichert.";
$msgNeedPlayers     = "Sie m�ssen mindestens einen Spieler ausw�hlen.";
$msgNotFound    = "Kein Spieler entspricht den Suchkriterien !";
$msgNoRegisteredPlayer = "Keine Spieler bis dahin angemeldet !";
$msgNeedCriteria   = "Mindestens den Namen angeben (mindestens 3 Zeichen),<br> die Passnr. oder den Verein.";
$msgTeamNeedClub      = "Anmeldung nicht gefunden. �berpr�fen Sie den Verein.";
$msgRegiPlay   = "Ein Spieler ist an Spielen beteiligt. Unm�glich die Anmeldung zu l�schen.";
$msgTooMuchPlayers = "Zu viele Treffer. Ver�ndern Sie die Suchkriterien.";
$msgNoTeams = "Keine Mannschaft verf�gbar";
$msgNeedRegistration    = "Sie m�ssen mindestens ein Objekt ausw�hlen.";
$msgConfirmDel         = "Wollen Sie die ausgew�hlten Objekte l�schen ?";
$msgRegiCommands = "Un inscrit a des achats. Impossible de supprimer son inscription.";
$msgNoRegisteredOfficial = "Keine Offiziellen Personen gespeichert";
$msgNoPurchases = "Pas d'achat pour cet incrit.";
$msgNoAccount   = "Kein Konto f�r das Mitglied. Impossible de g�rer ses achats.";
$msgNoCredit    = "Pas de provision pour cet inscrit";
$msgPairInMatch = "Klassenwechsel nicht m�glich. Spiele sind organisiert. Entfernen Sie ihn aus der Gruppe oder dem Hauptfeld.";
$msgPoonaError  = "Poona unerreichbar.";

// Label des boutons
$btnAddMber     = "Mitglied erstellen";
$btnValidate    = "Speichern";
$btnSearchFede  = "Dursuche FFBa";
$btnSearchIbf   = "Dursuche IBF";
$btnAddPhoto    = "Photo ausw�hlen";
$btnGo          = "Anzeigen";

?>