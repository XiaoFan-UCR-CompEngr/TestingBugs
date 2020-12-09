//
// Created by 范笑 on 11/25/20.
//

#ifndef FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_EMPLOYEE_H
#define FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_EMPLOYEE_H
#include <iostream>
#include <fstream>
#include <iterator>
#include <list>
#include <string>
#include <vector>

using namespace std;

class Employee {

    public:
        Employee() {
            name="";
            department="";
            address="";

            id = 0;
            salary=0;
        }
        Employee(string n,string dep,string addr,int ID,int sala) {
        name=n;
        department=dep;
        address=addr;
        id = ID;
        salary=sala;
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
        virtual void display() {
        cout<<"Employee Name: "<<getName()<<endl;
        cout<<"Department: "<<getDepartment()<<endl;
        cout<<"address: "<<getAddress()<<endl;
        cout<<"salary: "<<getSalary()<<endl;
        cout<<"ID: "<<getID();
        cout<<endl;
        }
        virtual ~Employee(){}


   private:
        string name;
        string department;
        string address;
        int salary;
        int id;
        vector<Employee* > subordinate;
    };



#endif //FINAL_PROJECT_XFAN029_HZHAN265_JIANGSHAN_EMPLOYEE_H
