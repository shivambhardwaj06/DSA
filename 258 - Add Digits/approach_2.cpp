// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
// best solution 
#include <iostream>
using namespace std;
class Solution {
    public :
    int addNum(int num){
        return {1+(num-1)%9};
    }
};
int main(){
    class Solution s;
    cout<<s.addNum(56);
}