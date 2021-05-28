// insert at a particular index
#include<iostream>
using namespace std;

void insertVal(int arr[],int n,int val,int idx){

    int temp=0,i;

    for(i=n;i>idx;i--){
        arr[i] = arr[i-1];

        if(i-1==idx){
            arr[i-1] = val;
        }

    }

    n++;

    //display
    cout<<"New array : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


int main(){

    int arr[] = {4,3,6,1,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,val,idx;

    //display array we have
    cout<<"Stored array : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter value to be inserted : ";
    cin>>val;
    cout<<"Enter index at which value has to be inserted : ";
    cin>>idx; // first element has idx 0

    insertVal(arr,n,val,idx);


}
