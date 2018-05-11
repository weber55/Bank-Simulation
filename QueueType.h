/*
QueueType.h
Author: Brian Weber
Submission Date: 3/15/17
Purpose: Implement QueueType class
Statement of Academic Honesty: The  following  code  represents  my  own  work.  I  have  neitherreceived  nor  given  inappropriate assistance. I have not copiedor  modified code from any source other than the course webpageor the course textbook. I recognize that any unauthorizedassistance or plagiarism will be handled in accordance  withthe  University  of  Georgia's  Academic  Honesty  Policy  and  thepolicies  of  this course.  I  recognize  that  my  work  is  basedon  an  assignment  created  by  the  Department  of ComputerScience at the University of Georgia. Any publishingor posting of source code for this project  is strictlyprohibited  unless  you  have written consent  from  the  Departmentof Computer Science  at the  University  of  Georgia.
*/
#include<iostream>
#include<string>
class FullQueue{};  
class EmptyQueue{};
  
template <class ItemType>
class QueType
{
 public: 
  QueType();
  QueType(int max);
  ~QueType();
  void MakeEmpty();
  bool IsEmpty() const;
  bool IsFull() const;
  void Enqueue(ItemType newItem);
  void Dequeue(ItemType& item);
  int length();
 private:
  int front;
  int rear;
  ItemType* items;
  int maxQue;
}; // QueueType class


