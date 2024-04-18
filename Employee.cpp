/**
 * @file Employee.cpp
 * @author Seth Rivers
 * @date 2024-04-19
 * @brief The .cpp file for Employees
 * 
 * 
 */


#include "Employee.h"
#include <iostream>

using namespace std;

//sets the variables to -1
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

//applies the data of an employee to the variables
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

//prints employee data for viewing
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

void Employee::anniversary() {
  //increases years worked at company
  years++;
  //hourly rate increase
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

//simple calculator to find the amount owned
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}
