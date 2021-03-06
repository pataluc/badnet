<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";

// Titre  du navigateur
$pairs     = "Pairs";

// Titres des fenetres
$tEditPair      = "Modification d'une paire";
$tPubliPairs    = "Publication de joueur/paire";
$tDelPairs      = "Suppression d'un joueur/paire";
$tSelectKoPair  = "Confection du tableau";
$tSelectGroupPair = "Confection des poules";
$tSelectG2KPair = "Sortie de poules";
$tSelectPartner = "Choix du partenaire";
$tStatusPairs   = "Status des joueurs/paires";
$tAskRank       = "Mise � jour classements";
$tImplode       = "Composition de paire";

$itAdd    = "Ajouter";
$itRemove = "Enlever";

// Titre des colonnes
$rowsSelectPairs1  = "Genre";
$rowsSelectPairs2  = "NOM Pr�nom";
$rowsSelectPairs3  = "NOC";
$rowsSelectPairs4  = "Niveau";
$rowsSelectPairs5  = "Rang";
$rowsSelectPairs6  = "Points";
$rowsSelectPairs7  = "Tableau";

$rowsPlayers1  = "Genre";
$rowsPlayers2  = "NOM Pr�nom";
$rowsPlayers3  = "NOC";
$rowsPlayers4  = "IBF Num";
$rowsPlayers5  = "Licence";

$pairList1 = "Tds";
$pairList2 = "Position";
$pairList3 = "Nouveau status";
$pairList4 = "Status";
$pairList5 = "Joueurs";

$pairList2ko1 = "Tds";
$pairList2ko2 = "Slot";
$pairList2ko3 = "Joueur/Paire";
$pairList2ko4 = "Provenance";
$pairList2ko5 = "Niveau/Set diff";
$pairList2ko6 = "Rang";
$pairList2ko7 = "Points";

$pairGroups1 = "Tds";
$pairGroups2 = "Position";
$pairGroups3 = "Joueurs/Paires";
$pairGroups4 = "Equipe";
$pairGroups5 = "Niveau";
$pairGroups6 = "Rang";
$pairGroups7 = "Points";

// Label des zones
$pairId      = " #";
$echoDisci   ="Discipline :";
$pairIbfNum  = "Num�ro international :";
$pairNatNum  = "Num�ro national :";
$pairIntRank = "Rang international :";
$pairNatRank = "Rang national :";
$pairStatus  = "Status :";
$pairState   = "Etat :";
$pairOrder   = "Position :";
$pairCmt     = "Commentaire";
$pairWo      = "Forfait";
$pairDateWo  = "Date du forfait";
$msgTds      = "T�te de s�rie";
$msgPosition = "Position";
$msgStatus   = "Nouveau status";
$msgPair     = "Joueurs/Paires";
$nbsp3       = "Nombre de sortant par poule de 3 :";
$nbsp4       = "Nombre de sortant par poule de 4 :";
$nbsp5       = "Nombre de sortant par poule de 5 :";
$nbSecond    = "Nombre de meilleur second :";
$nbQualif    = "Nombre total de qualifi�s :";
$nbPlaces    = "Nombre total de place :";
$criteria    = "Crit�re de s�paration :";
$drawName    = "Tableau :";
$group       = "Groupe :";

/* Messages d'erreur */
$msgNeedPairs  = "Vous devez s�lectionner au moins un joueur/paire";
$msgConfirmDel = "Confirmez la suppression du tableau des joueur/paire s�lectionn�s.";
$msgSameGender = "Paire impossible. Les joueurs doivent �tre de sexe diff�rent.";
$msgDiffDraw   = "Paire impossible. Les joueurs ne sont pas dans le m�me tableau.";
$msgTooMuchPlayers = "Vous devez s�lectionner des joueurs seuls.";
$msgNeedTwoPlayers = "Vous devez s�lectionner seulement deux joueurs.";
$msgPairInMatch    = "Le joueur a d�j� jou� un match. Impossible de l'enlever du tableau.";
$msgBadPairsNum    = "Vous devez s�lectionner autant de joueur/paire qu'il y a de place.";
$msgLotAbort       = "Le tirage au sort a �chou�. Aucune solution trouv�e.";
$msgNoPairs        = "Pas de joueur/paire disponible.";

// Label des boutons
$btnNew    = "Nouvelle inscription";
$btnInt    = "International";
$btnNat    = "Fran�ais";
$btnSeeded = "Tirage au sort";
$btnStandard = "Tableau standard";
$btnRaz    = "Effacer";

?>
