#include<iostream>
using namespace std;

int main() {

   int arr[8]={2,3,7,1,-10,8,13,12};
   for(int i=0;i<8;i++) {
    if(arr[i]%2==0) {
        cout << arr[i]<<" ";
    }
   }
    return 0;
}