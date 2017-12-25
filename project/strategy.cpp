#include<iostream>
#include"strategy.h"
using namespace std;

Strategy::Strategy(int time, int base)
{
   time_t = time;
   base_t = base;
}

int Strategy::calculate()
{
   return get_multiplier()*time_t*base_t;
}
int Strategy1::get_multiplier()
{
  return 5;
}
int Strategy2::get_multiplier()
{
  return 2;
}
