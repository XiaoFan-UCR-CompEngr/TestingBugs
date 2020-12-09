//
// Created by 范笑 on 11/25/20.
//

#ifndef FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_CEO_H
#define FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_CEO_H
#include "Employee.h"
#include <vector>
class CEO : public Employee{

public:
    CEO() {
        name="";
        department="";
        address="";

        id = 0;
        salary=0;
    }
    CEO(string n,string dep,string addr,int ID,int sala) {
        name=n;
        department=dep;
        address=addr;
        id = ID;
        salary=sala;
    }
    CEO(string n,string dep,string addr,int ID,int sala,vector<Employee* > sub) {
        name=n;
        department=dep;
        address=addr;
        id = ID;
        salary=sala;
        subordinates =sub;
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


    virtual void display() override {
        cout<<"Manager Name: "<<getName()<<endl;
        cout<<"Department: "<<getDepartment()<<endl;
        cout<<"address: "<<getAddress()<<endl;
        cout<<"salary: "<<getSalary()<<endl;
        cout<<"ID: "<<getID()<<endl;

        if(!subordinates.empty())
        {cout<<"The employee under this CEO are ";
            for(int i=0;i<subordinates.size();i++)
            {
                cout<<subordinates.at(i)->getName()<<", ";
            }
            cout<<endl;
        }
        else
        {cout<<"No employee now"<<endl;}

    }

    void addEmployee(Employee* input)
    {
        subordinates.push_back(input);
    }
    void removeEmployee(Employee* input)//remove all the same employees in the vector
    {
        int tempIndex;
        bool isRight = false;
        for(int i=0;i<subordinates.size();i++)
        {
           if(subordinates.at(i)==input)
               isRight = true;
            if(isRight)
            {
                tempIndex = i;
                subordinates.erase(subordinates.begin()+tempIndex);
                isRight = false;
            }

        }


    }
    void setSubordinates(vector<Employee* > sub)
    {
        subordinates = sub;
    }
    virtual ~CEO(){};



private:
    string name;
    string department;
    string address;
    int id;
    int salary;
    vector<Employee* > subordinates;

};


#endif //FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_CEO_H

