#ifndef MONTHSCHEDULE_HPP
#define MONTHSCHEDULE_HPP


#include <string>

class MonthSchedule{
public:
  virtual ~MonthSchedule(){}
  virtual void display(){}
  virtual void extraSalary(){}
  virtual boolean workExtra() const {
        return false;
  }

}；


#endif// MONTHSCHEDULE_HPP
