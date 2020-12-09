#include <string>

class DaySchedule{
public:
  virtual ~DaySchedule(){}
  virtual void display(){}
  virtual void extraSalary(){}
  virtual boolean workExtra() const {
  	return false;
  }

}；
