NewMap1_MapScripts::
	.byte 0


EventScript_PickMovements::
# 6 "data//maps/NewMap1/scripts.pory"
	dynmultichoice 5, 2, TRUE, 2, 1, DYN_MULTICHOICE_CB_NONE, EventScript_PickMovements_Text_0, EventScript_PickMovements_Text_1, EventScript_PickMovements_Text_2, EventScript_PickMovements_Text_3
# 7 "data//maps/NewMap1/scripts.pory"
	switch VAR_RESULT
# 8 "data//maps/NewMap1/scripts.pory"
	case 0, EventScript_PickMovements_2
# 11 "data//maps/NewMap1/scripts.pory"
	case 1, EventScript_PickMovements_3
# 14 "data//maps/NewMap1/scripts.pory"
	case 2, EventScript_PickMovements_4
# 17 "data//maps/NewMap1/scripts.pory"
	case 3, EventScript_PickMovements_5
	return

EventScript_PickMovements_2:
# 9 "data//maps/NewMap1/scripts.pory"
	call MovementTest_3
	end

EventScript_PickMovements_3:
# 12 "data//maps/NewMap1/scripts.pory"
	call MovementTest_4
	end

EventScript_PickMovements_4:
	end

EventScript_PickMovements_5:
	end


MovementTest_1::
# 24 "data//maps/NewMap1/scripts.pory"
	getobjectxy 2, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
# 25 "data//maps/NewMap1/scripts.pory"
	moveobjecttopos 1, VAR_TEMP_0, VAR_TEMP_1, 0
	return


MovementTest_2::
# 30 "data//maps/NewMap1/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
# 31 "data//maps/NewMap1/scripts.pory"
	moveobjecttopos 1, VAR_TEMP_0, VAR_TEMP_1, 0
	return


MovementTest_3::
# 36 "data//maps/NewMap1/scripts.pory"
	moveobjecttopos 1, 14, 6, 0
	return


MovementTest_4::
# 41 "data//maps/NewMap1/scripts.pory"
	moveobjecttopos 1, 13, 12, 0
	return


EventScript_PickMovements_Text_0:
# 6 "data//maps/NewMap1/scripts.pory"
	.string "Test 1$"

EventScript_PickMovements_Text_1:
# 6 "data//maps/NewMap1/scripts.pory"
	.string "Test 2$"

EventScript_PickMovements_Text_2:
# 6 "data//maps/NewMap1/scripts.pory"
	.string "Test 3$"

EventScript_PickMovements_Text_3:
# 6 "data//maps/NewMap1/scripts.pory"
	.string "Test 4$"
