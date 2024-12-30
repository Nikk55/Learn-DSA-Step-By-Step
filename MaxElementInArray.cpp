#include<iostream>
using namespace std;

int main() {

// char ar[6]={'a','c','d','f','1','o'};

// int arr[6]={6.2,5.4,3.1,11.1,2.21,-7};
int arr[6]={6,5,3,11,2,7};
int largest=arr[0];
int smallest=arr[0];

// largest=6;
for(int i=1;i<=5;i++) {
    if(arr[i]>largest) {
        largest=arr[i];
    }

    if(arr[i]<smallest) {
        smallest=arr[i];
    }
}
cout << "Largest= "<<largest<<endl;
cout <<"Smallest= "<<smallest<<endl;

    return 0;
}

