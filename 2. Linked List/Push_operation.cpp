
#include<iostream>
using namespace std;

struct node{
    int data;
    node *link;
}*head;

void push(){ //elements are added to the left
    node *temp = new node;
    cin>>temp->data;
    temp->link = head; // made next to be null
    head = temp;
}

void push1(){
    node *temp;
    temp = new node;
    cin>>temp->data;
    temp->link=NULL;
    if(head==NULL){
        head=temp;
    }else{
        node *ptr;
        ptr = head;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=temp;
    }
}

void display() {
   node *ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->link;
   }
}

int main(){
    cout<<"Linked list with elements inserted on left side: \n";
    push();
    push();
    push();
    cout<<"Linked list: ";
    display();
    head = NULL;
    cout<<"\nLinked list with elements inserted on right side: \n";
    push1();
    push1();
    push1();
    cout<<"Linked list: ";
    display();
    head = NULL;
    cout<<"\nLinked list with elements inserted on right side and left side: \n";
    push1();
    push();
    push1();
    cout<<"Linked list: ";
    display();
    return 0;
}
