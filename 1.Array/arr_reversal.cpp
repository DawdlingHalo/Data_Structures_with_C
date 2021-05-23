#include<iostream>
using namespace std;

void arr_rev(int a[],int n){
    int mid = n/2,i,temp;

    //algo
    for(i=0;i<mid;i++){
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }

    //display
    cout<<"Final Array: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Performing array reversal ......."<<endl;
    arr_rev(arr,n);

}
