/*
QueueType.cpp
Author: Brian Weber
Submission Date: 3/15/17
Purpose: Implement QueueType class
Statement of Academic Honesty: The  following  code  represents  my  own  work.  I  have  neitherreceived  nor  given  inappropriate assistance. I have not copiedor  modified code from any source other than the course webpageor the course textbook. I recognize that any unauthorizedassistance or plagiarism will be handled in accordance  withthe  University  of  Georgia's  Academic  Honesty  Policy  and  thepolicies  of  this course.  I  recognize  that  my  work  is  basedon  an  assignment  created  by  the  Department  of ComputerScience at the University of Georgia. Any publishingor posting of source code for this project  is strictlyprohibited  unless  you  have written consent  from  the  Departmentof Computer Science  at the  University  of  Georgia.
*/
#include <iostream>
#include <string>
#include "QueueType.h"

using namespace std;

int lngth = 0;

template<class ItemType>
QueType<ItemType>::QueType(){
  maxQue = 501;
  front = maxQue - 1;
  rear = maxQue - 1;
  items = new ItemType[maxQue];
} // QueType()

template<class ItemType>
QueType<ItemType>::QueType(int max){
  maxQue = max + 1;
  front = maxQue - 1;
  rear = maxQue - 1;
  items = new ItemType[maxQue];
} // QueType(int max)

template<class ItemType>
QueType<ItemType>::~QueType(){
  MakeEmpty();
} // ~QueType()

template<class ItemType>
void QueType<ItemType>::MakeEmpty(){
  front = maxQue - 1;
  rear = maxQue - 1;
} // MakeEmpty()

template<class ItemType>
bool QueType<ItemType>::IsEmpty() const{
  return (rear == front);
} // IsEmpty()

template<class ItemType>
bool QueType<ItemType>::IsFull() const{
  return ((rear + 1)% maxQue == front);
} // IsFull()

template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem){
  // Allocates for a new node
  if (IsFull()){
    throw FullQueue();
  } else{
    rear = (rear +1) % maxQue;
    items[rear] = newItem;
  }
  lngth++;
} // Enqueue(ItemType newItem)

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& newItem){
  if (IsEmpty()){
    throw EmptyQueue();
  }else{
    front = (front + 1) % maxQue;
    newItem = items[front];
  }
  lngth--;
} // Dequeue(ItemType newItem)

template<class ItemType>
int QueType<ItemType>::length(){  
  return (lngth);
} // length()
