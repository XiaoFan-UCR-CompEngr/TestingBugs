//
// Created by 范笑 on 11/25/20.
//

#ifndef FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_MEMBER_H
#define FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_MEMBER_H
#include "Employee.h"

class Member : public Employee{

public:
    Member() {
        name="";
        department="";
        address="";

        id = 0;
        salary=0;
    }
    Member(string n,string dep,string addr,int ID,int sala) {
        name=n;
        department=dep;
        address=addr;
        id = ID;
        salary=sala;
    }
    Member(string n,string dep,string addr,int ID,int sala,Employee* mana,vector<Employee* > sub) {
        name=n;
        department=dep;
        address=addr;
        id = ID;
        salary=sala;
        myManager = mana;
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
        cout<<"Member Name: "<<getName()<<endl;
        cout<<"Department: "<<getDepartment()<<endl;
        cout<<"address: "<<getAddress()<<endl;
        cout<<"salary: "<<getSalary()<<endl;
        cout<<"ID: "<<getID()<<endl;

        if(!subordinates.empty())
        {cout<<"The group members under this Employee are ";
            for(int i=0;i<subordinates.size();i++)
            {
                cout<<subordinates.at(i)->getName()<<", ";
            }
            cout<<endl;
        }
        else
        {cout<<"No group members now"<<endl;}

    }

    void addGroupMember(Employee* input)
    {
        subordinates.push_back(input);
    }
    void removeGroupMember(Employee* input)//remove all the same employees in the vector
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
    void setMyManager(Employee* mana)
    {
        myManager = mana;
    }
    void setSubordinates(vector<Employee* > sub)
    {
        subordinates = sub;
    }

private:
    Employee* myManager;
    string name;
    string department;
    string address;
    int id;
    int salary;
    vector<Employee* > subordinates;
};


#endif //FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_MEMBER_H
