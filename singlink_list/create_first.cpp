#include <iostream>
using namespace std;
struct node{
  int data;
  node *next;
};
node *temp,*ttemp,*first,*p;


// Function to create first node of list
void create_First(int val){
  first=new node;
  first->data=val;
  first->next=NULL;
}

// Function to display the elements of link list
void display(){
     temp=first;
     while (temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
     }
     cout<<endl;
}



int main(){
     create_First(10);
     display();
}