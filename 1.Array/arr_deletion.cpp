// delete element , where index is taken as input
#include<iostream>
using namespace std;

void deleteVal(int arr[],int n,int idx){

    int x,i;
    x=arr[idx];

    for(i=idx;i<n-1;i++){
        arr[i] = arr[i+1];
        arr[i+1] = 0;
    }

    n--;
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

    cout<<"Enter index at which value has to be deleted : ";
    cin>>idx; // first element has idx 0

    deleteVal(arr,n,idx);
}

