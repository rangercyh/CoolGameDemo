//---------------------------------------------------------------------------
// CoolGame Engine
// CreateDate: 2013.12.10
// Creater:    Caiyiheng
// Describe:   A windows high-resolution time counter.
//---------------------------------------------------------------------------


#ifndef ENGINE_COMMON_TIMER_H_
#define ENGINE_COMMON_TIMER_H_

class Timer
{
public:
  Timer();
  ~Timer();
  void Start();
  void Stop();
  int GetElapse();  // return from start until now in second
  int GetElapseMicrosecond(); // return from start until now in microsecond
  int GetElapseFrequency(); // return from start until now frequency
  int GetInterval();  // return interval(s) from start until stop
private:
  LARGE_INTEGER frequency_;
  LARGE_INTEGER start_time_;
  LARGE_INTEGER stop_time_;
};

#endif  // ENGINE_COMMON_TIMER_H_
