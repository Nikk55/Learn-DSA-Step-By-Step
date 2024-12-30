#include<iostream>
using namespace std;
// Table Print
// Even Or Odd
// Prime Or Not
// 1 to number

void Table(int num) {
    for(int i=1;i<=10;i++) {
        cout << num*i<<" ";
    }

  return ;
}

void IsEvenOdd(int num) {
    if(num%2==0) {
        cout <<"Even"<<endl;
    }else{
        cout << "Odd"<<endl;
    }

    return ;
}

void factorial(int num) {
    int total=1;
    for(int i=1;i<=num;i++) {
        total=total*i;
    }
    
    cout << total<<endl;
}

void prime(int num) {
for(int i=2;i<=num/2;i++) {
    if(num%i==0) {
        cout << "Not a Primt No"<<endl;
        return ;
    }
}
cout<<"Prime No"<<endl;
}

void PrintValue(int num) {
    for(int i=1;i<=num;i++) {
        cout <<i<<endl;
    }
}

int main() {
   int num;
   cin>>num;
   Table(num);
   IsEvenOdd(num);
   factorial(num);
   prime(num);
   PrintValue(num);
//   int value=factorial(num);
//   cout << value;

    return 0;
}














