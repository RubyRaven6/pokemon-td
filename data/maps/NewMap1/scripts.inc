NewMap1_MapScripts::
	.byte 0


EventScript_PickMovements::
# 6 "data//maps/NewMap1/scripts.pory"
	faceplayer
# 7 "data//maps/NewMap1/scripts.pory"
	msgbox EventScript_PickMovements_Text_0, MSGBOX_DEFAULT
# 8 "data//maps/NewMap1/scripts.pory"
	dynmultichoice 5, 2, TRUE, 2, 1, DYN_MULTICHOICE_CB_NONE, EventScript_PickMovements_Text_1, EventScript_PickMovements_Text_2, EventScript_PickMovements_Text_3, EventScript_PickMovements_Text_4
# 9 "data//maps/NewMap1/scripts.pory"
	switch VAR_RESULT
# 10 "data//maps/NewMap1/scripts.pory"
	case 0, EventScript_PickMovements_2
# 14 "data//maps/NewMap1/scripts.pory"
	case 1, EventScript_PickMovements_3
# 18 "data//maps/NewMap1/scripts.pory"
	case 2, EventScript_PickMovements_4
# 22 "data//maps/NewMap1/scripts.pory"
	case 3, EventScript_PickMovements_5
	return

EventScript_PickMovements_2:
# 11 "data//maps/NewMap1/scripts.pory"
	closemessage
# 12 "data//maps/NewMap1/scripts.pory"
	call MovementTest_1
	end

EventScript_PickMovements_3:
# 15 "data//maps/NewMap1/scripts.pory"
	closemessage
# 16 "data//maps/NewMap1/scripts.pory"
	call MovementTest_2
	end

EventScript_PickMovements_4:
# 19 "data//maps/NewMap1/scripts.pory"
	closemessage
# 20 "data//maps/NewMap1/scripts.pory"
	call MovementTest_3
	end

EventScript_PickMovements_5:
# 23 "data//maps/NewMap1/scripts.pory"
	closemessage
# 24 "data//maps/NewMap1/scripts.pory"
	call MovementTest_4
	end


MovementTest_1::
# 30 "data//maps/NewMap1/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
# 31 "data//maps/NewMap1/scripts.pory"
	addvar VAR_TEMP_0, 1
# 32 "data//maps/NewMap1/scripts.pory"
	addvar VAR_TEMP_1, 1
# 33 "data//maps/NewMap1/scripts.pory"
	moveobjecttopos 1, VAR_TEMP_0, VAR_TEMP_1, 0
	return


MovementTest_2::
# 38 "data//maps/NewMap1/scripts.pory"
	moveobjecttopos 1, 13, 10, 0
	return


MovementTest_3::
# 43 "data//maps/NewMap1/scripts.pory"
	moveobjecttopos 1, 16, 13, 0
	return


MovementTest_4::
# 48 "data//maps/NewMap1/scripts.pory"
	moveobjecttopos 1, 2, 7, 0
	return


ScriptTest::
# 53 "data//maps/NewMap1/scripts.pory"
	msgbox ScriptTest_Text_0
# 54 "data//maps/NewMap1/scripts.pory"
	waitmessage
# 55 "data//maps/NewMap1/scripts.pory"
	closemessage
	return


EventScript_PickMovements_Text_0:
# 7 "data//maps/NewMap1/scripts.pory"
	.string "Where would you like me to move?$"

EventScript_PickMovements_Text_1:
# 8 "data//maps/NewMap1/scripts.pory"
	.string "Test 1$"

EventScript_PickMovements_Text_2:
# 8 "data//maps/NewMap1/scripts.pory"
	.string "Test 2$"

EventScript_PickMovements_Text_3:
# 8 "data//maps/NewMap1/scripts.pory"
	.string "Test 3$"

EventScript_PickMovements_Text_4:
# 8 "data//maps/NewMap1/scripts.pory"
	.string "Test 4$"

ScriptTest_Text_0:
# 53 "data//maps/NewMap1/scripts.pory"
	.string "This message is printing.$"
