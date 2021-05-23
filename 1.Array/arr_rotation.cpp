#include<iostream>
using namespace std;

//using one array
void arr_rotation1(int a[],int n,int x){
    int var;
    //method
    for(int i =0;i<x;i++){
        var = a[0];
        for(int j =0 ;j<n-1;j++){
            a[j] = a[j+1];
        }
        a[n-1] = var;
    }
    //display
    cout<<"Output: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

//using two arrays
void arr_rotation2(int a[],int n,int x){
    int var;
    int b[n];
    //method
    for(int i=x;i<n;i++){
        b[i] = a[i];
    }
    for(int i=0;i<x;i++){
        b[i] = a[i];
    }

    //display
    cout<<"Output: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    cout<<"Enter number of rotations: ";
    cin>>i;
    arr_rotation1(arr,n,3);
    cout<<endl;
    arr_rotation2(arr,n,3);
    cout<<endl;
}
