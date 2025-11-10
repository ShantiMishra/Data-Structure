#include <iostream>
using namespace std;

struct DCLL{
      int data;
      DCLL *next,*prev;
};
  DCLL *temp,*ttemp,*p,*first;

  void first_node(int x){
    first=new DCLL;
    first->data=x;
    first->next=first;
    first->prev=first;
  }

  void display(){
    temp=first;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=first);
    cout<<endl;
  }

  int main(){
    first_node(10);
    display();
  }
