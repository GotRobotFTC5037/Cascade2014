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
			abs_cscreen("Mission ","Ramp Bsc","No Kick1");
			g_input_array[STARTING_POINT] = START_RAMP;	//RAMP
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = ROLLGOAL1;					//ROLLGOAL1
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = PARKING_ZONE;				//PARKING_ZONE
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = STOP;								//STOP

			//abs_cscreen("Mission ","Hit And ","Run    1");
			//g_input_array[STARTING_POINT] = START_RAMP;	//RAMP
			//g_input_array[STARTING_DELAY] = 0;
			//g_input_array[FIRST_OBJECTIVE] = CENTER_GOAL;					//CENTER GOAL
			//g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			//g_input_array[SECOND_OBJECTIVE] = ROLLGOAL1;				//ROLLING GOAL 1
			//g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			//g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		case 2:
			abs_cscreen("Mission ","Ramp Bsc","Kick   2");
			g_input_array[STARTING_POINT] = START_RAMP;					//RAMP
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = ROLLGOAL1;					//ROLLING GOAL 1
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = PARKING_ZONE;					//LOW AREA
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = KICK_STAND;								//KICK STAND

			//abs_cscreen("Mission ","Ramp Bsc","Score 2");
			//g_input_array[STARTING_POINT] = START_RAMP;					//RAMP
			//g_input_array[STARTING_DELAY] = 0;
			//g_input_array[FIRST_OBJECTIVE] = ROLLGOAL1;					//ROLLING GOAL 1
			//g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			//g_input_array[SECOND_OBJECTIVE] = STOP;					//STOP
			//g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			//g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		case 3:
			abs_cscreen("Mission ","FloorBsc","Score  3");
			g_input_array[STARTING_POINT] = START_FLOOR;					//FLOOR
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = ROLLGOAL1;					//ROLLING GOAL 1
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = STOP;				//STOP
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		case 4:
			abs_cscreen("Mission ","F Center","KickRol4");
			g_input_array[STARTING_POINT] = START_FLOOR;					//FLOOR
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = CENTER_GOAL;					//CENTER GOAL
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = KICK_STAND;				//KICK STAND
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = ROLLGOAL1;								//ROLLING GOAL 1
			//abs_cscreen("Mission ","Common  ","45     4");
			//g_input_array[STARTING_POINT] = START_RAMP;					//RAMP
			//g_input_array[STARTING_DELAY] = 0;
			//g_input_array[FIRST_OBJECTIVE] = ROLLGOAL1;					//ROLLING GOAL 1
			//g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			//g_input_array[SECOND_OBJECTIVE] = CENTER_GOAL;				//CENTER GOAL
			//g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			//g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		case 5:
			abs_cscreen("Mission ","F Center","Kick   5");
			g_input_array[STARTING_POINT] = START_FLOOR;					//FLOOR
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = CENTER_GOAL;					//CENTER GOAL
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = KICK_STAND;				//ROLLING GOAL 1
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = STOP;								//LOW AREA
			//abs_cscreen("Mission ","Park Hit","P      5");
			//g_input_array[STARTING_POINT] = START_FLOOR;					//FLOOR
			//g_input_array[STARTING_DELAY] = 0;
			//g_input_array[FIRST_OBJECTIVE] = CENTER_GOAL;					//CENTER GOAL
			//g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			//g_input_array[SECOND_OBJECTIVE] = ROLLGOAL1;				//ROLLING GOAL 1
			//g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			//g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		case 6:
			abs_cscreen("Ramp","RolGoal2","NoKick 6");
			g_input_array[STARTING_POINT] = START_RAMP;					//FLOOR
			g_input_array[STARTING_DELAY] = 0;
			g_input_array[FIRST_OBJECTIVE] = ROLLGOAL2;					//CENTER GOAL
			g_input_array[FIRST_OBJECTIVE_DELAY] = 0;
			g_input_array[SECOND_OBJECTIVE] = STOP;				//ROLLING GOAL 1
			g_input_array[SECOND_OBJECTIVE_DELAY] = 0;
			g_input_array[END_POINT] = PARKING_ZONE;								//LOW AREA
			break;
		}
	}
	while(nNxtButtonPressed == kEnterButton){}
	PlaySoundFile("! Click.rso");
}

#endif /* !ABS_SELECTION_NUMBER_H */
