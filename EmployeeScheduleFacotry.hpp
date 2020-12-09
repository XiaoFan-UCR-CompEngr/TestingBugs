
#ifndef EMPLOYEESCHEDULEFACTORY_HPP
#define EMPLOYEESCHEDULEFACTORY_HPP

#include "ScheduleFacotry.hpp"
#include "EmployeeDaySchedule.hpp"
#include "EmployeeMonthSchedule.hpp"

class EmployeeScheduleFactory : public ScheduleFactory{
public:
  DaySchedule *CreateDaySchedule() const override{
        return new EmployeeDaySchedule();
  }
  MonthSchedule *CreateMonthSchedule() const override{
        return new EmployeeMonthSchedule();
  }
};

#endif// EMPLOYEESCHEDULEFACTORY_HPP
