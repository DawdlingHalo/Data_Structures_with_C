//Given a sorted and rotated array, finding if there is a pair with a given sum
#include<iostream>
using namespace std;

void pairInSortedRotated(int arr[],int n,int val){
    int i,l,r;
    bool x=false;
    // find lowest value first
    for(i=0;i<n-1;i++)
        if(arr[i]>arr[i+1]){
            break;
        }

    l = (i+1)%n; //smallest value index
    r = i;  //largest value index
    cout<<"\nSmallest value : "<<arr[l];
    cout<<"\nLargest value : "<<arr[r];

    while(l!=r){
        if(arr[l]+arr[r]==val){
            x= true;
            cout<<"\nFound it\n";
            break;
        }

        if(arr[l]+arr[r]<val){ // if sum less , then move smallest value forward
            l = (l+1)%n;
        }else{
            r = (n+r-1)%n; // if sum more , rotate to lower value index
        }
    }

    if(x){
        cout<<endl<<val<<" exists in array as sum of "<<arr[l]<<" and "<<arr[r];
    }else{
        cout<<endl<<val<<" does not exist as sum pair in array";
    }

}

int main(){
    int arr[] = {7,8,9,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum_val = 14;
    cout<<"Performing function ......";
    pairInSortedRotated(arr,n,sum_val);
}
