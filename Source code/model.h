#pragma once
#ifndef __MODEL__
#define __MODEL__

#include <Windows.h>

/// Announcement of constants such as the radius of the bullet, the force of gravity and the number Pi
#define SCREEN_HEIGHT 600 
#define SCREEN_WIDTH 800
#define CHAR_R 1 /// Radius of the bullet
#define G 10 /// The force of gravity
#define PI 3.1415926535898 /// The number Pi

/**
@class TChar
@brief TChar.
@fool Structure describing the physical parameters for the simulation, such as time, coordinates x and y axes, these axes speed, angle and the wind speed.
*/
struct TChar
{
	int end_time, start_time, search_time;
	double x, y, x0, y0, p, pos, y1, vx1;
	double vx, vy, vx0, wind, angle, alpha;
	double dist;
};

extern TChar ch;

#endif