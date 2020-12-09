#ifndef BOSSDAYSCHEDULE_HPP
#define BOSSDAYSCHEDULE_HPP

#include <string>
#include "DaySchedule.hpp"
class BossDaySchedule : public DaySchedule{

public:
	virtual void display(){}
	virtual void extraSalary()
	virtual boolean workExtra() const {
		reutrn false;
	}
};

#endif//BOSSDAYSCHEDULE_HPP
