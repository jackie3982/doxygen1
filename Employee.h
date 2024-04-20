/**
 * @file Employee.h
 * @author Jacqueline Bybee
 * @date 2024-04-19
 * @brief Header file for the Employee class
 * 
 * Declares the variables of the Employee class
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
 * Prints the info of the employee
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual void print();

/**
 * Calculates the pay of the employee
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * Gives a 2% raise and consoles out a congrats to the employee
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void anniversary();

/**
 * Defualt constructor
 *
 * @pre 
 * @post 
 * 
 */
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
