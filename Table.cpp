#include<iostream>
using namespace std;

void Table(int num) {

    for(int i=1;i<=10;i++) {
        cout <<num*i<<endl;
    }
    return ;
}

int main() {
  int num;
  cin>>num;
  Table(num);

    return 0;
}