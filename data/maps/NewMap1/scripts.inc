NewMap1_MapScripts::
	.byte 0


EventScript_PickMovements::
	faceplayer
	msgbox EventScript_PickMovements_Text_0, MSGBOX_DEFAULT
	dynmultichoice 5, 2, TRUE, 2, 1, DYN_MULTICHOICE_CB_NONE, EventScript_PickMovements_Text_1, EventScript_PickMovements_Text_2, EventScript_PickMovements_Text_3, EventScript_PickMovements_Text_4
	switch VAR_RESULT
	case 0, EventScript_PickMovements_2
	case 1, EventScript_PickMovements_3
	case 2, EventScript_PickMovements_4
	case 3, EventScript_PickMovements_5
	return

EventScript_PickMovements_2:
	closemessage
	call MovementTest_1
	end

EventScript_PickMovements_3:
	closemessage
	call MovementTest_2
	end

EventScript_PickMovements_4:
	closemessage
	call MovementTest_3
	end

EventScript_PickMovements_5:
	closemessage
	call MovementTest_4
	end


MovementTest_1::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	addvar VAR_TEMP_0, 1
	addvar VAR_TEMP_1, 1
	moveobjecttopos 1, VAR_TEMP_0, VAR_TEMP_1, 0
	return


MovementTest_2::
	moveobjecttopos 1, 13, 10, 0
	return


MovementTest_3::
	moveobjecttopos 1, 16, 13, 0
	return


MovementTest_4::
	moveobjecttopos 1, 2, 7, 0
	return


ScriptTest::
	msgbox ScriptTest_Text_0
	waitmessage
	closemessage
	return


EventScript_PickMovements_Text_0:
	.string "Where would you like me to move?$"

EventScript_PickMovements_Text_1:
	.string "Test 1$"

EventScript_PickMovements_Text_2:
	.string "Test 2$"

EventScript_PickMovements_Text_3:
	.string "Test 3$"

EventScript_PickMovements_Text_4:
	.string "Test 4$"

ScriptTest_Text_0:
	.string "This message is printing.$"
