.set LOCALID_MOM, 1

NewBarkTown_PlayersHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, NewBarkTown_PlayersHouse_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, NewBarkTown_PlayersHouse_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewBarkTown_PlayersHouse_1F_OnFrame
	.byte 0

NewBarkTown_PlayersHouse_1F_OnLoad:
	end

NewBarkTown_PlayersHouse_1F_OnTransition:
	call_if_eq VAR_INTRO_STATE, 3, NewBarkTown_PlayersHouse_1F_EventScript_MoveMomToDoor
	call_if_eq VAR_INTRO_STATE, 5, NewBarkTown_PlayersHouse_1F_EventScript_MoveMomToTV
	end

NewBarkTown_PlayersHouse_1F_EventScript_MoveMomToTV::
	setobjectxyperm LOCALID_MOM, 6, 2
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
	return

NewBarkTown_PlayersHouse_1F_EventScript_MoveMomToDoor::
	setobjectxyperm LOCALID_MOM, 9, 8
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_LEFT
	return

@ Many of the below scripts have no gender check because they assume youre in the correct house
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
NewBarkTown_PlayersHouse_1F_OnFrame:
	map_script_2 VAR_INTRO_STATE, 3, NewBarkTown_PlayersHouse_1F_EventScript_EnterHouseMovingIn
	map_script_2 VAR_INTRO_STATE, 5, NewBarkTown_PlayersHouse_1F_EventScript_GymReport
	.2byte 0

NewBarkTown_PlayersHouse_1F_EventScript_EnterHouseMovingIn::
	lockall
	setvar VAR_0x8004, LOCALID_MOM
	setvar VAR_0x8005, MALE
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
	end

NewBarkTown_PlayersHouse_1F_EventScript_GymReport::
	lockall
	setvar VAR_0x8004, MALE
	setvar VAR_0x8005, LOCALID_MOM
	special TurnOnTVScreen
	goto NewBarkTown_PlayersHouse_1F_EventScript_VioletGymReport
	end

NewBarkTown_PlayersHouse_1F_EventScript_GoSeeRoom::
	lockall
	setvar VAR_0x8004, LOCALID_MOM
	setvar VAR_0x8005, MALE
	applymovement VAR_0x8004, Common_Movement_FacePlayer
	waitmovement 0
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
	end

NewBarkTown_PlayersHouse_1F_EventScript_VioletGymReport::
	setvar VAR_INTRO_STATE, 7
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_PlayersHouse_1F_Movement_PlayerApproachTVForGym
	waitmovement 0
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
	msgbox NewBarkTown_PlayersHouse_1F_Text_MaybeDadWillBeOn, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTV
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTV
	waitmovement 0
	call NewBarkTown_PlayersHouse_1F_EventScript_WatchGymBroadcast
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PlayersHouse_1F_Text_ItsOverWeMissedHim, MSGBOX_DEFAULT
	msgbox NewBarkTown_PlayersHouse_1F_Text_ThingsMovedOut, MSGBOX_DEFAULT
	msgbox PlayersHouse_1F_Text_StartYourAdventure, MSGBOX_DEFAULT
	givemon SPECIES_PICHU, 3
	setflag FLAG_SYS_POKEMON_GET
	bufferleadmonspeciesname STR_VAR_1
	playfanfare MUS_OBTAIN_ITEM
	message PlayersHouse_1F_Text_PlayerReceivedPichu
	waitmessage
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTown_PlayersHouse_1F_EventScript_NicknameMon
	call NewBarkTown_PlayersHouse_1F_EventScript_MomLeaving

NewBarkTown_PlayersHouse_1F_EventScript_WatchGymBroadcast::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox NewBarkTown_PlayersHouse_1F_Text_ReportFromPetalburgGym, MSGBOX_DEFAULT
	fadedefaultbgm
	special TurnOffTVScreen
	setflag FLAG_SYS_TV_HOME
	delay 35
	return

NewBarkTown_PlayersHouse_1F_EventScript_NicknameMon::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	call NewBarkTown_PlayersHouse_1F_EventScript_MomLeaving
	return

NewBarkTown_PlayersHouse_1F_EventScript_MomLeaving::
	msgbox NewBarkTown_PlayersHouse_1F_Text_TakeCareOfHouse, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_PlayersHouse_1F_Movement_WalkToDoor
	applymovement VAR_0x8005, NewBarkTown_PlayersHouse_1F_Movement_MomLeaveAndReturn
	waitmovement 0
	msgbox NewBarkTown_PlayersHouse_1F_Text_AlmostForgot, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8005, NewBarkTown_PlayersHouse_1F_Movement_MomLeave
	waitmovement 0
	removeobject LOCALID_MOM
	playse SE_EXIT
	setflag FLAG_HIDE_PLAYERS_HOUSE_MOM
	setvar VAR_TEMP_1, 1
	setflag FLAG_SYS_B_DASH
	end

NewBarkTown_PlayersHouse_1F_Movement_PlayerApproachTVForGym:
	walk_left
	walk_left
	step_end

NewBarkTown_PlayersHouse_1F_Movement_WalkToDoor:
	walk_right
	walk_right
	walk_down
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_right
	walk_down
	walk_down
	walk_in_place_faster_down
	step_end

NewBarkTown_PlayersHouse_1F_Movement_MomLeaveAndReturn:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	delay_16
	delay_16
	delay_16
	walk_right
	walk_up
	step_end

NewBarkTown_PlayersHouse_1F_Movement_MomLeave:
	walk_down
	walk_left
	walk_in_place_faster_down
	step_end

NewBarkTown_PlayersHouse_1F_Text_AlmostForgot:
	.string "I almost forgot!\p"
	.string "I spoke to a man named Professor Elm\n"
	.string "here in New Bark Town earlier today.\p" 
	.string "He wants you to visit him in his lab,\n"
	.string "please go and see him!\p"
	.string "Bye {PLAYER}!$"

NewBarkTown_PlayersHouse_1F_Text_MaybeDadWillBeOn:
	.string "MOM: Look! It's Violet City Gym!\n"
	.string "Maybe Dad will be on!$"

NewBarkTown_PlayersHouse_1F_Text_ReportFromPetalburgGym:
	.string "INTERVIEWER: …We brought you this\n"
	.string "report from in front of Violet City Gym.$"

NewBarkTown_PlayersHouse_1F_Text_ThingsMovedOut:
	.string "Well honey, all of your things have been\n"
	.string "moved in.\p"
	.string "Are you sure that you're going to be ok\n"
	.string "living here alone?\p"
	.string "You're still welcome to continue living\n"
	.string "with us in Violet City!$"

NewBarkTown_PlayersHouse_1F_Text_TakeCareOfHouse:
	.string "I'm really going to miss you.\p"
	.string "Please take good care of your home,\n"
	.string "I know you and your new friend will do\l"
	.string "just fine!\p"
	.string "Come and visit us in Violet City soon,\n"
	.string "honey! I love you!$"
