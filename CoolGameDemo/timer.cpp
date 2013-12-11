#include "timer.h"
#include "pre_compile.h"

const int kDefaultFrequencyValue = 10 * 1024 * 1024;

Timer::Timer()
{
  frequency_.QuadPart = kDefaultFrequencyValue;
  start_time_.QuadPart = 0;
  stop_time_.QuadPart = 0;
  QueryPerformanceFrequency(&frequency_);
}

Timer::~Timer()
{
}

void Timer::Start()
{
  QueryPerformanceCounter(&start_time_);
}

void Timer::Stop()
{
  QueryPerformanceCounter(&stop_time_);
}

int Timer::GetElapse()
{
  LARGE_INTEGER time;
  QueryPerformanceCounter(&time);
  return static_cast<int>((time.QuadPart - start_time_.QuadPart) * 1000 / frequency_.QuadPart);
}

int Timer::GetElapseMicrosecond()
{
  LARGE_INTEGER time;
  QueryPerformanceCounter(&time);
  return static_cast<int>((time.QuadPart - start_time_.QuadPart) * 1000000 / frequency_.QuadPart);
}

int Timer::GetElapseFrequency()
{
  LARGE_INTEGER time;
  QueryPerformanceCounter(&time);
  return static_cast<int>(time.QuadPart - start_time_.QuadPart);
}

int Timer::GetInterval()
{
  return static_cast<int>((stop_time_.QuadPart - start_time_.QuadPart) * 1000 / frequency_.QuadPart);
}
