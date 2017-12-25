class Strategy
{
  int time_t;
  int base_t;
  public:
     Strategy(int time, int base);
     virtual int get_multiplier();
     int calculate();    
};
class Strategy1 : public Strategy
{
     int get_multiplier();
};
class Strategy2 : public Strategy
{
     int get_multiplier();
};
