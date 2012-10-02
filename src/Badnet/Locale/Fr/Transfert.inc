<?php 
define('LOC_LABEL_TOURNAMENT','Tournoi'); 
define('LOC_TITLE_CONTROL','Contrôle du fichier'); 
define('LOC_LABEL_OTHER_FILE','Traiter un autre fichier après celui-ci'); 
define('LOC_TITLE_FILE_TIES','Fichier contenant les rencontres'); 
define('LOC_P_IMPORT_TIES','Choisissez le fichier contenant les rencontres à importer dans le tournoi. Ce fichier doit avoir été généré par l\'outil déporté de gestion des rencontres BadNetTeam. Les résultats des rencontres contenus dans le fichier remplaceront ceux actuellement enregistrés dans le tournoi. Il est conseillé de faire une sauvegarde du tournoi avant de procéder à l\'importation.'); 
define('LOC_P_TIES','Choisissez la date correspondant à la journée que vous organisez. Pour chaque division et chaque groupe, un fichier contenant les rencontres de cette date sera généré. L\'ensemble des fichiers sera réuni dans un seul fichier compressé au format zip que vous pourrez enregistrer sur votre ordinateur. '); 
define('LOC_TITLE_SELECT_TIES','Choix des rencontres'); 
define('LOC_LABEL_FILE','Fichier'); 
define('LOC_P_FILES','Sélectionner le fichier contenant les données du tournoi. Les données existantes seront mise à jour, les nouvelles données seront ajoutées, les données absentes ne seront pas modifiées ni supprimées. Si des résultats de rencontres ont déjà étés saisis, ils seront perdus.'); 
define('LOC_TITLE_IC','Interclubs'); 
define('LOC_BTN_IMPORT','Importer'); 
define('LOC_TITLE_FILE','Choix du fichier'); 
define('LOC_BTN_EXPORT_POONA','Exporter'); 
define('LOC_TITLE_EXPORT_POONA','Fédération'); 
define('LOC_LABEL_EXPORT_POONA','Vous devez enregistrer les résultats de ce tournoi dans le logiciel fédéral; Utiliser cette option pour obtenir le fichier.'); 
define('LOC_BTN_EXPORT_HALL','Choisir salle'); 
define('LOC_TITLE_EXPORT_HALL','Fusion salle'); 
define('LOC_LABEL_EXPORT_HALL','Votre tournoi se déroule dans plusieurs salles, ce tournoi est un tournoi fils; vous souhaitez préparer un fichier avec les résultats des matchs de cette salle pour les fusionner dans le tournoi maitre; Utilisez cette option pour obtenir le fichier.'); 
define('LOC_BTN_EXPORT_FULL','Sauvegarder'); 
define('LOC_TITLE_EXPORT_FULL','Sauvegarde'); 
define('LOC_LABEL_EXPORT_FULL','Vous souhaitez effectuer une sauvegarde de votre tournoi qui pourra être utilisée soit pour restaurer le tournoi, soit pour l\'installer sur une autre machine. N\'hésitez plus; c\'est cette option!'); 
define('LOC_BTN_EXPORT_TIES','Choisir rencontres'); 
define('LOC_TITLE_EXPORT_TIES','Rencontres interclubs'); 
define('LOC_LABEL_EXPORT_TIES','Vous organisez une journée d\'interclubs et devez saisir les résulats sur place avec une version de BadNet. Utilisez cette option pour obtenir le fichier contenant les rencontres de cette journée et pouvoir les importer dans la version de BadNet que vous utiliserez dans la salle.'); 
define('LOC_P_EXPORT','Vous souhaitez enregistrer tout ou partie des données de ce tournoi dans un fichier; sélectionnez le type d\'opération que vous souhaitez effectuer. '); 
define('LOC_BTN_IMPORT_HALL','Fusionner'); 
define('LOC_TITLE_IMPORT_HALL','Fusion salle'); 
define('LOC_LABEL_IMPORT_HALL','Votre tournoi se déroule dans plusieurs salle, ce tournoi est le tournoi maitre; vous souhaitez fusionner les résultats des matchs provenant d\'une autre salle; Utilisez cette option pour traiter le fichier provenant d\'une autre salle.'); 
define('LOC_BTN_IMPORT_FULL','Restaurer'); 
define('LOC_TITLE_IMPORT_FULL','Restauration'); 
define('LOC_LABEL_IMPORT_FULL','Restauration : vous avez effectué une sauvegarde de votre tournoi et vous souhaitez maintenant retrouver l\'état de votre compétition au moment de cette sauvegarde.'); 
define('LOC_BTN_IMPORT_DIVS','Divisions'); 
define('LOC_TITLE_IMPORT_DIVS','Division et calendrier'); 
define('LOC_LABEL_IMPORT_DIVS','Vous avez préparé votre interclubs avec un outils extérieur. Celui-ci vous a permis de générer un fichier contenant la liste des club, des divisions, des groupes, des équipe et des rencontres avec leur date. Utilisez cette option pour enregistrer toutes ces informations dans ce tournoi.'); 
define('LOC_BTN_IMPORT_TIES','Rencontres'); 
define('LOC_TITLE_IMPORT_TIES','Rencontres interclubs'); 
define('LOC_LABEL_IMPORT_TIES','Vous avez organisé une journée d\'interclubs et saisi les résultats sur place avec une version de BadNet. Aprés avoir enregistré les résultats dans un fichier, utilisez cette option pour les intégrer dans le tournoi final.'); 
define('LOC_P_IMPORT','Vous souhaitez importer des données provenant du source extérieure dans votre tournoi. Attention cette opération est irréversible. Il n\'y a aucun moyen de revenir en arrière. Nous vous conseillons d\'effectuer une sauvegarde de votre tournoi avant toute opération d\'importation. Sélectionner le type d\'opération que vous souhaitez effectuer. '); 
define('LOC_TITLE_O','Choix du type d\'exportation'); 
define('LOC_TITLE_I','Choix du type d\'importation'); 
define('LOC_TITLE_OUTPUT','Exportation'); 
define('LOC_TITLE_INPUT','Importation'); 
define('LOC_BTN_OUTPUT','Exporter'); 
define('LOC_BTN_INPUT','Importer'); 
define('LOC_BTN_PREV','Précédent'); 
define('LOC_BTN_NEXT','Suivant'); 
define('LOC_LABEL_INPUT','Choisissez cette option pour remplacer ou compléter les données de votre tournoi avec les informations contenues dans un fichier ou en vous connectant directement au site BadNet. La provenance du fichier est de votre responsabilité. Normalement il doit être le résultat d\'une exportation (option ci-dessus) mais il peut aussi provenir d\'une autre source. Utilisez cette option pour, par exemple, intégrer les résultats d\'une journée interclubs ou des matchs d\'une autre salle,  '); 
define('LOC_LABEL_OUTPUT','Cette option vous permet d\'enregistrer les données de votre tournoi dans un fichier. L\'assistant vous demandera par la suite de préciser le format du fichier et de choisir les données à enregistrer. Utilisez cette option pour préparer un fichier destiné à enregistrer les résultats dans la base fédérale, pour préparer une journée interclubs, pour transférer les résultats d\'une salle dans une autre ... '); 
define('LOC_P_TRANSFERT','Le module de transfert vous permet d\'importer des données dans votre tournoi à partir d\'une source extérieure ou alors d\'exporter les données de votre tournoi vers un fichier au format de votre choix. Cet assistant vous guidera pour arriver à votre objectif.'); 
define('LOC_TITLE_SENSE','Sens de transfert'); 
define('LOC_TITLE_TRANSFERT','Transfert de données'); 
?>