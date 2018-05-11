/*
Customer.cpp
Author: Brian Weber
Submission Date: 3/15/17
Purpose: Customer class implementation
Statement of Academic Honesty:
The following code represents my own work. I have neither received nor given inappropriate
assistance. I have not copied or modified code from any source other than the course webpage or
the course textbook. I recognize that any unauthorized assistance or plagiarism will be handled in
accordance with the University of Georgia's Academic Honesty Policy and the policies of this
course. I recognize that my work is based on an assignment created by the Department of
Computer Science at the University of Georgia. Any publishing or posting of source code for this
project is strictly prohibited unless you have written consent from the Department of Computer
Science at the University of Georgia.
*/

#include "Customer.h"
#include <string>

using namespace std;

Customer::Customer(){
  name = "";
  arrival = 0;
  service = 0;
} // Customer()

Customer::Customer(string name, int arrival, int service){
  name = name;
  arrival = arrival;
  service = service;
} // Customer(name, arrival, service)

const string Customer::getName(){
  return name;
} // getName

const int Customer::getArrival(){
  return arrival;
} // getArrival

const int Customer::getService(){
  return service;
} // getService

void Customer::setName(string name){
  name = name;
} // setName

void Customer::setArrival(int arrival){
  arrival = arrival;
} // setArrival

void Customer::setService(int service){
  service = service;
} // setService
