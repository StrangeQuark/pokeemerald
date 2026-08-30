VermilionCity_Gym_MapScripts::
	.byte 0

VermilionCity_Gym_EventScript_Surge::
	trainerbattle_single TRAINER_GYM_VERMILION_SURGE, VermilionCity_Gym_Text_VermilionSurgeIntro, VermilionCity_Gym_Text_VermilionSurgeDefeat, VermilionCity_Gym_EventScript_SurgeDefeated, NO_MUSIC
	msgbox VermilionCity_Gym_Text_VermilionSurgePost, MSGBOX_DEFAULT
	release
	end

VermilionCity_Gym_EventScript_SurgeDefeated::
	message VermilionCity_Gym_Text_VermilionSurgeBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_KANTO_BADGE03_GET
	setvar VAR_0x8008, 10
	call Common_EventScript_SetGymTrainers
	msgbox VermilionCity_Gym_Text_VermilionSurgeBadgeInfo, MSGBOX_DEFAULT
	release
	end

VermilionCity_Gym_EventScript_Amos::
	trainerbattle_single TRAINER_GYM_VERMILION_AMOS, VermilionCity_Gym_Text_VermilionAmosIntro, VermilionCity_Gym_Text_VermilionAmosDefeat
	msgbox VermilionCity_Gym_Text_VermilionAmosPost, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_EventScript_Cyrus::
	trainerbattle_single TRAINER_GYM_VERMILION_CYRUS, VermilionCity_Gym_Text_VermilionCyrusIntro, VermilionCity_Gym_Text_VermilionCyrusDefeat
	msgbox VermilionCity_Gym_Text_VermilionCyrusPost, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_EventScript_Gideon::
	trainerbattle_single TRAINER_GYM_VERMILION_GIDEON, VermilionCity_Gym_Text_VermilionGideonIntro, VermilionCity_Gym_Text_VermilionGideonDefeat
	msgbox VermilionCity_Gym_Text_VermilionGideonPost, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_EventScript_Orson::
	trainerbattle_single TRAINER_GYM_VERMILION_ORSON, VermilionCity_Gym_Text_VermilionOrsonIntro, VermilionCity_Gym_Text_VermilionOrsonDefeat
	msgbox VermilionCity_Gym_Text_VermilionOrsonPost, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_EventScript_Reid::
	trainerbattle_single TRAINER_GYM_VERMILION_REID, VermilionCity_Gym_Text_VermilionReidIntro, VermilionCity_Gym_Text_VermilionReidDefeat
	msgbox VermilionCity_Gym_Text_VermilionReidPost, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_Text_VermilionSurgeIntro:
	.string "I am LT. SURGE, leader of this electric-type gym!\p"
	.string "Show me your strength!$"

VermilionCity_Gym_Text_VermilionSurgeDefeat:
	.string "You have earned my respect.$"

VermilionCity_Gym_Text_VermilionSurgeBadge:
	.string "You received the Thunder Badge!$"

VermilionCity_Gym_Text_VermilionSurgeBadgeInfo:
	.string "The Thunder Badge proves your victory here.$"

VermilionCity_Gym_Text_VermilionSurgePost:
	.string "Carry the Thunder Badge with pride.$"

VermilionCity_Gym_Text_VermilionAmosIntro:
	.string "My electric-type Pokémon are ready!$"

VermilionCity_Gym_Text_VermilionAmosDefeat:
	.string "You fought well.$"

VermilionCity_Gym_Text_VermilionAmosPost:
	.string "Keep training and come back stronger.$"

VermilionCity_Gym_Text_VermilionCyrusIntro:
	.string "My electric-type Pokémon are ready!$"

VermilionCity_Gym_Text_VermilionCyrusDefeat:
	.string "You fought well.$"

VermilionCity_Gym_Text_VermilionCyrusPost:
	.string "Keep training and come back stronger.$"

VermilionCity_Gym_Text_VermilionGideonIntro:
	.string "My electric-type Pokémon are ready!$"

VermilionCity_Gym_Text_VermilionGideonDefeat:
	.string "You fought well.$"

VermilionCity_Gym_Text_VermilionGideonPost:
	.string "Keep training and come back stronger.$"

VermilionCity_Gym_Text_VermilionOrsonIntro:
	.string "My electric-type Pokémon are ready!$"

VermilionCity_Gym_Text_VermilionOrsonDefeat:
	.string "You fought well.$"

VermilionCity_Gym_Text_VermilionOrsonPost:
	.string "Keep training and come back stronger.$"

VermilionCity_Gym_Text_VermilionReidIntro:
	.string "My electric-type Pokémon are ready!$"

VermilionCity_Gym_Text_VermilionReidDefeat:
	.string "You fought well.$"

VermilionCity_Gym_Text_VermilionReidPost:
	.string "Keep training and come back stronger.$"
