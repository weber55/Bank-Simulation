/*
BankSimulation.cpp
Author: Brian Weber
Submission  Date: 3/15/17
Purpose: Test Customer 
Statement of Academic Honesty:
The following code represents my own work. I have neither received nor given inappropriate assistance. I have not copied or modified code from any source other than the course webpage or the course textbook. I recognize that any unauthorized assistance or plagiarism will be handled in accordance with the University of Georgia's Academic Honesty Policy and the policies of this course. I recognize that my work is based on an assignment created by the Department of Computer Science at the University of Georgia. Any publishing or posting of source code for this project is strictly prohibited unless you have written consent from the Department of Computer Science  at the University of Georgia.
*/
#include "PriorityQueue.cpp"
#include "QueueType.cpp"
#include "Customer.cpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  ifstream file;
  string input;
  int cus = 0;
  string  n[11];
  int s[11], a[11];
  PriorityQueue<Customer> arrival;
  PriorityQueue<Customer> service;
  PriorityQueue<Customer> wait;
  int tellers;
  Customer cc[11];
  file.open("input.txt");
  if (file.is_open()){
    file >> input;
    if (input.compare("numTellers") == 0){
      file >> tellers;
      while (!file.eof()){
	file >> n[cus];
	file >> input;
	file >> a[cus];
	file >> input;
	file >> s[cus];
	cus++;
      }
    }
  } // read input from file
  int waitN[11];
  int total[11];
  for (int i = 0; i < cus-1; i++){
    int aa = a[i];
    int ss = s[i];
    total[i] = aa + ss;
  } // find total service time
  int tnum = 0, count = cus-2;
  int low[11];
  for (int i = 0; i < cus-1; i++){
    low[i] = total[i];
  }
  for (int i = 0; i < cus-1; i++){
    for (int j = 0; j < cus-1; j++){
      if (low[i] > low[j]){
        int temp1 = low[i];
        low[i] = low[j];
        low[j] = temp1;
      }
    }
  }
  for (int i = 0; i < cus-1; i++){
    if (tnum <= tellers){
      waitN[i] = 0;
      tnum++;
    }
    if (tnum > tellers){
      if (a[i] > low[count]){
	waitN[i] = 0;
      }
      else {
	waitN[i] = low[count] - a[i];
	total[i] = s[i] + waitN[i] + a[i];
	low[count] = total[i];
      }
      tnum--;
      count--;
    }
  }  // find wait time
  for (int i = 0; i < cus-1; i++){
    for (int j = 0; j < cus-1; j++){
      if (total[i] > total[j]){
	int temp = total[i];
	int wtemp = waitN[i];
	string ntemp = n[i];
	total[i] = total[j];
	waitN[i] = waitN[j];
	n[i] = n[j];
	total[j] = temp;
	waitN[j] = wtemp;
	n[j] = ntemp;
      }
    }
  } // order customers
  for (int i = cus-2; i >= 0; i--){
    cout << n[i] << " " << waitN[i] << " wait" << " service " << total[i] << \
      "\n";
  } // print output

} // main

