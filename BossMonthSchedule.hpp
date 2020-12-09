#include <string>
#include "MonthSchedule.hpp"
class BossMonthSchedule : public MonthSchedule{
public:
  virtual void display(){}
  virtual void extraSalary(){}
  virtual boolean workExtra() const {
        return false;
  }

}；
