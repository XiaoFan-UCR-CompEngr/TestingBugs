#include <string>
#include "DaySchedule.hpp"
#include "MonthSchedule.hpp"

class ScheduleFactory{
public:
  virtual DaySchedule *CreateDaySchedule() const = 0;
  virtual MonthSchedule *CreateMonthSchedule() const = 0;
};
