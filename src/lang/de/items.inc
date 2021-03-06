<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
include dirname(__FILE__)."/t_items.inc";

// Titre  du navigateur
$items  = "Articles";

// Titres des fenetres
$tItems       = "Gestion des articles";
$tNewItem     = "Cr�ation d'un article";
$tEditItem    = "Modification d'un article";
$tSelectItem  = "S�lection des articles affich�s";
$tDelItems    = "Suppression d'article";
$tDailyStats  = "Consommation par jour";
$tFees        = "Tarifs";
$tNewHotel    = "Cr�ation d'un h�tel";
$tEditHotel   = "Modification d'un h�tel";
$tValues      = "Inscriptions";

// Menus 
$itFees   = "Inscriptions";
$itHotel  = "H�tels";
$itOthers = "Autre";

$itListItem  = "Code barre";
$itSpecialCode  = "Code sp�ciaux";
$itSelectItems  = "Articles affich�s";
$itDailyStats   = "Conso par jour";

// Titre des colonnes
$rowsItems1  = "Nom";
$rowsItems2  = "Code";
$rowsItems3  = "R�f�rence";
$rowsItems4  = "Cout unitaire";
$rowsItems5  = "Stock";
$rowsItems6  = "Suivi stock";
$rowsItems7  = "Cr�ditable";

$rowsRooms1  = "Chambre";
$rowsRooms2  = "Type";
$rowsRooms3  = "Occupants";
$rowsRooms4  = "Equipe";

$rowsCommands1  = "Compte";
$rowsCommands2  = "Qui";
$rowsCommands3  = "Equipe";

$rowsFees1  = "Type";
$rowsFees2  = "Nb";
$rowsFees3  = "Cout";
$rowsFees4  = "Remise";
$rowsFees5  = "Pay�";
$rowsFees6  = "Du";

// Labels
$itemOrderGrid  = "Position dans la grille :";
$itemIsInGrid   = "Grille de r�servation";

$hotelName = "Nom :";
$priceSW  = "Chambre simple :";
$priceDW  = "Chambre double :";
$priceTW  = "Chambre trible :";
$priceOW  = "Chambre autre :";
$priceSWE  = $priceSW;
$priceDWE  = $priceDW;
$priceTWE  = $priceTW;
$priceOWE  = $priceOW;

$blkPriceW = "Prix semaine";
$blkPriceWE = "Prix week end";

// Titre des messages
$msgNeedItems  = "S�lectionner au moins un article.";
$msgNoItems    = "Aucun article d�clar�.";
$msgConfirmDel = "Confirmez la suppression des articles s�lectionn�s.";
$msgExistCommand = "Des achats r�f�rencent cet article. Suppression impossible!";

?>
