/*
PriorityQueue.cpp
Author: Brian Weber
Submission Date: 3/10/17
Purpose: PriorityQueue implementation.
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
#include "PriorityQueue.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

template <class ItemType>
PriorityQueue<ItemType>::PriorityQueue(){
  front = NULL;
} // PriorityQueue

template <class ItemType>
void PriorityQueue<ItemType>::enqueue(ItemType value, double priority){
  length++;
  QueueNode *tmp, *q;
  tmp = new QueueNode;
  tmp->info = value;
  tmp->priority = priority;
  if (front == NULL || priority < front->priority){
    tmp->next = front;
    front = tmp;
  } else {
    q = front;
    while (q->next != NULL && q->next->priority <= priority)
      q = q->next;
    tmp->next = q->next;
    q->next = tmp;
  }
} // enqueue

template <class ItemType>
void PriorityQueue<ItemType>::dequeue(){
  QueueNode *tmp;
  if (front == NULL)
    cout << "Empty Queue exception thrown\n";
  else{
    length--;
    tmp = front;
    front = front->next;
    free(tmp);
  }
} // dequeue

template <class ItemType>
ItemType PriorityQueue<ItemType>::peek(){
  QueueNode *tmp;
  tmp = front;
  if (front == NULL){
    throw runtime_error("Empty Queue exception thrown\n");
  }else{
    cout << "Front item is ";
    return (tmp->info);
  }
} // peek

template <class ItemType>
double PriorityQueue<ItemType>::peekPriority(){
  QueueNode *tmp;
  tmp = front;
  if (front == NULL){
    throw runtime_error("Empty Queue exception thrown\n");
  }else{
    cout << "Priority of the front item is ";
    return (tmp->priority);
  }
} // peekPriority

template <class ItemType>
void PriorityQueue<ItemType>::makeEmpty(){
  front = NULL;
  length = 0;
} // makeEmpty

template <class ItemType>
int PriorityQueue<ItemType>::size(){
  return length;
} // size

template <class ItemType>
bool PriorityQueue<ItemType>::isEmpty(){
  return (length == 0);
} // isEmpty

template <class ItemType>
void PriorityQueue<ItemType>::printQueue(){
  QueueNode *ptr;
  ptr = front;
  if (front == NULL)
    cout << "Queue: \n";
  else{
    cout << "Queue: ";
    while(ptr != NULL){
      cout << ptr->info;
      ptr = ptr->next;
      cout << " ";
    }
    cout << "\n";
  }
} // printQueue

template <class ItemType>
bool PriorityQueue<ItemType>::isFull(){
  return false;
} // isFull
