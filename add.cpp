#include<iostream>
using namespace std;

int add(int num1,int num2,int num3) {

   int value=num1+num2+num3;
    // cout << num1+num2<<endl;
    return value;
}

int main() {

   int num1,num2,num3;
   cin>>num1>>num2>>num3;
    int value=add(num1,num2,num3);
    cout<<value;
    return 0;
}