<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
include dirname(__FILE__)."/t_book.inc";

// Titre  du navigateur
$books      = "Carnet d'adresse";

// Titres des menus
$itForBooks       = "Gestion";
$itForPublication = "Publication";
$itImport         = "Importation";

// Titres des fenetres
$tBook      = "Carnet d'adresse";
$tBooks     = "Gestion des carnets d'adresses";
$tNewBook   = "Cr�ation d'un carnet";
$tEditBook  = "Modification d'un carnet";
$tRightBook  = "Attribution des privil�ges";
$tEditContact = "Modification d'un contact";
$tNewContact  = "Cr�ation d'un contact";
$tAddContact  = "Ajout de contacts au carnet";
$tSendMail    = "Envoyer un mail";

// Titre des colonnes
$rowsBooks   = "Carnets d'adresse";
$rowsBooks1  = "Titre du carnet";
$rowsBooks2  = "Commentaire";
$rowsBooks3  = "Propri�taire";

$rowsContacts   = "Membres du carnet d'adresse";
$rowsContacts1  = "Sexe";
$rowsContacts2  = "Nom";
$rowsContacts3  = "Contact";
$rowsContacts4  = "Commentaire";
$rowsContacts5  = "Mise � jour";

$rowsContactsA1  = "Association";
$rowsContactsA2  = "Sigle";
$rowsContactsA3  = "Contact";
$rowsContactsA4  = "Tel, email";

$rowsMberContacts   = "Contacts des membres";
$rowsMberContacts1  = "Sexe";
$rowsMberContacts2  = "Nom";
$rowsMberContacts3  = "Pr�nom";
$rowsMberContacts4  = "Contact";
$rowsMberContacts5  = "Type";
$rowsMberContacts6  = "Commentaire";
$rowsMberContacts7  = "Mise � jour";

$rowsAssoContacts1  = "Nom";
$rowsAssoContacts2  = "Sigle";
$rowsAssoContacts3  = "Qui";
$rowsAssoContacts4  = "Contact";

$rowsUsers   = "Utilisateurs enregistr�s";
$rowsUsers1  = "Login";
$rowsUsers2  = "Nom usuel";

// Label des zones
$from    = "De :";
$to      = "� :";
$subject = "Sujet :";
$message = "Message :";
$manage     = "Gestionnaire";
$assistant  = "Assistant";
$friend     = "Ami";
$guest      = "Invit�";
$user       = "Visiteur";
$type1 = $manage;
$type2 = $assistant;
$type3 = $friend;
$type4 = $guest;
$type5 = $user;
$blkRight = "Droit � octroyer";
$bookName = "Carnet: ";
$importFile = "Fichier ou url :";

// Menus 
$itedit             = "Modifier le carnet";
$itAddMemberContact = "Ajouter un contact individuel";
$itNewAssocContact  = "Ajouter un contact associatif";
$itRight            = "G�rer les privil�ges";

// Messages d'erreur
$msgNeedSelect  = "S�lectionnez au moins une ligne de la liste.";
$msgNoBook      = "Aucun carnet d'adresse disponible.";
$msgNoContact   = "Aucun contact pour de carnet d'adresse.";


// Label des boutons
$btnAddMember  = "Cr�er membre";
$btnAddAssoc   = "Cr�er association";
$btnDelContact = "Supprimer contact";
$btnMail  = "Envoyer";
$btnEnd   = "Quitter";
$btnRight = "Changer les droits";



$private = "Carnet priv�e";
$hidden  = "Carnet non publi�e";
$visible = "Carnet publi�e";
$restore = "Carnet supprim�e";

?>