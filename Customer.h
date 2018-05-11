/*
Customer.h
Author: Brian Weber
Submission  Date: 3/15/17
Purpose: Customer class
Statement of Academic Honesty:
The following code represents my own work. I have neither received nor given in\
appropriate assistance. I have not copied or modified code from any source othe\
r than the course webpage or the course textbook. I recognize that any unauthor\
ized assistance or plagiarism will be handled in accordance with the University\
 of Georgia's Academic Honesty Policy and the policies of this course. I recogn\
ize that my work is based on an assignment created by the Department of Compute\
r Science at the University of Georgia. Any publishing or posting of source cod\
e for this project is strictly prohibited unless you have written consent from \
the Department of Computer Science  at the University of Georgia.
*/
#include <string>
#include <cstdlib>

using namespace std;

class Customer{
 public:
  Customer();
  Customer(string name, int arrival, int service);
  const int getArrival();
  const int getService();
  const string getName();
  void setName(string name);
  void setArrival(int arrival);
  void setService(int service);
 private:
  string name;
  int arrival, service;
}; // Customer

