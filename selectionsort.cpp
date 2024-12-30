#include<iostream>
using namespace std;

int main() {

    int arr[]={2,7,8,3,5,1};
    int n=6;

    for(int i=0;i<n-1;i++) {
       int index=i;
       for(int j=i;j<=n-1;j++) {
        if(arr[index]>arr[j]) {
            index=j;
        }
       }

       int temp=arr[index];
       arr[index]=arr[i];
       arr[i]=temp;

    }

    for(int i=0;i<n;i++) {
        cout << arr[i]<<" ";
    }
    cout << endl;

    return 0;
}