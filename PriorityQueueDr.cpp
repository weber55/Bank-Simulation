/*
PriorityQueueDr.cpp
Author: Brian Weber
Submission Date: 3/10/17
Purpose: Test Priority Queue implementation
Statement of Academic Honesty:
The following code represents my own work. I have neitherreceived nor given inappropriate assistance. I have not copiedor  modified code from any source other than the course webpage or the course textbook. I recognize that any unauthorizedassistance or plagiarism will be handled in accordance with the University of Georgia's Academic Honesty Policy and the policies of this course. I recognize that my work is based on an assignment created by the Department of ComputerScience at the University of Georgia. Any publishing or posting of source code for this project is strictlyprohibited unless you have written consent from the Department of Computer Science at the University of Georgia.
*/
#include "PriorityQueue.cpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {
  string word;
  ifstream file;
  double num;
  char ch;
  PriorityQueue<char> test;

  file.open("input.txt");
  if (file.is_open()){
    while (!file.eof()){
      file >> word;
      if (word == "Enqueue"){
	file >> ch;
	file >> num;
	test.enqueue(ch,num);
      }else if (word == "Dequeue"){
	test.dequeue();
      }else if (word == "List"){
	test.printQueue();
      }else if (word == "PeekPriority"){
	double pp = test.peekPriority();
	cout << pp << "\n";
      }else if (word == "Peek"){
	char peek = test.peek();
	cout << peek << "\n";
      }else if (word == "Length"){
	int length = test.size();
	cout << "Number of items in the Queue is " << length << "\n";
      }else if (word == "MakeEmpty"){
	test.makeEmpty();
      }else if (word == "IsEmpty"){
	bool empty = test.isEmpty();
	if (empty == 1)
	  cout << "True\n";
	else
	  cout << "False\n";
      }else if (word == "IsFull"){
	bool full = test.isFull();
	if (full == 1)
	  cout << "True\n";
	else
	  cout << "False\n";
      }else if (word == "Quit"){
	cout << "Testing completed\n";
	break;
      }
    }
  }
  else (cout << "Unable to open file.");

  return 0;

} // main
