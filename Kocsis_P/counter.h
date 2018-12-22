/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.h
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#ifndef ___COUNTER_H
#define ___COUNTER_H

const int COUNTER_COUNT = 3;

enum Directions {UP, DOWN, UNDEFINED};

typedef struct CounterImplementation* Counter;

Counter new_counter(Directions direction);

void init();

Directions get_direction(Counter counter);

void set_direction(Counter counter, Directions direction);

int get_increment_value(Counter counter);

void set_increment_value(Counter counter, int value);

int get_value(Counter counter);

bool set_value(Counter counter, int value);

void increment(Counter counter);

#endif
