/**
 * @file Supervisor.h
 * @author Seth Rivers
 * @date 2024-04-19
 * @brief the .h file for supervisor data
 * 
 * 
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * prints the supervised hours
 *
 * @pre there must be supervisor data
 * @return void 
 * @post supervisor data is printed for view
 * 
 */
  void print();

/**
 * calculates the pay of the supervisor (and their bonus pay for supervising!)
 *
 * @pre there must be supervisor data 
 * @return double 
 * @post supervisor pay is given
 * 
 */
  double calculatePay();

/**
 * initializes the hours supervising
 *
 * @pre 
 * @post numSupervised is initialized
 * 
 */
  Supervisor();

/**
 * Assigns supervisor data
 *
 * @param int ID holds the employee ID of the supervisor
 * @param int years holds the number of years that the supervisor has worked at the company
 * @param double hourlyRate holds the hourly rate of the supervisor
 * @param float hoursWorked shows how many hours the supervisor has worked
 * @param int numSupervised the hours of supervision the supervisor has supvervised
 * @pre the variables must be initialized
 * @post the supversiror's data is noted down
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
