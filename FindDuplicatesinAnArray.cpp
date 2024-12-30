#include<iostream>
using namespace std;

int main() {

int arr[]={1,3,3,1};
int count[4]={0};

for(int i=0;i<4;i++) {
    count[arr[i]]++;
}

for(int i=0;i<4;i++) {
    if(count[i]>1) {
        cout<<i<<" ";
    }
}

    return 0;
}