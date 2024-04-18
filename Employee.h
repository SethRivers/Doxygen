/**
 * @file Employee.h
 * @author Seth Rivers
 * @date 2024-04-19
 * @brief the .h file for the employee data
 * 
 * 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 private:
  int ID; //employee ID
  int years;

 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * prints out employee data for review
 *
 * @pre there must be employee data
 * @return virtual 
 * @post employee data is printed for the employer to see
 * 
 */
  virtual void print();

/**
 * Calculates the pay of a given employee
 *
 * @pre there must be employee data
 * @return virtual 
 * @post the amount owed to an employee is given
 * 
 */
  virtual double calculatePay();

/**
 * Gives the employee in question a special anniversary bonus to their hourlyRate and increased the
 * number of years they have worked at the company by 1
 *
 * @pre There must be Employee Data
 * @return void 
 * @post The employee's hourly wage has went up, and they are congradulated for company loyalty
 * 
 */
  void anniversary();

/**
 * The Employee Constructor (Part 1)
 *
 * @pre The variables ID, years, hourlyRate, and hoursWorked to be made
 * @post The variables ID, years, hourlyRate, and hoursWorked initialized and ready for use
 * 
 */
  Employee();

/**
 * The Employee Constructor (Part 2)
 *
 * @param int ID An integar to hold the individual ID for the Employee
 * @param int years An integar to hold he years of employment for an Employee
 * @param double hourlyRate A Double to hold the hourly rate pay for an employee
 * @param float hoursWorked A Float to hold the hours worked of an individual employee
 * @pre The variables ID, years, hoursWorked, and hourlyRate to be initialized
 * @post the variables are now being properly utilized and set to the correct values
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
