CianwoodCity_Gym_MapScripts::
	.byte 0

CianwoodCity_Gym_EventScript_Chuck::
	trainerbattle_single TRAINER_GYM_CIANWOOD_CHUCK, CianwoodCity_Gym_Text_CianwoodChuckIntro, CianwoodCity_Gym_Text_CianwoodChuckDefeat, CianwoodCity_Gym_EventScript_ChuckDefeated, NO_MUSIC
	msgbox CianwoodCity_Gym_Text_CianwoodChuckPost, MSGBOX_DEFAULT
	release
	end

CianwoodCity_Gym_EventScript_ChuckDefeated::
	message CianwoodCity_Gym_Text_CianwoodChuckBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_JOHTO_BADGE04_GET
	setvar VAR_0x8008, 18
	call Common_EventScript_SetGymTrainers
	msgbox CianwoodCity_Gym_Text_CianwoodChuckBadgeInfo, MSGBOX_DEFAULT
	release
	end

CianwoodCity_Gym_EventScript_Baird::
	trainerbattle_single TRAINER_GYM_CIANWOOD_BAIRD, CianwoodCity_Gym_Text_CianwoodBairdIntro, CianwoodCity_Gym_Text_CianwoodBairdDefeat
	msgbox CianwoodCity_Gym_Text_CianwoodBairdPost, MSGBOX_AUTOCLOSE
	end

CianwoodCity_Gym_EventScript_Knox::
	trainerbattle_single TRAINER_GYM_CIANWOOD_KNOX, CianwoodCity_Gym_Text_CianwoodKnoxIntro, CianwoodCity_Gym_Text_CianwoodKnoxDefeat
	msgbox CianwoodCity_Gym_Text_CianwoodKnoxPost, MSGBOX_AUTOCLOSE
	end

CianwoodCity_Gym_EventScript_Kento::
	trainerbattle_single TRAINER_GYM_CIANWOOD_KENTO, CianwoodCity_Gym_Text_CianwoodKentoIntro, CianwoodCity_Gym_Text_CianwoodKentoDefeat
	msgbox CianwoodCity_Gym_Text_CianwoodKentoPost, MSGBOX_AUTOCLOSE
	end

CianwoodCity_Gym_EventScript_Maris::
	trainerbattle_single TRAINER_GYM_CIANWOOD_MARIS, CianwoodCity_Gym_Text_CianwoodMarisIntro, CianwoodCity_Gym_Text_CianwoodMarisDefeat
	msgbox CianwoodCity_Gym_Text_CianwoodMarisPost, MSGBOX_AUTOCLOSE
	end

CianwoodCity_Gym_EventScript_Dax::
	trainerbattle_single TRAINER_GYM_CIANWOOD_DAX, CianwoodCity_Gym_Text_CianwoodDaxIntro, CianwoodCity_Gym_Text_CianwoodDaxDefeat
	msgbox CianwoodCity_Gym_Text_CianwoodDaxPost, MSGBOX_AUTOCLOSE
	end

CianwoodCity_Gym_Text_CianwoodChuckIntro:
	.string "I am CHUCK, leader of this fighting-type gym!\p"
	.string "Show me your strength!$"

CianwoodCity_Gym_Text_CianwoodChuckDefeat:
	.string "You have earned my respect.$"

CianwoodCity_Gym_Text_CianwoodChuckBadge:
	.string "You received the Storm Badge!$"

CianwoodCity_Gym_Text_CianwoodChuckBadgeInfo:
	.string "The Storm Badge proves your victory here.$"

CianwoodCity_Gym_Text_CianwoodChuckPost:
	.string "Carry the Storm Badge with pride.$"

CianwoodCity_Gym_Text_CianwoodBairdIntro:
	.string "My fighting-type Pokémon are ready!$"

CianwoodCity_Gym_Text_CianwoodBairdDefeat:
	.string "You fought well.$"

CianwoodCity_Gym_Text_CianwoodBairdPost:
	.string "Keep training and come back stronger.$"

CianwoodCity_Gym_Text_CianwoodKnoxIntro:
	.string "My fighting-type Pokémon are ready!$"

CianwoodCity_Gym_Text_CianwoodKnoxDefeat:
	.string "You fought well.$"

CianwoodCity_Gym_Text_CianwoodKnoxPost:
	.string "Keep training and come back stronger.$"

CianwoodCity_Gym_Text_CianwoodKentoIntro:
	.string "My fighting-type Pokémon are ready!$"

CianwoodCity_Gym_Text_CianwoodKentoDefeat:
	.string "You fought well.$"

CianwoodCity_Gym_Text_CianwoodKentoPost:
	.string "Keep training and come back stronger.$"

CianwoodCity_Gym_Text_CianwoodMarisIntro:
	.string "My fighting-type Pokémon are ready!$"

CianwoodCity_Gym_Text_CianwoodMarisDefeat:
	.string "You fought well.$"

CianwoodCity_Gym_Text_CianwoodMarisPost:
	.string "Keep training and come back stronger.$"

CianwoodCity_Gym_Text_CianwoodDaxIntro:
	.string "My fighting-type Pokémon are ready!$"

CianwoodCity_Gym_Text_CianwoodDaxDefeat:
	.string "You fought well.$"

CianwoodCity_Gym_Text_CianwoodDaxPost:
	.string "Keep training and come back stronger.$"
