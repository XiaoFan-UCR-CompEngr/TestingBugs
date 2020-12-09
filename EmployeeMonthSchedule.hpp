#include <string>
#include "MonthSchedule.hpp"
class EmployeeMonthSchedule : public MonthSchedule{
public:
  virtual void display(){}
  virtual void extraSalary(){}
  virtual boolean workExtra() const {
        return false;
  }

}；

