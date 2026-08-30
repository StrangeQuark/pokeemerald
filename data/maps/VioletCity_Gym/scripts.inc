VioletCity_Gym_MapScripts::
	.byte 0

VioletCity_Gym_EventScript_Bugsy::
	trainerbattle_single TRAINER_GYM_VIOLET_BUGSY, VioletCity_Gym_Text_VioletBugsyIntro, VioletCity_Gym_Text_VioletBugsyDefeat, VioletCity_Gym_EventScript_BugsyDefeated, NO_MUSIC
	msgbox VioletCity_Gym_Text_VioletBugsyPost, MSGBOX_DEFAULT
	release
	end

VioletCity_Gym_EventScript_BugsyDefeated::
	message VioletCity_Gym_Text_VioletBugsyBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_JOHTO_BADGE01_GET
	setvar VAR_0x8008, 15
	call Common_EventScript_SetGymTrainers
	msgbox VioletCity_Gym_Text_VioletBugsyBadgeInfo, MSGBOX_DEFAULT
	release
	end

VioletCity_Gym_EventScript_Ned::
	trainerbattle_single TRAINER_GYM_VIOLET_NED, VioletCity_Gym_Text_VioletNedIntro, VioletCity_Gym_Text_VioletNedDefeat
	msgbox VioletCity_Gym_Text_VioletNedPost, MSGBOX_AUTOCLOSE
	end

VioletCity_Gym_EventScript_Pip::
	trainerbattle_single TRAINER_GYM_VIOLET_PIP, VioletCity_Gym_Text_VioletPipIntro, VioletCity_Gym_Text_VioletPipDefeat
	msgbox VioletCity_Gym_Text_VioletPipPost, MSGBOX_AUTOCLOSE
	end

VioletCity_Gym_EventScript_Bria::
	trainerbattle_single TRAINER_GYM_VIOLET_BRIA, VioletCity_Gym_Text_VioletBriaIntro, VioletCity_Gym_Text_VioletBriaDefeat
	msgbox VioletCity_Gym_Text_VioletBriaPost, MSGBOX_AUTOCLOSE
	end

VioletCity_Gym_EventScript_Moss::
	trainerbattle_single TRAINER_GYM_VIOLET_MOSS, VioletCity_Gym_Text_VioletMossIntro, VioletCity_Gym_Text_VioletMossDefeat
	msgbox VioletCity_Gym_Text_VioletMossPost, MSGBOX_AUTOCLOSE
	end

VioletCity_Gym_Text_VioletBugsyIntro:
	.string "I am BUGSY, leader of this bug-type gym!\p"
	.string "Show me your strength!$"

VioletCity_Gym_Text_VioletBugsyDefeat:
	.string "You have earned my respect.$"

VioletCity_Gym_Text_VioletBugsyBadge:
	.string "You received the Hive Badge!$"

VioletCity_Gym_Text_VioletBugsyBadgeInfo:
	.string "The Hive Badge proves your victory here.$"

VioletCity_Gym_Text_VioletBugsyPost:
	.string "Carry the Hive Badge with pride.$"

VioletCity_Gym_Text_VioletNedIntro:
	.string "My bug-type Pokémon are ready!$"

VioletCity_Gym_Text_VioletNedDefeat:
	.string "You fought well.$"

VioletCity_Gym_Text_VioletNedPost:
	.string "Keep training and come back stronger.$"

VioletCity_Gym_Text_VioletPipIntro:
	.string "My bug-type Pokémon are ready!$"

VioletCity_Gym_Text_VioletPipDefeat:
	.string "You fought well.$"

VioletCity_Gym_Text_VioletPipPost:
	.string "Keep training and come back stronger.$"

VioletCity_Gym_Text_VioletBriaIntro:
	.string "My bug-type Pokémon are ready!$"

VioletCity_Gym_Text_VioletBriaDefeat:
	.string "You fought well.$"

VioletCity_Gym_Text_VioletBriaPost:
	.string "Keep training and come back stronger.$"

VioletCity_Gym_Text_VioletMossIntro:
	.string "My bug-type Pokémon are ready!$"

VioletCity_Gym_Text_VioletMossDefeat:
	.string "You fought well.$"

VioletCity_Gym_Text_VioletMossPost:
	.string "Keep training and come back stronger.$"
