ALTER TABLE `bdnet_eventsextra` ADD `evxt_captain` INT(11) NOT NULL DEFAULT 161;
ALTER TABLE `bdnet_eventsextra` ADD `evxt_allowaddplayer` INT(11) NOT NULL DEFAULT 502;
ALTER TABLE `bdnet_eventsextra` ADD `evxt_delayaddplayer` INT(11) NOT NULL DEFAULT 3;
ALTER TABLE `bdnet_eventsextra` ADD `evxt_licenseonly` INT(11) NOT NULL DEFAULT 160;
ALTER TABLE `bdnet_eventsextra` ADD `evxt_licensetype` CHAR(128) NOT NULL DEFAULT '';
ALTER TABLE `bdnet_eventsextra` ADD `evxt_licensecatage` CHAR(128) NOT NULL DEFAULT '6;7;301;302;303;304;305;306;307';
ALTER TABLE `bdnet_eventsextra` ADD `evxt_multiteamplayer` INT(11) NOT NULL DEFAULT 161;
ALTER TABLE `bdnet_eventsextra` ADD `evxt_multiassoteam` INT(11) NOT NULL DEFAULT 161;
ALTER TABLE `bdnet_eventsextra` ADD `evxt_delaycaptain` INT(11) NOT NULL DEFAULT 0;
ALTER TABLE `bdnet_eventsextra` ADD `evxt_reginline` INT(11) NOT NULL DEFAULT 161;
ALTER TABLE `bdnet_eventsextra` ADD `evxt_paybadnet` INT(11) NOT NULL DEFAULT 160;
ALTER TABLE `bdnet_eventsextra` ADD `evxt_feesteam` INT(11) NOT NULL DEFAULT 0;