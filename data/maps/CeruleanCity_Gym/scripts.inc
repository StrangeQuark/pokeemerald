CeruleanCity_Gym_MapScripts::
	.byte 0

CeruleanCity_Gym_EventScript_Misty::
	trainerbattle_single TRAINER_GYM_CERULEAN_MISTY, CeruleanCity_Gym_Text_CeruleanMistyIntro, CeruleanCity_Gym_Text_CeruleanMistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
	msgbox CeruleanCity_Gym_Text_CeruleanMistyPost, MSGBOX_DEFAULT
	release
	end

CeruleanCity_Gym_EventScript_MistyDefeated::
	message CeruleanCity_Gym_Text_CeruleanMistyBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_KANTO_BADGE05_GET
	setvar VAR_0x8008, 13
	call Common_EventScript_SetGymTrainers
	msgbox CeruleanCity_Gym_Text_CeruleanMistyBadgeInfo, MSGBOX_DEFAULT
	release
	end

CeruleanCity_Gym_EventScript_Marina::
	trainerbattle_single TRAINER_GYM_CERULEAN_MARINA, CeruleanCity_Gym_Text_CeruleanMarinaIntro, CeruleanCity_Gym_Text_CeruleanMarinaDefeat
	msgbox CeruleanCity_Gym_Text_CeruleanMarinaPost, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_EventScript_Finn::
	trainerbattle_single TRAINER_GYM_CERULEAN_FINN, CeruleanCity_Gym_Text_CeruleanFinnIntro, CeruleanCity_Gym_Text_CeruleanFinnDefeat
	msgbox CeruleanCity_Gym_Text_CeruleanFinnPost, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_EventScript_Kellan::
	trainerbattle_single TRAINER_GYM_CERULEAN_KELLAN, CeruleanCity_Gym_Text_CeruleanKellanIntro, CeruleanCity_Gym_Text_CeruleanKellanDefeat
	msgbox CeruleanCity_Gym_Text_CeruleanKellanPost, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_EventScript_Boyd::
	trainerbattle_single TRAINER_GYM_CERULEAN_BOYD, CeruleanCity_Gym_Text_CeruleanBoydIntro, CeruleanCity_Gym_Text_CeruleanBoydDefeat
	msgbox CeruleanCity_Gym_Text_CeruleanBoydPost, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_EventScript_Luca::
	trainerbattle_single TRAINER_GYM_CERULEAN_LUCA, CeruleanCity_Gym_Text_CeruleanLucaIntro, CeruleanCity_Gym_Text_CeruleanLucaDefeat
	msgbox CeruleanCity_Gym_Text_CeruleanLucaPost, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_EventScript_Nixie::
	trainerbattle_single TRAINER_GYM_CERULEAN_NIXIE, CeruleanCity_Gym_Text_CeruleanNixieIntro, CeruleanCity_Gym_Text_CeruleanNixieDefeat
	msgbox CeruleanCity_Gym_Text_CeruleanNixiePost, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_Text_CeruleanMistyIntro:
	.string "I am MISTY, leader of this water-type gym!\p"
	.string "Show me your strength!$"

CeruleanCity_Gym_Text_CeruleanMistyDefeat:
	.string "You have earned my respect.$"

CeruleanCity_Gym_Text_CeruleanMistyBadge:
	.string "You received the Cascade Badge!$"

CeruleanCity_Gym_Text_CeruleanMistyBadgeInfo:
	.string "The Cascade Badge proves your victory here.$"

CeruleanCity_Gym_Text_CeruleanMistyPost:
	.string "Carry the Cascade Badge with pride.$"

CeruleanCity_Gym_Text_CeruleanMarinaIntro:
	.string "My water-type Pokémon are ready!$"

CeruleanCity_Gym_Text_CeruleanMarinaDefeat:
	.string "You fought well.$"

CeruleanCity_Gym_Text_CeruleanMarinaPost:
	.string "Keep training and come back stronger.$"

CeruleanCity_Gym_Text_CeruleanFinnIntro:
	.string "My water-type Pokémon are ready!$"

CeruleanCity_Gym_Text_CeruleanFinnDefeat:
	.string "You fought well.$"

CeruleanCity_Gym_Text_CeruleanFinnPost:
	.string "Keep training and come back stronger.$"

CeruleanCity_Gym_Text_CeruleanKellanIntro:
	.string "My water-type Pokémon are ready!$"

CeruleanCity_Gym_Text_CeruleanKellanDefeat:
	.string "You fought well.$"

CeruleanCity_Gym_Text_CeruleanKellanPost:
	.string "Keep training and come back stronger.$"

CeruleanCity_Gym_Text_CeruleanBoydIntro:
	.string "My water-type Pokémon are ready!$"

CeruleanCity_Gym_Text_CeruleanBoydDefeat:
	.string "You fought well.$"

CeruleanCity_Gym_Text_CeruleanBoydPost:
	.string "Keep training and come back stronger.$"

CeruleanCity_Gym_Text_CeruleanLucaIntro:
	.string "My water-type Pokémon are ready!$"

CeruleanCity_Gym_Text_CeruleanLucaDefeat:
	.string "You fought well.$"

CeruleanCity_Gym_Text_CeruleanLucaPost:
	.string "Keep training and come back stronger.$"

CeruleanCity_Gym_Text_CeruleanNixieIntro:
	.string "My water-type Pokémon are ready!$"

CeruleanCity_Gym_Text_CeruleanNixieDefeat:
	.string "You fought well.$"

CeruleanCity_Gym_Text_CeruleanNixiePost:
	.string "Keep training and come back stronger.$"
