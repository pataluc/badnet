<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
//include_once dirname(__FILE__)."/t_teams.inc";

// Titre  du navigateur
$subscript  = "Abonnements";

// Titres des fenetres
$tSubscription    = "Abonnement aux r�sultats";

// Menus 

// Titre des colonnes
$rowsTeams   = "Equipes engag�es";
$rowsTeams1  = "Nom";
$rowsTeams2  = "Sigle";

$Subscripts   = "Abonnements aux r�sultats";
$Subscripts1  = "Tournois";
$Subscripts2  = "Equipes";


// Label des boutons
$btnRegister  = 'Abonner';
$btnDeregister = 'Supprimer abonnement';
$btnInfo = 'Voir abonnement';


// Label des champs
$email = "Adresse email :";
$news  = "Recevoir les news du tournoi";
$foot = "\n\n------------------------\n".
"Message envoy� automatiquement par BadNet.\n".
"Pour plus d'information consulter le site:\n";

$rightChanged = "Bonjour,\n\nun administrateur a modifi� vos droits sur ".
"ce tournoi.\nVous �tes maintenant :";

$rightDesc = "\n\nGestionnaire : vous pouvez tout faire sur le tournoi.\n".
"Assistant  : vous pouvez saisir des r�sultats.\n".
"Ami : vous pouvez consultez toutes les donn�es.\n".
"Invit� : vous pouvez consultez les donn�es cach�es et publi�es.\n".
"Visiteur : vous pouvez consultez uniquement les donn�es publi�es.\n";

$win = "\nbat\n";

// Label des messages
$needrowsTeams   = "Vous devez s�lectionner au moins une �quipe.";
$msgSubscriptDone  = "Abonnement termin�. Vous recevrez un email chaque fois qu'un r�sultat de match sera enregistr� pour les �quipes s�lectionn�es.";
$msgUnsubscriptDone  = "Desabonnement termin�.";
      $msg = 'msgUnsubscriptDone';
$msgemail   = "Votre adresse email est non valide.";


?>