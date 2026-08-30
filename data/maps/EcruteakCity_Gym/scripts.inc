.set LOCALID_GALEN, 2

EcruteakCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EcruteakCity_Gym_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EcruteakCity_Gym_OnFrame
	.byte 0

EcruteakCity_Gym_OnWarp:
	map_script_2 VAR_ECRUTEAK_GYM_GALEN_TRIAL_STATE, 1, EcruteakCity_Gym_EventScript_QueueGalenTrialBattle
	.2byte 0

EcruteakCity_Gym_OnFrame:
	map_script_2 VAR_ECRUTEAK_GYM_GALEN_TRIAL_STATE, 2, EcruteakCity_Gym_EventScript_StartGalenTrialBattle
	.2byte 0

EcruteakCity_Gym_EventScript_Morty::
	trainerbattle_single TRAINER_GYM_ECRUTEAK_MORTY, EcruteakCity_Gym_Text_MortyIntro, EcruteakCity_Gym_Text_MortyDefeat, EcruteakCity_Gym_EventScript_MortyDefeated, NO_MUSIC
	msgbox EcruteakCity_Gym_Text_MortyPost, MSGBOX_DEFAULT
	release
	end

EcruteakCity_Gym_EventScript_MortyDefeated::
	message EcruteakCity_Gym_Text_MortyBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_JOHTO_BADGE02_GET
	setvar VAR_0x8008, 16
	call Common_EventScript_SetGymTrainers
	msgbox EcruteakCity_Gym_Text_MortyBadgeInfo, MSGBOX_DEFAULT
	release
	end

EcruteakCity_Gym_EventScript_GalenIdle::
	lock
	faceplayer
	msgbox EcruteakCity_Gym_Text_GalenTrialOnly, MSGBOX_DEFAULT
	release
	end

EcruteakCity_Gym_EventScript_GalenTrialWarp::
	goto_if_set FLAG_JOHTO_BADGE02_GET, EcruteakCity_Gym_EventScript_GalenTrialEnd
	setvar VAR_ECRUTEAK_GYM_GALEN_TRIAL_STATE, 1
	warp MAP_ECRUTEAK_CITY_GYM, 9, 17
	waitstate
	end

EcruteakCity_Gym_EventScript_GalenTrialEnd::
	end

EcruteakCity_Gym_EventScript_QueueGalenTrialBattle::
	setvar VAR_ECRUTEAK_GYM_GALEN_TRIAL_STATE, 2
	end

EcruteakCity_Gym_EventScript_StartGalenTrialBattle::
	setvar VAR_ECRUTEAK_GYM_GALEN_TRIAL_STATE, 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto EcruteakCity_Gym_EventScript_GalenTrialBattle

EcruteakCity_Gym_EventScript_GalenTrialBattle::
	goto_if_eq VAR_ECRUTEAK_GYM_GALEN_ROUND, 7, EcruteakCity_Gym_EventScript_GalenComplete
	goto_if_eq VAR_ECRUTEAK_GYM_GALEN_ROUND, 1, EcruteakCity_Gym_EventScript_Galen2
	goto_if_eq VAR_ECRUTEAK_GYM_GALEN_ROUND, 2, EcruteakCity_Gym_EventScript_Galen3
	goto_if_eq VAR_ECRUTEAK_GYM_GALEN_ROUND, 3, EcruteakCity_Gym_EventScript_Galen4
	goto_if_eq VAR_ECRUTEAK_GYM_GALEN_ROUND, 4, EcruteakCity_Gym_EventScript_Galen5
	goto_if_eq VAR_ECRUTEAK_GYM_GALEN_ROUND, 5, EcruteakCity_Gym_EventScript_Galen6
	goto_if_eq VAR_ECRUTEAK_GYM_GALEN_ROUND, 6, EcruteakCity_Gym_EventScript_Galen7
	goto EcruteakCity_Gym_EventScript_Galen1

EcruteakCity_Gym_EventScript_Galen1::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_GYM_ECRUTEAK_GALEN_1, LOCALID_GALEN, EcruteakCity_Gym_Text_GalenIntro, EcruteakCity_Gym_Text_GalenDefeat, EcruteakCity_Gym_EventScript_GalenWon
	goto EcruteakCity_Gym_EventScript_GalenAfterBattle

EcruteakCity_Gym_EventScript_Galen2::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_GYM_ECRUTEAK_GALEN_2, LOCALID_GALEN, EcruteakCity_Gym_Text_GalenIntro, EcruteakCity_Gym_Text_GalenDefeat, EcruteakCity_Gym_EventScript_GalenWon
	goto EcruteakCity_Gym_EventScript_GalenAfterBattle

EcruteakCity_Gym_EventScript_Galen3::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_GYM_ECRUTEAK_GALEN_3, LOCALID_GALEN, EcruteakCity_Gym_Text_GalenIntro, EcruteakCity_Gym_Text_GalenDefeat, EcruteakCity_Gym_EventScript_GalenWon
	goto EcruteakCity_Gym_EventScript_GalenAfterBattle

EcruteakCity_Gym_EventScript_Galen4::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_GYM_ECRUTEAK_GALEN_4, LOCALID_GALEN, EcruteakCity_Gym_Text_GalenIntro, EcruteakCity_Gym_Text_GalenDefeat, EcruteakCity_Gym_EventScript_GalenWon
	goto EcruteakCity_Gym_EventScript_GalenAfterBattle

EcruteakCity_Gym_EventScript_Galen5::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_GYM_ECRUTEAK_GALEN_5, LOCALID_GALEN, EcruteakCity_Gym_Text_GalenIntro, EcruteakCity_Gym_Text_GalenDefeat, EcruteakCity_Gym_EventScript_GalenWon
	goto EcruteakCity_Gym_EventScript_GalenAfterBattle

EcruteakCity_Gym_EventScript_Galen6::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_GYM_ECRUTEAK_GALEN_6, LOCALID_GALEN, EcruteakCity_Gym_Text_GalenIntro, EcruteakCity_Gym_Text_GalenDefeat, EcruteakCity_Gym_EventScript_GalenWon
	goto EcruteakCity_Gym_EventScript_GalenAfterBattle

EcruteakCity_Gym_EventScript_Galen7::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_GYM_ECRUTEAK_GALEN_7, LOCALID_GALEN, EcruteakCity_Gym_Text_GalenIntro, EcruteakCity_Gym_Text_GalenDefeat, EcruteakCity_Gym_EventScript_GalenWon

EcruteakCity_Gym_EventScript_GalenWon::
	addvar VAR_ECRUTEAK_GYM_GALEN_ROUND, 1

EcruteakCity_Gym_EventScript_GalenAfterBattle::
	msgbox EcruteakCity_Gym_Text_GalenPost, MSGBOX_AUTOCLOSE
	releaseall
	end

EcruteakCity_Gym_EventScript_GalenComplete::
	msgbox EcruteakCity_Gym_Text_GalenComplete, MSGBOX_AUTOCLOSE
	releaseall
	end

EcruteakCity_Gym_Text_MortyIntro:
	.string "I am MORTY,\n"
	.string "master of ghost-type Pokémon.$"

EcruteakCity_Gym_Text_MortyDefeat:
	.string "Your spirit is strong.$"

EcruteakCity_Gym_Text_MortyBadge:
	.string "You received the Fog Badge!$"

EcruteakCity_Gym_Text_MortyBadgeInfo:
	.string "The Fog Badge proves your victory here.$"

EcruteakCity_Gym_Text_MortyPost:
	.string "Let your spirit guide you onward.$"

EcruteakCity_Gym_Text_GalenTrialOnly:
	.string "Only those who enter the trial\n"
	.string "may face me.$"

EcruteakCity_Gym_Text_GalenIntro:
	.string "The maze has brought you back to me.$"

EcruteakCity_Gym_Text_GalenDefeat:
	.string "The shadows shift again.$"

EcruteakCity_Gym_Text_GalenPost:
	.string "Another path waits in the dark.$"

EcruteakCity_Gym_Text_GalenComplete:
	.string "You have conquered every shadow\n"
	.string "I command.$"
