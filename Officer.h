/**
 * @file Officer.h
 * @author Seth Rivers
 * @date 2024-04-19
 * @brief the h file for the officer data
 * 
 * 
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;
  //how diabolical the officer is 
 public:

/**
 * prints the EVILNESS level of a specific officer
 *
 * @pre there must be Employee Data 
 * @return void 
 * @post The level of EVIL for a specific officer is laid bare
 * 
 */
  void print();

/**
 * Calculates the pay of an officer (a bonus is given depending on how EVIL they are)
 *
 * @pre there must be employee data
 * @return double 
 * @post the sinister pay owed to the officer is displayed
 * 
 */
  double calculatePay();

/**
 * Sets the EVILNESS level of an officer to a base amount of 500. 
 *
 * @pre 
 * @post The EVILNESS level is ready to be adjusted for the specific officer
 * 
 */
  Officer();

/**
 * Sets the employee data and adjusts the EVILNESS level of the officer accordinly
 *
 * @param int ID an integar holding the ID number for the officer
 * @param int years An integar showing how long the officer has worked for the company
 * @param double hourlyRate the hourly rate of the officer
 * @param float hoursWorked the amount of hours an officer has worked
 * @param double evilness How absolutely FIENDISH an officer is (affects pay!)
 * @pre the variables must be initialized
 * @post the Employee data is assigned
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
