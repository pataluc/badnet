<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/t_user.inc";
include dirname(__FILE__)."/menu.inc";

// Titre  du navigateur
$users    = "Utilisateurs";

// Titres des fenetres
$tNewUser  = "Cr�ation d'un utilisateur";
$tDelUsers = "Suppression d'utilisateurs";
$tEditUser = "Mise � jour des informations";
$tEditPwd  = "Modification du mot de passe";

// Menus
$itModify   = "Modifier �tat civil";
$itPassword = "Changer mot de passe";
$itSendMail = "Envoyer email";
$itForEvent = "Tournois";
$itManager  = "Gestionnaires";
$itAssistant = "Assistants";
$itAll       = "Utilisateurs";
$itFriend    = "Ami";
$itGuest     = "Invit�";
$itVisitor   = "Visiteur";
$itUserList  = "Liste des utilisateurs";

// Titre des colonnes
$rowsUsers1  = "Nom";
$rowsUsers2  = "Login";
$rowsUsers3  = "Pseudo";
$rowsUsers4  = "Email";
$rowsUsers5  = "Langue";
$rowsUsers6  = "Cr�e";
$rowsUsers7  = "Derni�re visite";
$rowsUsers8  = "Nb connexions";

$rowsManagers1  = "Nom";
$rowsManagers2  = "Login";
$rowsManagers3  = "Pseudo";
$rowsManagers4  = "Email";
$rowsManagers5  = "Langue";
$rowsManagers6  = "Nb visite";
$rowsManagers7  = "Derni�re visite";
$rowsManagers8  = "Tournoi";

$selEvents1  = "Tournois";
$selEvents2  = "Droits";

// Label des zones
$user_nameTitle = "";
$oldPwd    = "Ancien mot de passe :";
$userType1     = "Administrateur";
$userType2     = "Utilisateur";
$rghtNotify    = "Notifier le nouvel utilisateur";
$rghtAssoId    = "Association autoris�e :";

// Messages d'erreur
$needrowsUsers  = "Vous devez s�lectionner au moins 1 utilisateur.";
$needselEvents  = "Vous devez s�lectionner au moins un tournois.";
$msgLoginExist  = "Ce login est d�j� utilis�. Essayez un autre !";
$msgoldPwd     = "Le pr�c�dent mot de passe est obligatoire !";
$msgBadPwd     = "Ancien mot de passe invalide !";
$msgBadUpdate  = "Vous n'avez pas les autorisations pour modifier cet utilisateur !";
$msgConfirmDel = "Confirmez l'effacement des utilisateurs s�lectionn�s.";
$msgNoManager  = "Aucun gestionnaire de tournoi.";
$msgNoMember   = "Aucun utilisateur enregistr�.";

$emailBody    = "Bonjour,\n\n vous pouvez consulter et contr�ler vos inscriptions 
sur le site BadNet en utilisant le compte ci dessous. En cas d'erreur ou de question, 
contacter un gestionnaire du tournoi.";

?>