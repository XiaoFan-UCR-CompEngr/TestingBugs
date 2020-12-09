#include <string>
#include "DaySchedule.hpp"

class ManagerDaySchedule : public DaySchedule{
public: 
	virtual void display(){}
	virtual void extraSalary(){}
	virtual boolean workExtra() const {
		return false;
	}
};
