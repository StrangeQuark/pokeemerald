PewterCity_Gym_MapScripts::
	.byte 0

PewterCity_Gym_EventScript_Brock::
	trainerbattle_single TRAINER_GYM_PEWTER_BROCK, PewterCity_Gym_Text_PewterBrockIntro, PewterCity_Gym_Text_PewterBrockDefeat, PewterCity_Gym_EventScript_BrockDefeated, NO_MUSIC
	msgbox PewterCity_Gym_Text_PewterBrockPost, MSGBOX_DEFAULT
	release
	end

PewterCity_Gym_EventScript_BrockDefeated::
	message PewterCity_Gym_Text_PewterBrockBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_KANTO_BADGE01_GET
	setvar VAR_0x8008, 9
	call Common_EventScript_SetGymTrainers
	msgbox PewterCity_Gym_Text_PewterBrockBadgeInfo, MSGBOX_DEFAULT
	release
	end

PewterCity_Gym_EventScript_Russell::
	trainerbattle_single TRAINER_GYM_PEWTER_RUSSELL, PewterCity_Gym_Text_PewterRussellIntro, PewterCity_Gym_Text_PewterRussellDefeat
	msgbox PewterCity_Gym_Text_PewterRussellPost, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_EventScript_Mason::
	trainerbattle_single TRAINER_GYM_PEWTER_MASON, PewterCity_Gym_Text_PewterMasonIntro, PewterCity_Gym_Text_PewterMasonDefeat
	msgbox PewterCity_Gym_Text_PewterMasonPost, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_EventScript_Eli::
	trainerbattle_single TRAINER_GYM_PEWTER_ELI, PewterCity_Gym_Text_PewterEliIntro, PewterCity_Gym_Text_PewterEliDefeat
	msgbox PewterCity_Gym_Text_PewterEliPost, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_Text_PewterBrockIntro:
	.string "I am BROCK, leader of this rock-type gym!\p"
	.string "Show me your strength!$"

PewterCity_Gym_Text_PewterBrockDefeat:
	.string "You have earned my respect.$"

PewterCity_Gym_Text_PewterBrockBadge:
	.string "You received the Boulder Badge!$"

PewterCity_Gym_Text_PewterBrockBadgeInfo:
	.string "The Boulder Badge proves your victory here.$"

PewterCity_Gym_Text_PewterBrockPost:
	.string "Carry the Boulder Badge with pride.$"

PewterCity_Gym_Text_PewterRussellIntro:
	.string "My rock-type Pokémon are ready!$"

PewterCity_Gym_Text_PewterRussellDefeat:
	.string "You fought well.$"

PewterCity_Gym_Text_PewterRussellPost:
	.string "Keep training and come back stronger.$"

PewterCity_Gym_Text_PewterMasonIntro:
	.string "My rock-type Pokémon are ready!$"

PewterCity_Gym_Text_PewterMasonDefeat:
	.string "You fought well.$"

PewterCity_Gym_Text_PewterMasonPost:
	.string "Keep training and come back stronger.$"

PewterCity_Gym_Text_PewterEliIntro:
	.string "My rock-type Pokémon are ready!$"

PewterCity_Gym_Text_PewterEliDefeat:
	.string "You fought well.$"

PewterCity_Gym_Text_PewterEliPost:
	.string "Keep training and come back stronger.$"
