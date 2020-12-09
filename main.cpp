//
// Created by 范笑 on 12/7/20.
//

#include <iostream>
using namespace std;
#include "Employee.h"
#include "Manager.h"
#include "CEO.h"
#include "Member.h"

int main() {
Employee* XiaoFan = new Employee("Xiao Fan","Engr","20941 Divonne Dr",18000,1000);
//cout<<"Xiao Fan: ";
//XiaoFan->display();
cout<<endl;
XiaoFan->setName("Xiao bao");
Employee* XiaoMing= new Employee("Xiao ming","Engr","20941 Divonne Dr",18100,10003);
XiaoFan->display();

    Manager* Xu = new Manager("Xu","Engr","20941 Divonne Dr",180,100,XiaoFan);
  // Xu->setName("xu");
  // cout<<Xu->getName()<<endl;
 Xu->display();
 Xu->setCEO(XiaoMing);
    Xu->display();

 CEO* Shawn = new CEO("Shawn","Engr","北京一环三号大院",180,100);
Shawn->display();
Shawn->addEmployee(XiaoFan);
Shawn->addEmployee(Xu);
Shawn->addEmployee(XiaoFan);
Shawn->display();
Shawn->removeEmployee(XiaoFan);
Shawn->display();

Member* caixukun = new Member("caixukun","Engr","北京四环怡海花园",005,1030);
caixukun->display();
caixukun->addGroupMember(XiaoMing);
caixukun->addGroupMember(Shawn);
caixukun->display();






    return 0;

};