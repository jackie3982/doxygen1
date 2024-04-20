/**
 * @file Supervisor.h
 * @author Jacqueline Bybee
 * @date 2024-04-19
 * @brief Header file for the Supervisor class
 * 
 * Supervisor is a child class of Employee, This file declares all the members of this class
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * Child class of the Employee class
 *
 * @class Supervisor Supervisor.h "doxy/Supervisor.h"
 * @brief declaration of the Supervisor class
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * prints the normal employee print function plus the number of supervised employees
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * Calls the employee calculatepay function but adds another function that pays the supervisor 1% more for each imployee they supervise
 *
 * @pre 
 * @return double Calculated pay 
 * @post 
 * 
 */
  double calculatePay();

/**
 * Defualt constructor for the Supervisor class
 *
 * @pre 
 * @post 
 * 
 */
  Supervisor();

/**
 * Initialized constructor
 *
 * @param int ID Employee id number
 * @param int years Number of years worked
 * @param double hourlyRate Hourly pay
 * @param float hoursWorked Number of hours worked
 * @param int numSupervised Number of employees they supervise
 * @pre 
 * @post 
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
