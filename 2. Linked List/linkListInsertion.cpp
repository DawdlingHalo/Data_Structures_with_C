//elements are added to the left
#include<iostream>
using namespace std;

struct Node{
    int data;
     struct Node *next;
}*head;

void push(int val){
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr;
    new_node->data = val;
    new_node->next = head; // made next to be null
    head = new_node;

}

void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

int main(){
    push(3);
    push(7);
    push(4);
    cout<<"Linked list: ";
    display();
    return 0;
}
