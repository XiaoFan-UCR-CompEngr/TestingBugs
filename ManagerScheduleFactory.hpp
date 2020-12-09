#include "ScheduleFacotry.hpp"
#include "ManagerDaySchedule.hpp"
#include "ManagerMonthSchedule.hpp"

class ManagerScheduleFactory : public ScheduleFactory{
public:
  DaySchedule *CreateDaySchedule() const override{
        return new ManagerDaySchedule();
  }
  MonthSchedule *CreateMonthSchedule() const override{
        return new ManagerMonthSchedule();
  }
};


