<?php
include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
include dirname(__FILE__)."/database.inc";
include dirname(__FILE__)."/t_mber.inc";
include dirname(__FILE__)."/t_regi.inc";

// Titre  du navigateur
$offo   = "Inscriptions officiels et autres";

// Titres des fenetres
$tNewRegOfficial    = "Inscription d'un officiel";
$tNewRegistration   = "Nouvelle inscription";
$tEditRegistration  = "Modification d'une inscription";
$tDelRegistration   = "Suppression d'une inscription";
$tPubliMembers      = "Publication d'inscription";

// Titre  des menus
$itRegisterMember = "Nouvelle inscription";
$itActivite       = "Imprimer fiche d'activit�";

// titre des blocs
$blkAdmi  = "Administratif";
$blkRegi  = "Incription";
$blkCriteria   = "Crit�res de recherche";

// Label des zones
$mberSexeLabel  = "Genre :";
$rowsMembers1   = "Genre";
$rowsMembers2   = "Nom";
$rowsMembers3   = "Pr�nom";

$rowsOfficials1  = "Date";
$rowsOfficials2  = "Photo";
$rowsOfficials3  = "NOM Pr�nom";
$rowsOfficials4  = "Genre";
$rowsOfficials5  = "Status";
$rowsOfficials6  = "Fonction";
$rowsOfficials7  = "NOC";
$rowsOfficials8  = "Equipe";

// Label des listes

// Messages d'erreur
$msgNoMemberFound    = "Aucune personne trouv�e avec ces crit�res !";
$msgNeedRegistration    = "Vous devez s�lectionner au moins un inscrit.";
$msgNoRegisteredOfficials = "Aucun officiel enregistr�";
$msgNoAutoPubli          = "Publication impossible car l'�quipe n'est pas publi�e";

// Label des boutons
$btnAddMber     = "Cr�er un membre";
$btnValidate    = "Valider";
$btnSearch      = "Chercher";
$btnAddPhoto    = "Choix photo";

?>