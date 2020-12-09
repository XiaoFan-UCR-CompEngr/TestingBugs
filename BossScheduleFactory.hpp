#ifndef BOSSSCHEDULEF BOSSSCHEDULEFACTORY_HPP
#define BOSSSCHEDULEFACTORY_HPP

#include "ScheduleFacotry.hpp"  
#include "BossDaySchedule.hpp"
#include "BossMonthSchedule.hpp"

class BossScheduleFactory : public ScheduleFactory{
public:
  DaySchedule *CreateDaySchedule() const override{
	return new BossDaySchedule();	
  }
  MonthSchedule *CreateMonthSchedule() const override{
	return new BossMonthSchedule();
  }
};

#endif// BOSSSCHEDULEFACTORY_HPP

