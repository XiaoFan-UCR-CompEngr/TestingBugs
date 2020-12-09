#ifndef EMPLOYEEDAYSCHEDULE_HPP
#define EMPLOYEEDAYSCHEDULE_HPP

#include <string>
#include "DaySchedule.hpp"

class EmployeeDaySchedule : public DaySchedule{
public:
        virtual void display(){}
        virtual void extraSalary(){}
        virtual boolean workExtra() const {
                return false;
        }
};

#endif//EMPLOYEEDAYSCHEDULE_HPP
