#include<iostream>
using namespace std;

int main() {
    int arr[]={3,13,12,11,8};

    for(int i=0;i<5;i++) {
        for(int j=0;j<5-i;j++) {
            cout << arr[j]<<" ";
        }
        cout << endl;
    }
}