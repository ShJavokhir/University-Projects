#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
        string employeeId;
        string employeeName;
        int noOfHours;
        int rateOfHour;
    public:
        void setEmployeeId(string empId) {employeeId = empId;}
        string getEmployeeId() {return this->employeeId;};
        void setEmployeeName(string empName){ employeeName = empName;}
        string getEmployeeName() {return this->employeeName;}
        void setNoOfHours(int noOfHours) {noOfHours = noOfHours;}
        int getNoOfHours() {return this->noOfHours;}
        void setRatePerHour(int rateOfHour) {rateOfHour = rateOfHour;}
        int getRatePerHour() {return this->rateOfHour;}

        string getTotalMonthlySalary() {return "I dont know how to calculate monthly salary based on these information.";}
};
