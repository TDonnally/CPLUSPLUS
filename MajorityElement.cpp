#include <iostream>
#include <vector>


using namespace std;

/*
    Given an array nums of size n, return the majority element.

    The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

    

    Example 1:

    Input: nums = [3,2,3]
    Output: 3
    
    Example 2:

    Input: nums = [2,2,1,1,1,2,2]
    Output: 2
*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element=0;
            int count=0;
            for(int arr:nums){
            if(count==0){
                element=arr;
            }
            if(arr==element){
                count++;
            }
            else
                count--;
        }
        return element;
    }
};

// main() is where program execution begins.
int main() {
    return 0;
}