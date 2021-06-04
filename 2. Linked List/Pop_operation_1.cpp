//deleting the last element
#include<iostream>
using namespace std;

struct node{
    int x;
    node *link;
}*top;

void push(int val){
    node *temp;
    temp = new node;
    temp->x=val;
    temp->link=NULL;
    if(top==NULL){
        top=temp;
    }else{
        node *ptr;
        ptr = top;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=temp;
    }
}

void pop(){
    node *temp;
    node *ptemp;
    ptemp=top; // block1
    temp= ptemp->link;//block 2
    while(temp->link!=NULL){
        ptemp = temp; // block 2
        temp = temp->link; //block 3
    }
    ptemp->link = NULL;
    cout<<"\nPopped : "<<temp->x<<endl;
    delete(temp);

}

void display(){

    node *ptr;
    ptr = top;
    while(ptr!=NULL){
        cout<<ptr->x<<" ";
        ptr=ptr->link;
    }

}

int main(){
    //Insertion
    push(5);
    push(6);
    push(7);
    push(8);
    //Deletion
    pop();
    display();
}
