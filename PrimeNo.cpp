#include<iostream>
using namespace std;

void Prime(int num) {
    if(num<2) {
        return ;
    }

    for(int i=2;i<num/2;i++) {
        if(num%i==0) {
            return ;
        }

        
    }
    cout << num<<" ";
    return ;
}
int main() {
  
  int arr[8]={2,3,7,1,-10,8,13,12};

  for(int i=0;i<8;i++) {
    if(arr[i]>=2) {
       for(int j=2;j<arr[i]/2;j++) {
        
       }
    }
  }

    return 0;
}