#include<bits/stdc++.h>
#include "Employee.h"
using namespace std;
int main(){
    string empId;
    string empName;
    int noOfHours;
    int rateOfHour;

    Employee employee;
    cout<<"Enter employee id: ";
    cin>>empId;
    cout<<"Enter employee name: ";
    cin>>empName;
    cout<<"Enter No of hours: ";
    cin>>noOfHours;
    cout<<"Enter rate of hour: ";
    cin>>rateOfHour;

    cout<<"--------------------------------------";
    employee.setEmployeeId(empId);
    employee.setEmployeeName(empName);
    employee.setNoOfHours(noOfHours);
    employee.setRatePerHour(rateOfHour);

    cout<<
        "Employee id: "<<employee.getEmployeeId()<<"\n"
        "Employee name: "<<employee.getEmployeeName()<<"\n"
        "no of hours: "<<employee.getNoOfHours()<<"\n"
        "rate of hour: "<<employee.getRatePerHour()<<"\n"
        "Total monthly salary: "<<employee.getTotalMonthlySalary()<<"\n";

}

