#include<iostream>
using namespace std;

void linearSearch(int arr[],int n,int x){
    int i;
    bool d=0;

    for(i=0;i<n;i++){
        if(x==arr[i]){
            d=true;
            break;
        }
    }

    if(d==true){
        cout<<"Found "<<x<<" at index "<<i;
    }else{
        cout<<x<<" not found in array";
    }

}

int main(){
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
    linearSearch(arr,n,val);

}
