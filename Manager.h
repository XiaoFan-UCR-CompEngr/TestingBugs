//
// Created by 范笑 on 11/25/20.
//

#ifndef FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_MANAGER_H
#define FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_MANAGER_H
#include "Employee.h"

class Manager : public Employee {
public:
    Manager() {
        name="";
        department="";
        address="";

        id = 0;
        salary=0;
    }
    Manager(string n,string dep,string addr,int ID,int sala) {
        name=n;
        department=dep;
        address=addr;
        id = ID;
        salary=sala;
    }
    Manager(string n,string dep,string addr,int ID,int sala,Employee* inputCEO) {
        name=n;
        department=dep;
        address=addr;
        id = ID;
        salary=sala;
        myCEO = inputCEO;
    }
    virtual void setName(string name) {
        this->name = name;
    }
    virtual void setId(int id)
    {
        this->id = id;}

    virtual void setSalary(int salary) {
        this->salary = salary;
    }
    virtual void setDepartment(string department) {
        this->department = department;
    }
    virtual void setAddress(string address) {
        this->address = address;
    }
    virtual string getName() {
        return name;
    }
    virtual string getDepartment() {
        return department;
    }
    virtual string getAddress() {
        return address;
    }
    virtual int getSalary() {
       return salary;
    }
    virtual int getID() {
        return id;
    }
    Employee * getCEO()
    {
        if(myCEO != nullptr)
        return myCEO;
        else
            return nullptr;
    }
    void setCEO(Employee* inputCEO)
    {
        myCEO = inputCEO;
    }

    virtual void display() override {
        cout<<"Manager Name: "<<getName()<<endl;
        cout<<"Department: "<<getDepartment()<<endl;
        cout<<"address: "<<getAddress()<<endl;
        cout<<"salary: "<<getSalary()<<endl;
        cout<<"ID: "<<getID()<<endl;

        if(getCEO() != nullptr)
        {cout<<"My CEO is "<<getCEO()->getName()<<endl;}
        else
        {cout<<"No CEO now"<<endl;}

    }
    virtual ~Manager(){}

private:
    string name;
    string department;
    string address;
    int id;
    int salary;
    Employee* myCEO;


};


#endif //FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_MANAGER_H
