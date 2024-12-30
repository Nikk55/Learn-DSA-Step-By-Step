#include<iostream>
using namespace std;

void IsEvenOdd(int num) {
    if(num%2==0) {
        cout <<"even"<<endl;
        // return 0;
    }else{
        cout<<"Odd"<<endl;
        // return 1;
    }
    return ;
}

int main() {
int num1, num2, num3;
cin>>num1>>num2>>num3;
IsEvenOdd(num1);
// if(value==0) {
//     cout <<"Even"<<endl;
// }else{
//     cout <<"Odd"<<endl;
// }
// IsEvenOdd(num2);
// IsEvenOdd(num3);

return 0;

}