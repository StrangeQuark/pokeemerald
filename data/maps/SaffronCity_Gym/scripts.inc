SaffronCity_Gym_MapScripts::
	.byte 0

SaffronCity_Gym_EventScript_NikoVivi::
	trainerbattle_double TRAINER_GYM_SAFFRON_NIKO_VIVI, SaffronCity_Gym_Text_NikoViviIntro, SaffronCity_Gym_Text_NikoViviDefeat, SaffronCity_Gym_Text_NikoViviNeedTwoMons, SaffronCity_Gym_EventScript_NikoViviDefeated, NO_MUSIC
	msgbox SaffronCity_Gym_Text_NikoViviPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_NikoViviDefeated::
	call SaffronCity_Gym_EventScript_UnlockRoom1
	msgbox SaffronCity_Gym_Text_NikoViviPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_Ansel::
	trainerbattle_single TRAINER_GYM_SAFFRON_ANSEL, SaffronCity_Gym_Text_AnselIntro, SaffronCity_Gym_Text_AnselDefeat, SaffronCity_Gym_EventScript_AnselDefeated, NO_MUSIC
	msgbox SaffronCity_Gym_Text_AnselPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_AnselDefeated::
	call SaffronCity_Gym_EventScript_UnlockRoom2
	msgbox SaffronCity_Gym_Text_AnselPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_IreneOwen::
	trainerbattle_double TRAINER_GYM_SAFFRON_IRENE_OWEN, SaffronCity_Gym_Text_IreneOwenIntro, SaffronCity_Gym_Text_IreneOwenDefeat, SaffronCity_Gym_Text_IreneOwenNeedTwoMons, SaffronCity_Gym_EventScript_IreneOwenDefeated, NO_MUSIC
	msgbox SaffronCity_Gym_Text_IreneOwenPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_IreneOwenDefeated::
	call SaffronCity_Gym_EventScript_UnlockRoom3
	msgbox SaffronCity_Gym_Text_IreneOwenPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_Vera::
	trainerbattle_single TRAINER_GYM_SAFFRON_VERA, SaffronCity_Gym_Text_VeraIntro, SaffronCity_Gym_Text_VeraDefeat, SaffronCity_Gym_EventScript_VeraDefeated, NO_MUSIC
	msgbox SaffronCity_Gym_Text_VeraPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_VeraDefeated::
	call SaffronCity_Gym_EventScript_UnlockRoom4
	msgbox SaffronCity_Gym_Text_VeraPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_Quentin::
	trainerbattle_single TRAINER_GYM_SAFFRON_QUENTIN, SaffronCity_Gym_Text_QuentinIntro, SaffronCity_Gym_Text_QuentinDefeat, SaffronCity_Gym_EventScript_QuentinDefeated, NO_MUSIC
	msgbox SaffronCity_Gym_Text_QuentinPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_QuentinDefeated::
	call SaffronCity_Gym_EventScript_UnlockRoom5
	msgbox SaffronCity_Gym_Text_QuentinPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_NiaSaul::
	trainerbattle_double TRAINER_GYM_SAFFRON_NIA_SAUL, SaffronCity_Gym_Text_NiaSaulIntro, SaffronCity_Gym_Text_NiaSaulDefeat, SaffronCity_Gym_Text_NiaSaulNeedTwoMons, SaffronCity_Gym_EventScript_NiaSaulDefeated, NO_MUSIC
	msgbox SaffronCity_Gym_Text_NiaSaulPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_NiaSaulDefeated::
	call SaffronCity_Gym_EventScript_UnlockRoom6
	msgbox SaffronCity_Gym_Text_NiaSaulPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_FelixCor::
	trainerbattle_double TRAINER_GYM_SAFFRON_FELIX_COR, SaffronCity_Gym_Text_FelixCorIntro, SaffronCity_Gym_Text_FelixCorDefeat, SaffronCity_Gym_Text_FelixCorNeedTwoMons, SaffronCity_Gym_EventScript_FelixCorDefeated, NO_MUSIC
	msgbox SaffronCity_Gym_Text_FelixCorPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_FelixCorDefeated::
	call SaffronCity_Gym_EventScript_UnlockRoom7
	call SaffronCity_Gym_EventScript_UnlockGymLeaderRoom
	msgbox SaffronCity_Gym_Text_FelixCorPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_Sabrina::
	trainerbattle_single TRAINER_GYM_SAFFRON_SABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_SabrinaDefeated, NO_MUSIC
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_SabrinaDefeated::
	message SaffronCity_Gym_Text_ReceivedMarshBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_KANTO_BADGE06_GET
	setvar VAR_0x8008, 14
	call Common_EventScript_SetGymTrainers
	msgbox SaffronCity_Gym_Text_MarshBadgeInfo, MSGBOX_DEFAULT
	release
	end

SaffronCity_Gym_EventScript_UnlockRoom1::
	setmetatile 0, 4, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 8, 4, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 0, 7, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 8, 7, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	return

SaffronCity_Gym_EventScript_UnlockRoom2::
	setmetatile 12, 4, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 16, 4, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 12, 7, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 17, 7, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	return

SaffronCity_Gym_EventScript_UnlockRoom3::
	setmetatile 20, 4, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 28, 4, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 20, 7, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 28, 7, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	return

SaffronCity_Gym_EventScript_UnlockRoom4::
	setmetatile 0, 12, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 8, 12, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 0, 15, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 8, 15, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	return

SaffronCity_Gym_EventScript_UnlockRoom5::
	setmetatile 20, 12, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 28, 12, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 20, 15, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 28, 15, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	return

SaffronCity_Gym_EventScript_UnlockRoom6::
	setmetatile 0, 20, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 8, 20, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 0, 23, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 8, 23, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	return

SaffronCity_Gym_EventScript_UnlockRoom7::
	setmetatile 20, 20, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 28, 20, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 20, 23, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	setmetatile 28, 23, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	return

SaffronCity_Gym_EventScript_UnlockGymLeaderRoom::
	setmetatile 18, 15, METATILE_SaffronCityGym_WarpUnlocked, FALSE
	special DrawWholeMapView
SaffronCity_Gym_Text_NikoViviIntro:
	.string "Our minds move as one!$"

SaffronCity_Gym_Text_NikoViviDefeat:
	.string "Our focus broke…$"

SaffronCity_Gym_Text_NikoViviNeedTwoMons:
	.string "You need at least two POKéMON to face us!$"

SaffronCity_Gym_Text_NikoViviPostBattle:
	.string "The warp ahead has opened.$"

SaffronCity_Gym_Text_AnselIntro:
	.string "Can you read the path through this gym?$"

SaffronCity_Gym_Text_AnselDefeat:
	.string "You saw through me.$"

SaffronCity_Gym_Text_AnselPostBattle:
	.string "A clear mind finds the right door.$"

SaffronCity_Gym_Text_IreneOwenIntro:
	.string "We'll test your teamwork!$"

SaffronCity_Gym_Text_IreneOwenDefeat:
	.string "Your teamwork was sharper.$"

SaffronCity_Gym_Text_IreneOwenNeedTwoMons:
	.string "You need at least two POKéMON to face us!$"

SaffronCity_Gym_Text_IreneOwenPostBattle:
	.string "The next room is open to you.$"

SaffronCity_Gym_Text_VeraIntro:
	.string "Psychic power rewards patience.$"

SaffronCity_Gym_Text_VeraDefeat:
	.string "I lost my composure.$"

SaffronCity_Gym_Text_VeraPostBattle:
	.string "Stay calm and the path will appear.$"

SaffronCity_Gym_Text_QuentinIntro:
	.string "Let me show you a disciplined mind!$"

SaffronCity_Gym_Text_QuentinDefeat:
	.string "Your will was stronger.$"

SaffronCity_Gym_Text_QuentinPostBattle:
	.string "SABRINA awaits those with resolve.$"

SaffronCity_Gym_Text_NiaSaulIntro:
	.string "Two minds can corner anyone!$"

SaffronCity_Gym_Text_NiaSaulDefeat:
	.string "We couldn't contain you.$"

SaffronCity_Gym_Text_NiaSaulNeedTwoMons:
	.string "You need at least two POKéMON to face us!$"

SaffronCity_Gym_Text_NiaSaulPostBattle:
	.string "Your path through the gym has widened.$"

SaffronCity_Gym_Text_FelixCorIntro:
	.string "This is the final test!$"

SaffronCity_Gym_Text_FelixCorDefeat:
	.string "The door to SABRINA is yours.$"

SaffronCity_Gym_Text_FelixCorNeedTwoMons:
	.string "You need at least two POKéMON to face us!$"

SaffronCity_Gym_Text_FelixCorPostBattle:
	.string "Go on. The leader's room is open.$"

SaffronCity_Gym_Text_SabrinaIntro:
	.string "I am SABRINA, the psychic-type gym leader.\p"
	.string "Show me the strength of your spirit.$"

SaffronCity_Gym_Text_SabrinaDefeat:
	.string "Your power exceeds my visions.$"

SaffronCity_Gym_Text_ReceivedMarshBadge:
	.string "You received the Marsh Badge!$"

SaffronCity_Gym_Text_MarshBadgeInfo:
	.string "The Marsh Badge proves your mastery of this gym.$"

SaffronCity_Gym_Text_SabrinaPostBattle:
	.string "Use your strength with a calm heart.$"
