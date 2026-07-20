// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
#include<iostream>
using namespace std;
class Solution {
    public :
    int addNum(int num){
        while(num>=10){
            int sum =0;
            while(num>0){
                sum+=num%10;
                num=num/10;
            }
            num=sum;
        }
        return num;
    }
};
int main(){
    class Solution s;
    cout<<s.addNum(56);
}
