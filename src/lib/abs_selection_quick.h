/**
*
*  @file abs_selection_quick.h
*
*  @brief handles the quick selection options for auto mission selection
*
*  @param None n/a
*
*  @return Returns nothing
*
*  @copyright Copyright 2013, Got Robot? FTC Team 5037
*
*/
#ifndef ABS_SELECTION_QUICK_H
#define ABS_SELECTION_QUICK_H

#include "lib/abs_cscreen.h"

void abs_selection_quick()
{
	//---------------------------------------
	// quick selection
	//---------------------------------------
	while(nNxtButtonPressed != kEnterButton)
	{
		if(nNxtButtonPressed == kRightButton)
		{
			PlaySoundFile("! Click.rso");
			while(nNxtButtonPressed == kRightButton){}
			if(g_quick_mission < g_max_quick_missions) g_quick_mission++;
		}
		if(nNxtButtonPressed == kLeftButton)
		{
			PlaySoundFile("! Click.rso");
			while(nNxtButtonPressed == kLeftButton){}
			if(g_quick_mission > 1) g_quick_mission--;
		}
		switch(g_quick_mission)
		{
		case 1:
			abs_cscreen("Mission ","Hit And ","Run    1");
			g_input_array[STARTING_POINT] = START_RAMP;	//RAMP
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = CENTER_GOAL;					//CENTER GOAL
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = ROLLGOAL1;				//ROLLING GOAL 1
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		case 2:
			abs_cscreen("Mission ","Back To ","P      2");
			g_input_array[STARTING_POINT] = START_RAMP;					//RAMP
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = ROLLGOAL1;					//ROLLING GOAL 1
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = STOP;					//STOP
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		case 3:
			abs_cscreen("Mission ","Hit 45  ","Zone   3");
			g_input_array[STARTING_POINT] = START_RAMP;					//RAMP
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = CENTER_GOAL;					//CENTER GOAL
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = ROLLGOAL1;				//ROLLING GOAL 1
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		case 4:
			abs_cscreen("Mission ","Common  ","45     4");
			g_input_array[STARTING_POINT] = START_RAMP;					//RAMP
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = ROLLGOAL1;					//ROLLING GOAL 1
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = CENTER_GOAL;				//CENTER GOAL
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		case 5:
			abs_cscreen("Mission ","Park Hit","P      5");
			g_input_array[STARTING_POINT] = START_FLOOR;					//FLOOR
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = CENTER_GOAL;					//CENTER GOAL
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = ROLLGOAL1;				//ROLLING GOAL 1
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		case 6:	//======================================| NEEDS TO BE WORKED ON, SECONDARY MOVEMENT STYLE |======================================//
			abs_cscreen("Mission ","Park Hit","45     6");
			g_input_array[STARTING_POINT] = START_FLOOR;					//FLOOR
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = CENTER_GOAL;					//CENTER GOAL
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = ROLLGOAL1;				//ROLLING GOAL 1
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		}
	}
	while(nNxtButtonPressed == kEnterButton){}
	PlaySoundFile("! Click.rso");
}

#endif /* !ABS_SELECTION_NUMBER_H */
