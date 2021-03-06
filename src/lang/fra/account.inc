<?php

include dirname(__FILE__)."/badnet.inc";
include dirname(__FILE__)."/menu.inc";
//include dirname(__FILE__)."/t_account.inc";

// Titre  du navigateur
$account     = "Comptes";

// Titres des fenetres
$tAccounts      = "Liste des comptes";
$tNewAccount    = "Cr�ation d'un compte";
$tEditAccount   = "Modification d'un compte";
$tDelAccount    = "Suppression de compte";
$tNewPurchase   = "Cr�ation d'un achat";
$tEditPurchase  = "Modification d'un achat";

// Menus 
$itPurchases  = "Achats";
$itCredits    = "Provisions";
$itMembers    = "Membres";
$itNewCredit  = "Ajout provision";

// Titre des colonnes
$rowsAccounts1  = "Nom";
$rowsAccounts2  = "Code";
$rowsAccounts3  = "Status";
$rowsAccounts4  = "Achat";
$rowsAccounts5  = "Remise";
$rowsAccounts6  = "Pay�";
$rowsAccounts7  = "Solde";

$rowsPurchase1  = "Date";
$rowsPurchase2  = "Article";
$rowsPurchase3  = "Qui";
$rowsPurchase4  = "Cout";
$rowsPurchase5  = $rowsAccounts5;
$rowsPurchase6  = $rowsAccounts6;
$rowsPurchase7  = $rowsAccounts7;

$rowsCredit1  = "Date";
$rowsCredit2  = "Intitul�";
$rowsCredit3  = "Qui";
$rowsCredit4  = "Montant";
$rowsCredit5  = "Reste";
$rowsCredit6  = "Remboursable";

$rowsMembers1  = "Sexe";
$rowsMembers2  = "Nom";
$rowsMembers3  = "Pr�nom";
$rowsMembers4  = "Type";
$rowsMembers5  = $rowsAccounts4;
$rowsMembers6  = $rowsAccounts5;
$rowsMembers7  = $rowsAccounts6;
$rowsMembers8  = $rowsAccounts7;




// Label des zones
$cuntTeam = "Compte du club :";
$cuntName = "Nom :";
$cuntCode = "Code :";
$cuntCmt  = "Commentaire :";
$cmdName = "Achat :";
$cmdDate = "Date :";
$cmdValue = "Valeur :";
$cmdDiscount = "Remise :";
$cmdPayed = "Pay� :";
$solde    = "Solde du compte :";
$accountDate   = "Date :";
$accountValue      = "Cout total :";
$accountDiscount   = "Remise :";
$accountPayed      = "Pay� :";
$accountSolde      = "Solde :";

// Label des listes

// Messages d'erreur
$msgcuntName  = "Le nom est obligatoire.";
$msgcuntCode  = "Le code est obligatoire.";

$msgNoPurchases  = "Pas d'achat sur ce compte.";
$msgNoAccounts   = "Aucun compte existant.";
$msgNoCredits    = "Pas de provison sur ce compte.";
$msgNoItems      = "Aucun article d�clar�.";
$msgNoMembers    = "Aucun inscrit sur ce compte.";
$msgPersonnalAccount = "Compte personnel";
$msgConfirmDel    = "Voulez-vous supprimer les comptes s�lectionn�s ?";
$msgPurchaseExist = "Un des comptes a des achats ou des provisions. Impossible de le supprimer!";
$msgTeamExist = "Au moins une �quipe est associ�e a un compte. Impossible de le supprimer!";
$msgMemberExist = "Au moins un inscrit est associ� a un compte. Impossible de le supprimer!";


// Label des boutons
$btnGo ="Go";
?>
