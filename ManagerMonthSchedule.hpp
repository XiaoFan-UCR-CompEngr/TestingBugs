#ifndef MANAGERMONTHSCHEDULE_HPP
#define MANAGERMONTHSCHEDULE_HPP

ManagerMonthSchedule.hpp  
#include <string>
#include "MonthSchedule.hpp"
class ManagerMonthSchedule : public MonthSchedule{
public:
  virtual void display(){}
  virtual void extraSalary(){}
  virtual boolean workExtra() const {
        return false;
  }

}；

#endif//MANAGERMONTHSCHEDULE_HPP
