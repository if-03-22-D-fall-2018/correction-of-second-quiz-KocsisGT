/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.cpp
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#include "counter.h"

struct CounterImplementation
{
  enum Directions directions;
  int increment_value;
  int value;
};

struct CounterImplementation counter1 {UNDEFINED, 0, 0};
struct CounterImplementation counter2 {UNDEFINED, 0, 0};
struct CounterImplementation counter3 {UNDEFINED, 0, 0};

static Counter counter_collection[COUNTER_COUNT] = {&counter1, &counter2, &counter3};

Counter new_counter(Directions direction)
{
  for (int i = 0; i < COUNTER_COUNT; i++)
  {
    if (counter_collection[i]->increment_value == 0)
    {
      counter_collection[i]->directions = direction;
      counter_collection[i]->increment_value++;
    }
  }
  return 0;
}

void init()
{
  for (int i = 0; i < COUNTER_COUNT; i++)
  {
    counter_collection[i]->directions = UNDEFINED;
    counter_collection[i]->increment_value = 0;
    counter_collection[i]->value = 0;
  }
}

Directions get_direction(Counter counter)
{
  return counter->directions;
}

void set_direction(Counter counter, Directions direction)
{
  counter->directions = direction;
}

int get_increment_value(Counter counter)
{
  return counter->increment_value;
}

void set_increment_value(Counter counter, int value)
{
  if(value > 0)
  {
    counter->increment_value = value;
  }
}

int get_value(Counter counter)
{
  return counter->value;
}

bool set_value(Counter counter, int value)
{
  if (counter->directions == DOWN)
  {
    counter->value = value;
    return true;
  }
  return false;
}

void increment(Counter counter)
{
  if(counter->directions != UNDEFINED && counter->directions == UP)
  {
    counter->value += counter->increment_value;
  }
  else
  {
    counter->value -= counter->increment_value;
  }
}
