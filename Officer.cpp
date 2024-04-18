/**
 * @file Officer.cpp
 * @author Seth Rivers
 * @date 2024-04-19
 * @brief the cpp file for the officer data
 * 
 * 
 */

#include "Officer.h"
#include <iostream>

using namespace std;

//intializes EVILNESS
Officer::Officer() {
  evilness = 500;
}

//sets the current officer EVILNESS and pairs it with their Employee ID
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

//prints the EVILNESS of the officer
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

//Calculates the pay of the officer. Unlike regular employees, their pay is given a bonus from EVIL
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
