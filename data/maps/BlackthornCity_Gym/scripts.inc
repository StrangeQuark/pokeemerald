BlackthornCity_Gym_MapScripts::
	.byte 0

BlackthornCity_Gym_EventScript_Clair::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_CLAIR, BlackthornCity_Gym_Text_BlackthornClairIntro, BlackthornCity_Gym_Text_BlackthornClairDefeat, BlackthornCity_Gym_EventScript_ClairDefeated, NO_MUSIC
	msgbox BlackthornCity_Gym_Text_BlackthornClairPost, MSGBOX_DEFAULT
	release
	end

BlackthornCity_Gym_EventScript_ClairDefeated::
	message BlackthornCity_Gym_Text_BlackthornClairBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_JOHTO_BADGE06_GET
	setvar VAR_0x8008, 20
	call Common_EventScript_SetGymTrainers
	msgbox BlackthornCity_Gym_Text_BlackthornClairBadgeInfo, MSGBOX_DEFAULT
	release
	end

BlackthornCity_Gym_EventScript_Goro::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_GORO, BlackthornCity_Gym_Text_BlackthornGoroIntro, BlackthornCity_Gym_Text_BlackthornGoroDefeat
	msgbox BlackthornCity_Gym_Text_BlackthornGoroPost, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_Eldon::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_ELDON, BlackthornCity_Gym_Text_BlackthornEldonIntro, BlackthornCity_Gym_Text_BlackthornEldonDefeat
	msgbox BlackthornCity_Gym_Text_BlackthornEldonPost, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_Alina::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_ALINA, BlackthornCity_Gym_Text_BlackthornAlinaIntro, BlackthornCity_Gym_Text_BlackthornAlinaDefeat
	msgbox BlackthornCity_Gym_Text_BlackthornAlinaPost, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_Petra::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_PETRA, BlackthornCity_Gym_Text_BlackthornPetraIntro, BlackthornCity_Gym_Text_BlackthornPetraDefeat
	msgbox BlackthornCity_Gym_Text_BlackthornPetraPost, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_Magnus::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_MAGNUS, BlackthornCity_Gym_Text_BlackthornMagnusIntro, BlackthornCity_Gym_Text_BlackthornMagnusDefeat
	msgbox BlackthornCity_Gym_Text_BlackthornMagnusPost, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_Celeste::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_CELESTE, BlackthornCity_Gym_Text_BlackthornCelesteIntro, BlackthornCity_Gym_Text_BlackthornCelesteDefeat
	msgbox BlackthornCity_Gym_Text_BlackthornCelestePost, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_Rhea::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_RHEA, BlackthornCity_Gym_Text_BlackthornRheaIntro, BlackthornCity_Gym_Text_BlackthornRheaDefeat
	msgbox BlackthornCity_Gym_Text_BlackthornRheaPost, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_Torin::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_TORIN, BlackthornCity_Gym_Text_BlackthornTorinIntro, BlackthornCity_Gym_Text_BlackthornTorinDefeat
	msgbox BlackthornCity_Gym_Text_BlackthornTorinPost, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_Della::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_DELLA, BlackthornCity_Gym_Text_BlackthornDellaIntro, BlackthornCity_Gym_Text_BlackthornDellaDefeat
	msgbox BlackthornCity_Gym_Text_BlackthornDellaPost, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_Vance::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_VANCE, BlackthornCity_Gym_Text_BlackthornVanceIntro, BlackthornCity_Gym_Text_BlackthornVanceDefeat
	msgbox BlackthornCity_Gym_Text_BlackthornVancePost, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_Idris::
	trainerbattle_single TRAINER_GYM_BLACKTHORN_IDRIS, BlackthornCity_Gym_Text_BlackthornIdrisIntro, BlackthornCity_Gym_Text_BlackthornIdrisDefeat
	msgbox BlackthornCity_Gym_Text_BlackthornIdrisPost, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_Switch1::
	lock
	setmetatile 12, 10, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 13, 10, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 14, 10, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 12, 11, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 13, 11, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 14, 11, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 3, 22, METATILE_VioletCityGym_StatueEyesGlowing_1, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	release
	end

BlackthornCity_Gym_EventScript_Switch2::
	lock
	setmetatile 12, 8, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 13, 8, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 14, 8, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 12, 9, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 13, 9, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 14, 9, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 23, 15, METATILE_VioletCityGym_StatueEyesGlowing_1, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	release
	end

BlackthornCity_Gym_EventScript_Switch3::
	lock
	setmetatile 12, 6, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 13, 6, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 14, 6, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 12, 7, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 13, 7, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 14, 7, METATILE_VioletCityGym_RegularFloor, FALSE
	setmetatile 24, 6, METATILE_VioletCityGym_StatueEyesGlowing_2, FALSE
	playse SE_EFFECTIVE
	special DrawWholeMapView
	release
	end
BlackthornCity_Gym_Text_BlackthornClairIntro:
	.string "I am CLAIR, leader of this dragon-type gym!\p"
	.string "Show me your strength!$"

BlackthornCity_Gym_Text_BlackthornClairDefeat:
	.string "You have earned my respect.$"

BlackthornCity_Gym_Text_BlackthornClairBadge:
	.string "You received the Rising Badge!$"

BlackthornCity_Gym_Text_BlackthornClairBadgeInfo:
	.string "The Rising Badge proves your victory here.$"

BlackthornCity_Gym_Text_BlackthornClairPost:
	.string "Carry the Rising Badge with pride.$"

BlackthornCity_Gym_Text_BlackthornGoroIntro:
	.string "My dragon-type Pokémon are ready!$"

BlackthornCity_Gym_Text_BlackthornGoroDefeat:
	.string "You fought well.$"

BlackthornCity_Gym_Text_BlackthornGoroPost:
	.string "Keep training and come back stronger.$"

BlackthornCity_Gym_Text_BlackthornEldonIntro:
	.string "My dragon-type Pokémon are ready!$"

BlackthornCity_Gym_Text_BlackthornEldonDefeat:
	.string "You fought well.$"

BlackthornCity_Gym_Text_BlackthornEldonPost:
	.string "Keep training and come back stronger.$"

BlackthornCity_Gym_Text_BlackthornAlinaIntro:
	.string "My dragon-type Pokémon are ready!$"

BlackthornCity_Gym_Text_BlackthornAlinaDefeat:
	.string "You fought well.$"

BlackthornCity_Gym_Text_BlackthornAlinaPost:
	.string "Keep training and come back stronger.$"

BlackthornCity_Gym_Text_BlackthornPetraIntro:
	.string "My dragon-type Pokémon are ready!$"

BlackthornCity_Gym_Text_BlackthornPetraDefeat:
	.string "You fought well.$"

BlackthornCity_Gym_Text_BlackthornPetraPost:
	.string "Keep training and come back stronger.$"

BlackthornCity_Gym_Text_BlackthornMagnusIntro:
	.string "My dragon-type Pokémon are ready!$"

BlackthornCity_Gym_Text_BlackthornMagnusDefeat:
	.string "You fought well.$"

BlackthornCity_Gym_Text_BlackthornMagnusPost:
	.string "Keep training and come back stronger.$"

BlackthornCity_Gym_Text_BlackthornCelesteIntro:
	.string "My dragon-type Pokémon are ready!$"

BlackthornCity_Gym_Text_BlackthornCelesteDefeat:
	.string "You fought well.$"

BlackthornCity_Gym_Text_BlackthornCelestePost:
	.string "Keep training and come back stronger.$"

BlackthornCity_Gym_Text_BlackthornRheaIntro:
	.string "My dragon-type Pokémon are ready!$"

BlackthornCity_Gym_Text_BlackthornRheaDefeat:
	.string "You fought well.$"

BlackthornCity_Gym_Text_BlackthornRheaPost:
	.string "Keep training and come back stronger.$"

BlackthornCity_Gym_Text_BlackthornTorinIntro:
	.string "My dragon-type Pokémon are ready!$"

BlackthornCity_Gym_Text_BlackthornTorinDefeat:
	.string "You fought well.$"

BlackthornCity_Gym_Text_BlackthornTorinPost:
	.string "Keep training and come back stronger.$"

BlackthornCity_Gym_Text_BlackthornDellaIntro:
	.string "My dragon-type Pokémon are ready!$"

BlackthornCity_Gym_Text_BlackthornDellaDefeat:
	.string "You fought well.$"

BlackthornCity_Gym_Text_BlackthornDellaPost:
	.string "Keep training and come back stronger.$"

BlackthornCity_Gym_Text_BlackthornVanceIntro:
	.string "My dragon-type Pokémon are ready!$"

BlackthornCity_Gym_Text_BlackthornVanceDefeat:
	.string "You fought well.$"

BlackthornCity_Gym_Text_BlackthornVancePost:
	.string "Keep training and come back stronger.$"

BlackthornCity_Gym_Text_BlackthornIdrisIntro:
	.string "My dragon-type Pokémon are ready!$"

BlackthornCity_Gym_Text_BlackthornIdrisDefeat:
	.string "You fought well.$"

BlackthornCity_Gym_Text_BlackthornIdrisPost:
	.string "Keep training and come back stronger.$"
