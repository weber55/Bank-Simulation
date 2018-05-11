/*
PriorityQueue.h
Author: Brian Weber
Submission Date: 3/10/17
Purpose: Header file for PriorityQueue implementation.
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
#include <string>
#include <iostream>
#include <cstdlib>

template <class ItemType>
class PriorityQueue {
 public:
  PriorityQueue();
  void enqueue(ItemType value, double priority);
  void dequeue();
  ItemType peek();
  double peekPriority();
  void makeEmpty();
  int size();
  bool isEmpty();
  void printQueue();
  bool isFull();
 private:
  int length = 0;
  struct QueueNode{
    ItemType info;
    int priority;
    struct QueueNode *next;
  };
  QueueNode *front;
}; // PriorityQueue
