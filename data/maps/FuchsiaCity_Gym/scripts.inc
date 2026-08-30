FuchsiaCity_Gym_MapScripts::
	.byte 0

FuchsiaCity_Gym_EventScript_Koga::
	trainerbattle_single TRAINER_GYM_FUCHSIA_KOGA, FuchsiaCity_Gym_Text_FuchsiaKogaIntro, FuchsiaCity_Gym_Text_FuchsiaKogaDefeat, FuchsiaCity_Gym_EventScript_KogaDefeated, NO_MUSIC
	msgbox FuchsiaCity_Gym_Text_FuchsiaKogaPost, MSGBOX_DEFAULT
	release
	end

FuchsiaCity_Gym_EventScript_KogaDefeated::
	message FuchsiaCity_Gym_Text_FuchsiaKogaBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_KANTO_BADGE04_GET
	setvar VAR_0x8008, 12
	call Common_EventScript_SetGymTrainers
	msgbox FuchsiaCity_Gym_Text_FuchsiaKogaBadgeInfo, MSGBOX_DEFAULT
	release
	end

FuchsiaCity_Gym_EventScript_Veda::
	trainerbattle_single TRAINER_GYM_FUCHSIA_VEDA, FuchsiaCity_Gym_Text_FuchsiaVedaIntro, FuchsiaCity_Gym_Text_FuchsiaVedaDefeat
	msgbox FuchsiaCity_Gym_Text_FuchsiaVedaPost, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Kiri::
	trainerbattle_single TRAINER_GYM_FUCHSIA_KIRI, FuchsiaCity_Gym_Text_FuchsiaKiriIntro, FuchsiaCity_Gym_Text_FuchsiaKiriDefeat
	msgbox FuchsiaCity_Gym_Text_FuchsiaKiriPost, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Sorrel::
	trainerbattle_single TRAINER_GYM_FUCHSIA_SORREL, FuchsiaCity_Gym_Text_FuchsiaSorrelIntro, FuchsiaCity_Gym_Text_FuchsiaSorrelDefeat
	msgbox FuchsiaCity_Gym_Text_FuchsiaSorrelPost, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Dorian::
	trainerbattle_single TRAINER_GYM_FUCHSIA_DORIAN, FuchsiaCity_Gym_Text_FuchsiaDorianIntro, FuchsiaCity_Gym_Text_FuchsiaDorianDefeat
	msgbox FuchsiaCity_Gym_Text_FuchsiaDorianPost, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Pax::
	trainerbattle_single TRAINER_GYM_FUCHSIA_PAX, FuchsiaCity_Gym_Text_FuchsiaPaxIntro, FuchsiaCity_Gym_Text_FuchsiaPaxDefeat
	msgbox FuchsiaCity_Gym_Text_FuchsiaPaxPost, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Ryu::
	trainerbattle_single TRAINER_GYM_FUCHSIA_RYU, FuchsiaCity_Gym_Text_FuchsiaRyuIntro, FuchsiaCity_Gym_Text_FuchsiaRyuDefeat
	msgbox FuchsiaCity_Gym_Text_FuchsiaRyuPost, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Silas::
	trainerbattle_single TRAINER_GYM_FUCHSIA_SILAS, FuchsiaCity_Gym_Text_FuchsiaSilasIntro, FuchsiaCity_Gym_Text_FuchsiaSilasDefeat
	msgbox FuchsiaCity_Gym_Text_FuchsiaSilasPost, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_Text_FuchsiaKogaIntro:
	.string "I am KOGA, leader of this poison-type gym!\p"
	.string "Show me your strength!$"

FuchsiaCity_Gym_Text_FuchsiaKogaDefeat:
	.string "You have earned my respect.$"

FuchsiaCity_Gym_Text_FuchsiaKogaBadge:
	.string "You received the Soul Badge!$"

FuchsiaCity_Gym_Text_FuchsiaKogaBadgeInfo:
	.string "The Soul Badge proves your victory here.$"

FuchsiaCity_Gym_Text_FuchsiaKogaPost:
	.string "Carry the Soul Badge with pride.$"

FuchsiaCity_Gym_Text_FuchsiaVedaIntro:
	.string "My poison-type Pokémon are ready!$"

FuchsiaCity_Gym_Text_FuchsiaVedaDefeat:
	.string "You fought well.$"

FuchsiaCity_Gym_Text_FuchsiaVedaPost:
	.string "Keep training and come back stronger.$"

FuchsiaCity_Gym_Text_FuchsiaKiriIntro:
	.string "My poison-type Pokémon are ready!$"

FuchsiaCity_Gym_Text_FuchsiaKiriDefeat:
	.string "You fought well.$"

FuchsiaCity_Gym_Text_FuchsiaKiriPost:
	.string "Keep training and come back stronger.$"

FuchsiaCity_Gym_Text_FuchsiaSorrelIntro:
	.string "My poison-type Pokémon are ready!$"

FuchsiaCity_Gym_Text_FuchsiaSorrelDefeat:
	.string "You fought well.$"

FuchsiaCity_Gym_Text_FuchsiaSorrelPost:
	.string "Keep training and come back stronger.$"

FuchsiaCity_Gym_Text_FuchsiaDorianIntro:
	.string "My poison-type Pokémon are ready!$"

FuchsiaCity_Gym_Text_FuchsiaDorianDefeat:
	.string "You fought well.$"

FuchsiaCity_Gym_Text_FuchsiaDorianPost:
	.string "Keep training and come back stronger.$"

FuchsiaCity_Gym_Text_FuchsiaPaxIntro:
	.string "My poison-type Pokémon are ready!$"

FuchsiaCity_Gym_Text_FuchsiaPaxDefeat:
	.string "You fought well.$"

FuchsiaCity_Gym_Text_FuchsiaPaxPost:
	.string "Keep training and come back stronger.$"

FuchsiaCity_Gym_Text_FuchsiaRyuIntro:
	.string "My poison-type Pokémon are ready!$"

FuchsiaCity_Gym_Text_FuchsiaRyuDefeat:
	.string "You fought well.$"

FuchsiaCity_Gym_Text_FuchsiaRyuPost:
	.string "Keep training and come back stronger.$"

FuchsiaCity_Gym_Text_FuchsiaSilasIntro:
	.string "My poison-type Pokémon are ready!$"

FuchsiaCity_Gym_Text_FuchsiaSilasDefeat:
	.string "You fought well.$"

FuchsiaCity_Gym_Text_FuchsiaSilasPost:
	.string "Keep training and come back stronger.$"
