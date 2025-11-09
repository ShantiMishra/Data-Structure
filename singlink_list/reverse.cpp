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



// Function to reverse the list .
void reverse_List(){
     ttemp=NULL;
     while(first!=NULL){
        temp=first->next;
        first->next=ttemp;
        ttemp=first;
        first=temp;
     }
     first=ttemp;
}




// Function to display the elements of link list
void display(){
     temp=first;
     cout<<"Link List Elements : ";
     while (temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
     }
     cout<<endl;
}



int main(){
     create_First(10);
     Add_Node(30);
     Add_Node(440);
     Add_Node(43);
     Add_Node(5);
     display();
    cout<<"Rerverse of the given list is : "<<endl;
    reverse_List();
    display();
}