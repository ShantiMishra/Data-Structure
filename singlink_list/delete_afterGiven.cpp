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


// Funtion to add new node (after last node)
void Add_Node(int x){
     temp=first;
     while (temp->next!=NULL){
          temp=temp->next;
     }
     ttemp=new node;
     ttemp->data=x;
     ttemp->next=NULL;
     temp->next=ttemp;
}

// Function to display the elements of link list.
void display(){
     temp=first;
     while (temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
     }
     cout<<endl;
}

// Delete node after given data .
void del_After(int x){
    temp=first;
    while(temp->data!=x){
        temp=temp->next;
    }
    ttemp=temp->next;
    p=ttemp->next;
    temp->next=p;
    ttemp->next=NULL;
    delete ttemp;
}


int main(){
     create_First(10);
     Add_Node(20);
     Add_Node(30);
     Add_Node(40);
     Add_Node(50);
     display();
     del_After(20);
     display();
}