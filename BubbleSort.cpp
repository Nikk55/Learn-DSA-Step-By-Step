#include<iostream>
using namespace std;

int main() {

    int arr[]={5,4,3,2,1};
    int n=5;

    for(int i=0;i<n-1;i++) {
       for(int j=0;j<=n-i-1;j++) {
       // Swap
       if(arr[j]>arr[j+1]) {
        // swap
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
       }
       }

       
    }

    for(int i=0;i<n;i++) {
        cout << arr[i]<<" ";
    }
    cout << endl;

    return 0;
}