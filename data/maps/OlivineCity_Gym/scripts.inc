.set LOCALID_WOMAN1, 2
.set LOCALID_WOMAN2, 3

OlivineCity_Gym_MapScripts::
	.byte 0

OlivineCity_Gym_EventScript_Sable::
	trainerbattle_single TRAINER_GYM_OLIVINE_SABLE, OlivineCity_Gym_Text_SableIntro, OlivineCity_Gym_Text_SableDefeat, OlivineCity_Gym_EventScript_SableDefeated, NO_MUSIC
	msgbox OlivineCity_Gym_Text_SablePostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_SableDefeated::
	call OlivineCity_Gym_EventScript_UnlockRoom1
	msgbox OlivineCity_Gym_Text_SablePostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_Percival::
	trainerbattle_single TRAINER_GYM_OLIVINE_PERCIVAL, OlivineCity_Gym_Text_PercivalIntro, OlivineCity_Gym_Text_PercivalDefeat, OlivineCity_Gym_EventScript_PercivalDefeated, NO_MUSIC
	msgbox OlivineCity_Gym_Text_PercivalPostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_PercivalDefeated::
	call OlivineCity_Gym_EventScript_UnlockRoom2
	msgbox OlivineCity_Gym_Text_PercivalPostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_Myra::
	trainerbattle_single TRAINER_GYM_OLIVINE_MYRA, OlivineCity_Gym_Text_MyraIntro, OlivineCity_Gym_Text_MyraDefeat, OlivineCity_Gym_EventScript_MyraDefeated, NO_MUSIC
	msgbox OlivineCity_Gym_Text_MyraPostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_MyraDefeated::
	call OlivineCity_Gym_EventScript_UnlockRoom3
	msgbox OlivineCity_Gym_Text_MyraPostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_Garrick::
	trainerbattle_single TRAINER_GYM_OLIVINE_GARRICK, OlivineCity_Gym_Text_GarrickIntro, OlivineCity_Gym_Text_GarrickDefeat, OlivineCity_Gym_EventScript_GarrickDefeated, NO_MUSIC
	msgbox OlivineCity_Gym_Text_GarrickPostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_GarrickDefeated::
	call OlivineCity_Gym_EventScript_UnlockRoom4
	msgbox OlivineCity_Gym_Text_GarrickPostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_AdelLinn::
	trainerbattle_double TRAINER_GYM_OLIVINE_ADEL_LINN, OlivineCity_Gym_Text_AdelLinnIntro, OlivineCity_Gym_Text_AdelLinnDefeat, OlivineCity_Gym_Text_AdelLinnNeedTwoMons, OlivineCity_Gym_EventScript_AdelLinnDefeated, NO_MUSIC
	msgbox OlivineCity_Gym_Text_AdelLinnPostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_AdelLinnDefeated::
	applymovement LOCALID_WOMAN1, OlivineCity_Gym_Movement_Woman1
	applymovement LOCALID_WOMAN2, OlivineCity_Gym_Movement_Woman2
	waitmovement 0
	call OlivineCity_Gym_EventScript_UnlockGymLeaderRoom
	msgbox OlivineCity_Gym_Text_AdelLinnPostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_Jasmine::
	trainerbattle_single TRAINER_GYM_OLIVINE_JASMINE, OlivineCity_Gym_Text_JasmineIntro, OlivineCity_Gym_Text_JasmineDefeat, OlivineCity_Gym_EventScript_JasmineDefeated, NO_MUSIC
	msgbox OlivineCity_Gym_Text_JasminePostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_JasmineDefeated::
	message OlivineCity_Gym_Text_ReceivedMineralBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_JOHTO_BADGE03_GET
	setvar VAR_0x8008, 17
	call Common_EventScript_SetGymTrainers
	msgbox OlivineCity_Gym_Text_MineralBadgeInfo, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_Movement_Woman1:
	walk_left
	walk_in_place_down
	step_end

OlivineCity_Gym_Movement_Woman2:
	walk_right
	walk_in_place_down
	step_end

OlivineCity_Gym_EventScript_UnlockRoom1::
	setmetatile 26, 8, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 27, 8, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 26, 9, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 27, 9, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 26, 10, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 27, 10, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 28, 10, METATILE_CinnabarIslandGym_SlantedShadowFloor, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	return

OlivineCity_Gym_EventScript_UnlockRoom2::
	setmetatile 17, 8, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 18, 8, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 17, 9, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 18, 9, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 17, 10, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 18, 10, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 19, 10, METATILE_CinnabarIslandGym_SlantedShadowFloor, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	return

OlivineCity_Gym_EventScript_UnlockRoom3::
	setmetatile 17, 15, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 18, 15, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 17, 16, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 18, 16, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 17, 17, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 18, 17, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 19, 17, METATILE_CinnabarIslandGym_SlantedShadowFloor, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	return

OlivineCity_Gym_EventScript_UnlockRoom4::
	setmetatile 5, 16, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 6, 16, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 5, 17, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 6, 17, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 5, 18, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 6, 18, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 7, 18, METATILE_CinnabarIslandGym_SlantedShadowFloor, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	return

OlivineCity_Gym_EventScript_UnlockGymLeaderRoom::
	setmetatile 5, 8, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 6, 8, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 5, 9, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 6, 9, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 5, 10, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 6, 10, METATILE_CinnabarIslandGym_NormalFloor, FALSE
	setmetatile 7, 10, METATILE_CinnabarIslandGym_SlantedShadowFloor, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
OlivineCity_Gym_Text_SableIntro:
	.string "Steel may bend, but it will not break!$"

OlivineCity_Gym_Text_SableDefeat:
	.string "You bent my defenses.$"

OlivineCity_Gym_Text_SablePostBattle:
	.string "The way to the next room is open.$"

OlivineCity_Gym_Text_PercivalIntro:
	.string "A polished team is a sturdy team.$"

OlivineCity_Gym_Text_PercivalDefeat:
	.string "Your technique was refined.$"

OlivineCity_Gym_Text_PercivalPostBattle:
	.string "A strong foundation carries every battle.$"

OlivineCity_Gym_Text_MyraIntro:
	.string "My steel-type POKéMON shine brightly!$"

OlivineCity_Gym_Text_MyraDefeat:
	.string "Their shine faded…$"

OlivineCity_Gym_Text_MyraPostBattle:
	.string "JASMINE's POKéMON shine brightest of all.$"

OlivineCity_Gym_Text_GarrickIntro:
	.string "Can you crack a wall of steel?$"

OlivineCity_Gym_Text_GarrickDefeat:
	.string "You found the weak point.$"

OlivineCity_Gym_Text_GarrickPostBattle:
	.string "The final room is just ahead.$"

OlivineCity_Gym_Text_AdelLinnIntro:
	.string "We'll guard JASMINE together!$"

OlivineCity_Gym_Text_AdelLinnDefeat:
	.string "We couldn't hold the line.$"

OlivineCity_Gym_Text_AdelLinnNeedTwoMons:
	.string "You need at least two POKéMON to face us!$"

OlivineCity_Gym_Text_AdelLinnPostBattle:
	.string "The leader's room is open now.$"

OlivineCity_Gym_Text_JasmineIntro:
	.string "I am JASMINE, leader of this steel-type gym.\p"
	.string "Let us see how your team stands against mine.$"

OlivineCity_Gym_Text_JasmineDefeat:
	.string "Your spirit is stronger than steel.$"

OlivineCity_Gym_Text_ReceivedMineralBadge:
	.string "You received the Mineral Badge!$"

OlivineCity_Gym_Text_MineralBadgeInfo:
	.string "The Mineral Badge proves your victory here.$"

OlivineCity_Gym_Text_JasminePostBattle:
	.string "True strength is built through patience.$"
