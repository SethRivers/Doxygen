/**
 * @file Supervisor.cpp
 * @author Seth Rivers
 * @date 2024-04-19
 * @brief the cpp file for the supervisor data
 * 
 * 
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

//initializes the number of hours supervised
Supervisor::Supervisor() {
  numSupervised = -1;
}

//properly sets the supervised hours to the accurate amount
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

//displays the hours supervised
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

//gives the supervisor a bonus to their pay depending on their supervised hours 
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
