.set LOCALID_MOM, 1

PalletTown_PlayersHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PalletTown_PlayersHouse_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_PlayersHouse_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_PlayersHouse_1F_OnFrame
	.byte 0

PalletTown_PlayersHouse_1F_OnLoad:
	end

PalletTown_PlayersHouse_1F_OnTransition:
	call_if_eq VAR_INTRO_STATE, 3, PalletTown_PlayersHouse_1F_EventScript_MoveMomToDoor
	call_if_eq VAR_INTRO_STATE, 5, PalletTown_PlayersHouse_1F_EventScript_MoveMomToTV
	end

PalletTown_PlayersHouse_1F_EventScript_MoveMomToTV::
	setobjectxyperm LOCALID_MOM, 5, 2
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
	return

PalletTown_PlayersHouse_1F_EventScript_MoveMomToDoor::
	setobjectxyperm LOCALID_MOM, 4, 8
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_LEFT
	return

@ Many of the below scripts have no gender check because they assume youre in the correct house
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
PalletTown_PlayersHouse_1F_OnFrame:
	map_script_2 VAR_INTRO_STATE, 3, PalletTown_PlayersHouse_1F_EventScript_EnterHouseMovingIn
	map_script_2 VAR_INTRO_STATE, 5, PalletTown_PlayersHouse_1F_EventScript_GymReport
	.2byte 0

PalletTown_PlayersHouse_1F_EventScript_EnterHouseMovingIn::
	lockall
	setvar VAR_0x8004, LOCALID_MOM
	setvar VAR_0x8005, MALE
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
	end

PalletTown_PlayersHouse_1F_EventScript_GymReport::
	lockall
	setvar VAR_0x8004, MALE
	setvar VAR_0x8005, LOCALID_MOM
	special TurnOnTVScreen
	goto PalletTown_PlayersHouse_1F_EventScript_PetalburgGymReport
	end

PalletTown_PlayersHouse_1F_EventScript_GoSeeRoom::
	lockall
	setvar VAR_0x8004, LOCALID_MOM
	setvar VAR_0x8005, MALE
	applymovement VAR_0x8004, Common_Movement_FacePlayer
	waitmovement 0
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
	end


PalletTown_PlayersHouse_1F_EventScript_PetalburgGymReport::
	setvar VAR_INTRO_STATE, 7
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_PlayersHouse_1F_Movement_PlayerApproachTVForGym
	waitmovement 0
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
	msgbox PlayersHouse_1F_Text_MaybeDadWillBeOn, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTV
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTV
	waitmovement 0
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PlayersHouse_1F_Text_ItsOverWeMissedHim, MSGBOX_DEFAULT
	msgbox PlayersHouse_1F_Text_ThingsMovedOut, MSGBOX_DEFAULT
	msgbox PlayersHouse_1F_Text_StartYourAdventure, MSGBOX_DEFAULT
	givemon SPECIES_PICHU, 3
	setflag FLAG_SYS_POKEMON_GET
	bufferleadmonspeciesname STR_VAR_1
	playfanfare MUS_OBTAIN_ITEM
	message PlayersHouse_1F_Text_PlayerReceivedPichu
	waitmessage
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PalletTown_PlayersHouse_1F_EventScript_NicknameMon
	call PalletTown_PlayersHouse_1F_EventScript_MomLeaving

PalletTown_PlayersHouse_1F_EventScript_NicknameMon::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	call PalletTown_PlayersHouse_1F_EventScript_MomLeaving
	return

PalletTown_PlayersHouse_1F_EventScript_MomLeaving::
	msgbox PlayersHouse_1F_Text_TakeCareOfHouse, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_PlayersHouse_1F_Movement_WalkToDoor
	applymovement VAR_0x8005, PalletTown_PlayersHouse_1F_Movement_MomLeaveAndReturn
	waitmovement 0
	msgbox PalletTown_PlayersHouse_1F_Text_AlmostForgot, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomLeave
	waitmovement 0
	removeobject LOCALID_MOM
	playse SE_EXIT
	setflag FLAG_HIDE_PLAYERS_HOUSE_MOM
	setvar VAR_TEMP_1, 1
	setflag FLAG_SYS_B_DASH
	end

PalletTown_PlayersHouse_1F_Movement_PlayerApproachTVForGym:
	walk_left
	walk_left
	walk_left
	step_end

PalletTown_PlayersHouse_1F_Movement_WalkToDoor:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_down
	step_end

PalletTown_PlayersHouse_1F_Movement_MomLeaveAndReturn:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	step_end

PalletTown_PlayersHouse_1F_Text_AlmostForgot:
	.string "I almost forgot!\p"
	.string "I spoke to a man named Professor Oak\n"
	.string "here in Pallet Town earlier today.\p" 
	.string "He wants you to visit him in his lab,\n"
	.string "please go and see him!\p"
	.string "Bye {PLAYER}!$"
