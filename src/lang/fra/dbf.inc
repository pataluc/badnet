<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
//include dirname(__FILE__)."/t_div.inc";

// Titre  du navigateur
$dbf    = "Export fede";

// Titres des fenetres
$tExportFede  = "Fichier DBF pour Poona";
$tListFile    = "R�sultats archiv�s";
$itArchives   = "Archives";
$itFede       = "Export FFBa";
$itExport     = "Exportation";
$itImport     = "Importation";
$tSelectFile  = "Choix du fichier";

// Titres des colonnes
$listTies  = "Rencontres avec des matchs termin�s";
$listTies1  = "Date";
$listTies2  = "Tour";
$listTies3  = "Division";
$listTies4  = "Groupe";
$listTies5  = "Non jou�s";
$listTies6  = "Termin�s";
$listTies7  = "Valid�s";
$listTies8  = "Envoy�s";

// Label des zones de saisie
$from  = "De :";
$to    = "� :";
$cc    = "Copie � :";
$subject = "Sujet :";
$message = "Message :";
$join    = "Fichier joint :";
$evnt_zone  = "Zone :";
$beginDate  = "Matches du";
$endDate    = "au";
$exportAll  = "traiter les matchs d�j� envoy�s";

$importFile = "Fichier ou url :";
$inscOne    = "Un tableau :";
$inscTwo    = "Deux tableaux :";
$inscThree  = "Trois tableaux :";

// Texte par defaut du message
$defSubject = "R�sultats";
$defMessage = "Veuillez trouver ci-joint les r�sultats du tournoi ";

// Label des boutons
$errs      = "Erreurs d�tect�es";
$errs1      = "Division";
$errs2      = "Groupe";
$errs3      = "Match";
$errs4      = "Erreur";

// Label des boutons
$btnMail     = "Envoyer";
$btnSelect   = "Choix des matchs";
$btnWrite    = "G�n�rer fichier";
$btnImport   = "Importer";
$btnArchiveFile  = "Archiver";

// Label des messages
$msgevnt_zone   = "Veuillez renseigner la zone.";
$msgDescZone    = "Seul les matches valid�s sont trait�s. <br />Pour un interclub d�partemental, la zone correspond au num�ro du d�partement.<br />Pour un interclub r�gional, elle indique le code de la r�gion.";
$msgfileName     = "Le nom du fichier est obligatoire.";
$msgexportEnded  = "Les r�sultats ont �t� envoy�s � la f�d�ration. Une copie vous a �t� envoy�e sur votre messagerie.";
$msgNoArchive    = "Aucun fichier archive pour ce tournoi.";
$msgSelectTie    = "Vous devez s�lectionner les rencontres. Elles doivent etre comprises entre les dates de d�but et de fin.";
$msgFileArchived = "Le fichier a �t� archiv�.";

$msgListFile = "Voici le(s) fichier(s) r�sultat(s) pr�t(s) � �tre import� dans Poona.<br>
- Cliquez sur le nom du fichier<br>
- Enregistrez-le sur ordinateur<br>
- Connectez � Poona avec votre acc�s<br>
- Importez le fichier<br><br>";
$msgArchive = "<br><br>Utilisez le bouton 'Archiver' pour passer les matchs � l'�tat 'Envoy�'
<br><br>";

// Label des erreurs
$errOpenFile       = "Impossible de cr�er le fichier d'export!";
$errPairMissing    = "Paire manquante";
$errPlayerMissing  = "Joueur manquant";
$errNoMatch        = "Aucun match � envoyer.";
$errBadMatch       = "Envoi impossible ! Veuillez corriger les probl�mes puis essayer � nouveau";
$errArchiveNotAccessible  = "Le dossier des archives est inacessible. Contacter un administrateur du site.";

?>