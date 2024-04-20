/**
 * @file Officer.h
 * @author Jacqueline Bybee
 * @date 2024-04-19
 * @brief Declaration of the child class Officer
 * 
 * Declares all members of the Child class Officer
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;
 public:
  void print();
  double calculatePay();
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H

