/**
 * @file Officer.cpp
 * @author Jacqueline Bybee
 * @date 2024-04-19
 * @brief Implementation of the Officer class
 * 
 * Child class of Employee
 */

#include "Officer.h"
#include <iostream>

using namespace std;


/**
 * Defualt constructor for Officer
 *
 * @pre 
 * @post 
 * 
 */
Officer::Officer() {
  evilness = 500;
}


/**
 * Initialized constructor for Officer
 *
 * @param int ID Employee ID number
 * @param int years Number of years worked
 * @param double hourlyRate Hourly pay 
 * @param float hoursWorked Number of worked hours
 * @param double evilness The level of evilness the officer has
 * @pre 
 * @post 
 * 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}


/**
 * calls Employee's print function and makes it also output evilness
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}


/**
 * Manipulates the pay by adding evilness to the rate
 *
 * @pre 
 * @return double  The payout of the employee
 * @post 
 * 
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
