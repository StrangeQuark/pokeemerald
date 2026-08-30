CeladonCity_Gym_MapScripts::
	.byte 0

CeladonCity_Gym_EventScript_Erika::
	trainerbattle_single TRAINER_GYM_CELADON_ERIKA, CeladonCity_Gym_Text_CeladonErikaIntro, CeladonCity_Gym_Text_CeladonErikaDefeat, CeladonCity_Gym_EventScript_ErikaDefeated, NO_MUSIC
	msgbox CeladonCity_Gym_Text_CeladonErikaPost, MSGBOX_DEFAULT
	release
	end

CeladonCity_Gym_EventScript_ErikaDefeated::
	message CeladonCity_Gym_Text_CeladonErikaBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_KANTO_BADGE02_GET
	setvar VAR_0x8008, 11
	call Common_EventScript_SetGymTrainers
	msgbox CeladonCity_Gym_Text_CeladonErikaBadgeInfo, MSGBOX_DEFAULT
	release
	end

CeladonCity_Gym_EventScript_Lila::
	trainerbattle_single TRAINER_GYM_CELADON_LILA, CeladonCity_Gym_Text_CeladonLilaIntro, CeladonCity_Gym_Text_CeladonLilaDefeat
	msgbox CeladonCity_Gym_Text_CeladonLilaPost, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Daphne::
	trainerbattle_single TRAINER_GYM_CELADON_DAPHNE, CeladonCity_Gym_Text_CeladonDaphneIntro, CeladonCity_Gym_Text_CeladonDaphneDefeat
	msgbox CeladonCity_Gym_Text_CeladonDaphnePost, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Mira::
	trainerbattle_single TRAINER_GYM_CELADON_MIRA, CeladonCity_Gym_Text_CeladonMiraIntro, CeladonCity_Gym_Text_CeladonMiraDefeat
	msgbox CeladonCity_Gym_Text_CeladonMiraPost, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Sage::
	trainerbattle_single TRAINER_GYM_CELADON_SAGE, CeladonCity_Gym_Text_CeladonSageIntro, CeladonCity_Gym_Text_CeladonSageDefeat
	msgbox CeladonCity_Gym_Text_CeladonSagePost, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Ivy::
	trainerbattle_single TRAINER_GYM_CELADON_IVY, CeladonCity_Gym_Text_CeladonIvyIntro, CeladonCity_Gym_Text_CeladonIvyDefeat
	msgbox CeladonCity_Gym_Text_CeladonIvyPost, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Helena::
	trainerbattle_single TRAINER_GYM_CELADON_HELENA, CeladonCity_Gym_Text_CeladonHelenaIntro, CeladonCity_Gym_Text_CeladonHelenaDefeat
	msgbox CeladonCity_Gym_Text_CeladonHelenaPost, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Willow::
	trainerbattle_single TRAINER_GYM_CELADON_WILLOW, CeladonCity_Gym_Text_CeladonWillowIntro, CeladonCity_Gym_Text_CeladonWillowDefeat
	msgbox CeladonCity_Gym_Text_CeladonWillowPost, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Tessa::
	trainerbattle_single TRAINER_GYM_CELADON_TESSA, CeladonCity_Gym_Text_CeladonTessaIntro, CeladonCity_Gym_Text_CeladonTessaDefeat
	msgbox CeladonCity_Gym_Text_CeladonTessaPost, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_CeladonErikaIntro:
	.string "I am ERIKA, leader of this grass-type gym!\p"
	.string "Show me your strength!$"

CeladonCity_Gym_Text_CeladonErikaDefeat:
	.string "You have earned my respect.$"

CeladonCity_Gym_Text_CeladonErikaBadge:
	.string "You received the Rainbow Badge!$"

CeladonCity_Gym_Text_CeladonErikaBadgeInfo:
	.string "The Rainbow Badge proves your victory here.$"

CeladonCity_Gym_Text_CeladonErikaPost:
	.string "Carry the Rainbow Badge with pride.$"

CeladonCity_Gym_Text_CeladonLilaIntro:
	.string "My grass-type Pokémon are ready!$"

CeladonCity_Gym_Text_CeladonLilaDefeat:
	.string "You fought well.$"

CeladonCity_Gym_Text_CeladonLilaPost:
	.string "Keep training and come back stronger.$"

CeladonCity_Gym_Text_CeladonDaphneIntro:
	.string "My grass-type Pokémon are ready!$"

CeladonCity_Gym_Text_CeladonDaphneDefeat:
	.string "You fought well.$"

CeladonCity_Gym_Text_CeladonDaphnePost:
	.string "Keep training and come back stronger.$"

CeladonCity_Gym_Text_CeladonMiraIntro:
	.string "My grass-type Pokémon are ready!$"

CeladonCity_Gym_Text_CeladonMiraDefeat:
	.string "You fought well.$"

CeladonCity_Gym_Text_CeladonMiraPost:
	.string "Keep training and come back stronger.$"

CeladonCity_Gym_Text_CeladonSageIntro:
	.string "My grass-type Pokémon are ready!$"

CeladonCity_Gym_Text_CeladonSageDefeat:
	.string "You fought well.$"

CeladonCity_Gym_Text_CeladonSagePost:
	.string "Keep training and come back stronger.$"

CeladonCity_Gym_Text_CeladonIvyIntro:
	.string "My grass-type Pokémon are ready!$"

CeladonCity_Gym_Text_CeladonIvyDefeat:
	.string "You fought well.$"

CeladonCity_Gym_Text_CeladonIvyPost:
	.string "Keep training and come back stronger.$"

CeladonCity_Gym_Text_CeladonHelenaIntro:
	.string "My grass-type Pokémon are ready!$"

CeladonCity_Gym_Text_CeladonHelenaDefeat:
	.string "You fought well.$"

CeladonCity_Gym_Text_CeladonHelenaPost:
	.string "Keep training and come back stronger.$"

CeladonCity_Gym_Text_CeladonWillowIntro:
	.string "My grass-type Pokémon are ready!$"

CeladonCity_Gym_Text_CeladonWillowDefeat:
	.string "You fought well.$"

CeladonCity_Gym_Text_CeladonWillowPost:
	.string "Keep training and come back stronger.$"

CeladonCity_Gym_Text_CeladonTessaIntro:
	.string "My grass-type Pokémon are ready!$"

CeladonCity_Gym_Text_CeladonTessaDefeat:
	.string "You fought well.$"

CeladonCity_Gym_Text_CeladonTessaPost:
	.string "Keep training and come back stronger.$"
