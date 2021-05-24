#include<iostream>
using namespace std;

void binarySearch(int arr[],int n , int x){
    bool flag=false;
    int mid,i,j;
    i=0;
    j=n-1;

    while(i<j){
        mid = (i+j)/2;


        if(arr[mid]==x){
            flag =true;
            break;
        }
        if(arr[mid]>x){
            j=mid;
        }
        if(arr[mid]<x){
            i=mid+1;
        }
    }

    if(flag==true){
        cout<<"Found "<<x<<" at index "<<mid;
    }
    else{
        cout<<x<<" not found";
    }

}

int main(){

    //Assuming array is sorted

    int n,val,i;
    cout<<"Enter number of elements to be added in array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";

    //Input
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array stored."<<endl;
    cout<<"Enter value to be searched : ";
    cin>>val;

    //Function called
    binarySearch(arr,n,val);
}
