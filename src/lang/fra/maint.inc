<?php
include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
include dirname(__FILE__)."/t_asso.inc";
include dirname(__FILE__)."/t_mber.inc";

// Titre  du navigateur
$maint   = "Maintenance";

// Titres des blocs
$tDraws  = "Tableaux"; 
$tPairs  = "Paires"; 
$tAsso   = "Associations"; 
$tMember = "Membres"; 
$destAssoList   = "Association cible :";
$srcAssoList    = "Association source :";
$destMemberList = "Membre cible :";
$srcMemberList  = "Membre source :";
// Titre des colonnes

// Label des listes

// Messages
$msgAsso   = "Utilitaire de fusion des associations en double.";
$msgMember = "Utilitaire de fusion des membres en double.";
$msgDraws  = "Lors d'import de tournoi, des nouveaux champs utilis�s pour la confection d'un �ch�ancier ne sont pas mis jours.";
$msgPairs  = "Lors d'import de tournoi, il peut y avoir cr�ation de paires fantomes. Elles pevent �tre supprim�es i�i";
$msgMergeAsso  = "Lors de la fusion, toutes les �quipes de l'association source seront rattach�es � l'association cible puis cette derni�re sera supprim�e.";
$msgMergeMember  = "Lors de la fusion, toutes les inscriptions du membre source seront rattach�es au membre cible puis ce dernier sera supprim�.";

// Label des boutons
$btnDraws  = "Mise � jour des tableaux";
$btnPairs  = "Supprimer paires fantomes";
$btnAsso   = "Fusion";
$btnMember = "Fusion";
$btnMerge  = "Fusionner";
?>
