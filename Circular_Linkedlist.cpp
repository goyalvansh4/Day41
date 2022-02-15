#include <iostream>
using namespace std;

class Node{
  int data;
  Node* next; 
  
  
  Node(int d){
    this->data=d;
    this->next=NULL;
  }
}


bool isCircularList(Node* head){
  if(head==NULL){
    return true;
  } 
  Node* temp=head->next;
  while(temp!=NULL && temp!=head){
    temp=temp->next;
  } 
  if(temp==head){
    return true;
  } 
  return false;
}
