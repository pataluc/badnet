<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";

// Titre  du navigateur
$pairs     = "Paarungen";

// Titres des fenetres
$tEditPair      = "Paarung bearbeiten";
$tPubliPairs    = "Spieler/Paarung ver�ffentlichen";
$tDelPairs      = "Spieler/Paarung l�schen";
$tSelectKoPair  = "Zusammensetzung Hauptfeld";
$tSelectGroupPair = "Zusammensetzung Gruppen";
$tSelectG2KPair = "Qualifikanten in der Gruppe";
$tSelectPartner = "Partner aussuchen";
$tStatusPairs   = "Status Spieler/Paarung";
$tAskRank       = "Klassement aktualisieren";
$tImplode       = "Paarung zusammenstellen";

$itAdd    = "Hinzuf�gen";
$itRemove = "Entfernen";

// Titre des colonnes
$rowsSelectPairs1  = "Geschlecht";
$rowsSelectPairs2  = "NAME Vorname";
$rowsSelectPairs3  = "NOC";
$rowsSelectPairs4  = "Niveau";
$rowsSelectPairs5  = "Punkte";
$rowsSelectPairs6  = "Disziplin";

$rowsPlayers1  = "Geschelcht";
$rowsPlayers2  = "NAME Vorname";
$rowsPlayers3  = "NOC";
$rowsPlayers4  = "IBF Num";
$rowsPlayers5  = "Passnr.";

$pairList1 = "Tdz";
$pairList2 = "Position";
$pairList3 = "Neuer status";
$pairList4 = "Status";
$pairList5 = "Spieler";

$pairList2ko1 = "Tdz";
$pairList2ko2 = "Position";
$pairList2ko3 = "Spieler/Paarung";
$pairList2ko4 = "Herkunft";
$pairList2ko5 = "Satz Verh�ltnis";
$pairList2ko6 = "Punkte";

$pairGroups1 = "Tdz";
$pairGroups2 = "Position";
$pairGroups3 = "Spieler/Paarungen";
$pairGroups4 = "Mannschaft";
$pairGroups5 = "Niveau";
$pairGroups6 = "Punkte";

// Label des zones
$pairId      = " #";
$echoDisci   ="Disziplin :";
$pairIbfNum  = "IBF Nr. :";
$pairNatNum  = "Nat. Nr. :";
$pairIntRank = "Internationale Rangliste:";
$pairNatRank = "Nationale Rangliste :";
$pairStatus  = "Status :";
$pairState   = "Staat :";
$pairOrder   = "Position :";
$pairCmt     = "Kommentar";
$pairWo      = "Walk-Over";
$pairDateWo  = "W-O Datum";
$msgTds      = "An eins gesetzt";
$msgPosition = "Position";
$msgStatus   = "Neuer Status";
$msgPair     = "Spieler/Paarungen";
$nbsp3       = "Qualifikanten in 3er Gruppe :";
$nbsp4       = "Qualifikanten in 4er Gruppe :";
$nbsp5       = "Qualifikanten in 5er Gruppe :";
$nbSecond    = "Anzahl bester Zweiter :";
$nbQualif    = "Qualifizierte (Gesamt) :";
$nbPlaces    = "Gesamtanzahl Pl�tze :";
$criteria    = "Crit�re de s�paration :";
$drawName    = "Feld :";

/* Messages d'erreur */
$msgNeedPairs  = "Sie m�ssen mindestns einen Spieler/Paarung ausw�hlen.";
$msgConfirmDel = "Best�tigen Sie L�schung der Felder f�r den/die Spieler/Paarung.";
$msgSameGender = "Paarung nicht m�glich. Die Spieler m�ssen unterschiedlichen Geschlechts sein.";
$msgDiffDraw   = "Paarung nicht m�glich. Die Spieler sind nicht im selben Feld.";
$msgTooMuchPlayers = "Sie m�ssen Spieler ausw�hlen, die keiner Paarung zugeteilt sind.";
$msgNeedTwoPlayers = "Maximal 2 Spieler ausw�hlen.";
$msgPairInMatch    = "Der Spieler hat schon ein Spiel bestriten. Unm�glichen ihn aus dem Feld zu nehmen.";
$msgBadPairsNum    = "Sie m�ssen so viele Spieler/Paarungen ausw�hlen wie verf�gbare Pl�tze vorhanden sind.";
$msgLotAbort       = "Auslosung gescheitert. Keine L�sung gefunden.";
$msgNoPairs        = "Keine Spieler/Paarung verf�gbar.";


// Label des boutons
$btnNew    = "Neue anmeldung";
$btnInt    = "International";
$btnNat    = "Franz�sisch";
$btnSeeded = "Auslosung";
$btnRaz    = "L�schen";

?>
