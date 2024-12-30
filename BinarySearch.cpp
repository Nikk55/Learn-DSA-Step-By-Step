#include<iostream>
using namespace std;

int main() {
    int nums[10]={2,3,6,8,10,12,18,21,27,91};

    int mid,start=0,end=9;
    int target=10;

        while(start<=end) {
            mid=(start+end)/2;
            if(nums[mid]==target) {
                cout<<mid<<" ";
                return 1;
            }
            else if(nums[mid]>target) {
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        cout<< "-1";

    return 0;
}