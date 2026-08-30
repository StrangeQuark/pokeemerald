GoldenrodCity_Gym_MapScripts::
	.byte 0

GoldenrodCity_Gym_EventScript_Falkner::
	trainerbattle_single TRAINER_GYM_GOLDENROD_FALKNER, GoldenrodCity_Gym_Text_GoldenrodFalknerIntro, GoldenrodCity_Gym_Text_GoldenrodFalknerDefeat, GoldenrodCity_Gym_EventScript_FalknerDefeated, NO_MUSIC
	msgbox GoldenrodCity_Gym_Text_GoldenrodFalknerPost, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_FalknerDefeated::
	message GoldenrodCity_Gym_Text_GoldenrodFalknerBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_JOHTO_BADGE05_GET
	setvar VAR_0x8008, 19
	call Common_EventScript_SetGymTrainers
	msgbox GoldenrodCity_Gym_Text_GoldenrodFalknerBadgeInfo, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_Tamsin::
	trainerbattle_single TRAINER_GYM_GOLDENROD_TAMSIN, GoldenrodCity_Gym_Text_GoldenrodTamsinIntro, GoldenrodCity_Gym_Text_GoldenrodTamsinDefeat
	msgbox GoldenrodCity_Gym_Text_GoldenrodTamsinPost, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Elara::
	trainerbattle_single TRAINER_GYM_GOLDENROD_ELARA, GoldenrodCity_Gym_Text_GoldenrodElaraIntro, GoldenrodCity_Gym_Text_GoldenrodElaraDefeat
	msgbox GoldenrodCity_Gym_Text_GoldenrodElaraPost, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Cato::
	trainerbattle_single TRAINER_GYM_GOLDENROD_CATO, GoldenrodCity_Gym_Text_GoldenrodCatoIntro, GoldenrodCity_Gym_Text_GoldenrodCatoDefeat
	msgbox GoldenrodCity_Gym_Text_GoldenrodCatoPost, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Ren::
	trainerbattle_single TRAINER_GYM_GOLDENROD_REN, GoldenrodCity_Gym_Text_GoldenrodRenIntro, GoldenrodCity_Gym_Text_GoldenrodRenDefeat
	msgbox GoldenrodCity_Gym_Text_GoldenrodRenPost, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Volker::
	trainerbattle_single TRAINER_GYM_GOLDENROD_VOLKER, GoldenrodCity_Gym_Text_GoldenrodVolkerIntro, GoldenrodCity_Gym_Text_GoldenrodVolkerDefeat
	msgbox GoldenrodCity_Gym_Text_GoldenrodVolkerPost, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Nola::
	trainerbattle_single TRAINER_GYM_GOLDENROD_NOLA, GoldenrodCity_Gym_Text_GoldenrodNolaIntro, GoldenrodCity_Gym_Text_GoldenrodNolaDefeat
	msgbox GoldenrodCity_Gym_Text_GoldenrodNolaPost, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Flynn::
	trainerbattle_single TRAINER_GYM_GOLDENROD_FLYNN, GoldenrodCity_Gym_Text_GoldenrodFlynnIntro, GoldenrodCity_Gym_Text_GoldenrodFlynnDefeat
	msgbox GoldenrodCity_Gym_Text_GoldenrodFlynnPost, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Mabel::
	trainerbattle_single TRAINER_GYM_GOLDENROD_MABEL, GoldenrodCity_Gym_Text_GoldenrodMabelIntro, GoldenrodCity_Gym_Text_GoldenrodMabelDefeat
	msgbox GoldenrodCity_Gym_Text_GoldenrodMabelPost, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Arvid::
	trainerbattle_single TRAINER_GYM_GOLDENROD_ARVID, GoldenrodCity_Gym_Text_GoldenrodArvidIntro, GoldenrodCity_Gym_Text_GoldenrodArvidDefeat
	msgbox GoldenrodCity_Gym_Text_GoldenrodArvidPost, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Selene::
	trainerbattle_single TRAINER_GYM_GOLDENROD_SELENE, GoldenrodCity_Gym_Text_GoldenrodSeleneIntro, GoldenrodCity_Gym_Text_GoldenrodSeleneDefeat
	msgbox GoldenrodCity_Gym_Text_GoldenrodSelenePost, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Ivo::
	trainerbattle_single TRAINER_GYM_GOLDENROD_IVO, GoldenrodCity_Gym_Text_GoldenrodIvoIntro, GoldenrodCity_Gym_Text_GoldenrodIvoDefeat
	msgbox GoldenrodCity_Gym_Text_GoldenrodIvoPost, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_Text_GoldenrodFalknerIntro:
	.string "I am FALKNER, leader of this dark-type gym!\p"
	.string "Show me your strength!$"

GoldenrodCity_Gym_Text_GoldenrodFalknerDefeat:
	.string "You have earned my respect.$"

GoldenrodCity_Gym_Text_GoldenrodFalknerBadge:
	.string "You received the Plain Badge!$"

GoldenrodCity_Gym_Text_GoldenrodFalknerBadgeInfo:
	.string "The Plain Badge proves your victory here.$"

GoldenrodCity_Gym_Text_GoldenrodFalknerPost:
	.string "Carry the Plain Badge with pride.$"

GoldenrodCity_Gym_Text_GoldenrodTamsinIntro:
	.string "My dark-type Pokémon are ready!$"

GoldenrodCity_Gym_Text_GoldenrodTamsinDefeat:
	.string "You fought well.$"

GoldenrodCity_Gym_Text_GoldenrodTamsinPost:
	.string "Keep training and come back stronger.$"

GoldenrodCity_Gym_Text_GoldenrodElaraIntro:
	.string "My dark-type Pokémon are ready!$"

GoldenrodCity_Gym_Text_GoldenrodElaraDefeat:
	.string "You fought well.$"

GoldenrodCity_Gym_Text_GoldenrodElaraPost:
	.string "Keep training and come back stronger.$"

GoldenrodCity_Gym_Text_GoldenrodCatoIntro:
	.string "My dark-type Pokémon are ready!$"

GoldenrodCity_Gym_Text_GoldenrodCatoDefeat:
	.string "You fought well.$"

GoldenrodCity_Gym_Text_GoldenrodCatoPost:
	.string "Keep training and come back stronger.$"

GoldenrodCity_Gym_Text_GoldenrodRenIntro:
	.string "My dark-type Pokémon are ready!$"

GoldenrodCity_Gym_Text_GoldenrodRenDefeat:
	.string "You fought well.$"

GoldenrodCity_Gym_Text_GoldenrodRenPost:
	.string "Keep training and come back stronger.$"

GoldenrodCity_Gym_Text_GoldenrodVolkerIntro:
	.string "My dark-type Pokémon are ready!$"

GoldenrodCity_Gym_Text_GoldenrodVolkerDefeat:
	.string "You fought well.$"

GoldenrodCity_Gym_Text_GoldenrodVolkerPost:
	.string "Keep training and come back stronger.$"

GoldenrodCity_Gym_Text_GoldenrodNolaIntro:
	.string "My dark-type Pokémon are ready!$"

GoldenrodCity_Gym_Text_GoldenrodNolaDefeat:
	.string "You fought well.$"

GoldenrodCity_Gym_Text_GoldenrodNolaPost:
	.string "Keep training and come back stronger.$"

GoldenrodCity_Gym_Text_GoldenrodFlynnIntro:
	.string "My dark-type Pokémon are ready!$"

GoldenrodCity_Gym_Text_GoldenrodFlynnDefeat:
	.string "You fought well.$"

GoldenrodCity_Gym_Text_GoldenrodFlynnPost:
	.string "Keep training and come back stronger.$"

GoldenrodCity_Gym_Text_GoldenrodMabelIntro:
	.string "My dark-type Pokémon are ready!$"

GoldenrodCity_Gym_Text_GoldenrodMabelDefeat:
	.string "You fought well.$"

GoldenrodCity_Gym_Text_GoldenrodMabelPost:
	.string "Keep training and come back stronger.$"

GoldenrodCity_Gym_Text_GoldenrodArvidIntro:
	.string "My dark-type Pokémon are ready!$"

GoldenrodCity_Gym_Text_GoldenrodArvidDefeat:
	.string "You fought well.$"

GoldenrodCity_Gym_Text_GoldenrodArvidPost:
	.string "Keep training and come back stronger.$"

GoldenrodCity_Gym_Text_GoldenrodSeleneIntro:
	.string "My dark-type Pokémon are ready!$"

GoldenrodCity_Gym_Text_GoldenrodSeleneDefeat:
	.string "You fought well.$"

GoldenrodCity_Gym_Text_GoldenrodSelenePost:
	.string "Keep training and come back stronger.$"

GoldenrodCity_Gym_Text_GoldenrodIvoIntro:
	.string "My dark-type Pokémon are ready!$"

GoldenrodCity_Gym_Text_GoldenrodIvoDefeat:
	.string "You fought well.$"

GoldenrodCity_Gym_Text_GoldenrodIvoPost:
	.string "Keep training and come back stronger.$"
