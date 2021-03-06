<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
include dirname(__FILE__)."/t_event.inc";

// Titre  du navigateur
$export    = "Export/import de tournoi";

// Titre des onglets
$itArchives   = "Archives";
$itFede       = "Export f�d�ral";
$itExport     = "Exportation";
$itImport     = "Importation";

// Titres des fenetres
$tExportEvent  = "Sauvegarder le tournoi";
$tImportFile   = "Import � partir d'un fichier";
$tImportWeb    = "Import � partir d'un site";
$tEventDetail  = "D�tails du tournoi";
$tFfbaExport   = "F�d�ral";
$tBadnetExport = "Sauvegarde";
$tSelectEvent  = "Tournois disponibles";

// Titres des colonnes

// Label des zones de saisie
$join  = "Fichier � t�l�charger :";
$importFile = "Fichier � utiliser :";
$site = "Url du site :";
$user = "Login :";
$from = "De :";
$to   = "� :";
$cc   = "Copie � :";
$subject  = "Objet :";
$message  = "Message :";

$objectExportEvent = "Sauvegarde tournoi";
$bodyExportEvent = "Voici le fichier contenant la sauvegarde du tournoi.";

$exportDate = "Date de la sauvegarde :";
$evntUpdt   = "Derni�re mise � jour :";
$purge = "Vider le tournoi avant la restauration";
$dateRef = "Date de r�f�rence:";
$version = "Version base:";

//
$rowsVenues1 = "Lieu";
$rowsVenues2 = "Date";

// Label des boutons
$btnExport    = "Cr�er le fichier";
$btnImport    = "Lire le fichier";
$btnConnect   = "Se connecter";
$btnMail      = "Envoyer";
$btnStart     = "Importer";
$btnBadnet    = "Sauvegarde";
$btnFfba      = "Export F�d�ral";
$btnArchive   = "Archives";


// Label des messages
$msgExportInfos = "Le fichier de sauvegarde du tournoi sera envoy� en copie � votre addresse. Pour utiliser le fichier de sauvegarde sans envoyer de message, cliquer sur son nom en bas de page.";
$msgExportSend = "Le courrier a �t� envoy�. V�rifiez que vous avez bien recu une copie.";
$msgTo       = "Le destinataire est obligatoire.";
$msgsubject  = "L'objet du message est obligatoire.";
$msgmessage  = "Le message ne peut �tre vise.";
$msgNoEventAvailable  = "Aucun tournoi disponible.";
$msgBadUrl            = "Impossible de se connecter au site. V�rifier l'url.";
$msgBadUser           = "Connexion impossible. V�rifier vos identifiants.";
$msgBadFile           = "Ce fichier n'est lisible ou n'est pas un fichier de sauvegarde";
$msgFfbaExport    = "A la fin du tournoi, vous devez envoyer les r�sultats � la f�d�ration. Si votre machine est connect�e � internet, vous pouvez directement le fichier, sinon enregistrez le et envoyez le plus tard.";
$msgFfbaArchive   = "Vous pouvez consulter les fichiers d�j� envoy�s � la f�d�ration pour ce tournoi et les r�cuperer si vous en avez besoin.";
$msgBadnetExport  = "Pour travailler en local sur une machine non connect�e, effectuer une sauvegarde du tournoi, envoyez par email ou r�cup�rez le fichier obtenu page suivante. Sur votre machine, restaurer le tournoi � partir de ce fichier.";
$msgBadVersion    = "Le fichier provient d'une version ant�rieure. Il est impossible de le traiter.";
$msgNeedNumAuto   = 'Le num�ro d\'autorisation doit �tre renseign�.';
$msgCheckMatch    = 'Il y a des matches non termin�s ou non valid�s. Aller dans la page d�roulement et saisissez les r�sultats ou valider les matchs avec le lien "Valider" � droite au dessus de la liste des matches apr�s avoir choisi la bonne salle';
$msgNoTeamImport  = "L'import pour les interclubs n'est pas autoris�. Utilisez BadNetTeam pour saisir les r�sultats sur les lieux de la comp�tition.";
?>