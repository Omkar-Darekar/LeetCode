/*
41. First Missing Positive 
Hard
Given an unsorted integer array nums, find the smallest missing positive integer.
*/

#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> nums = {0,0,0,0,0,-1,-22,2,0,0,2};
   vector<int>::iterator ptr;
    vector<int>::iterator ptr1;
    int small;
    for(ptr = nums.begin(); ptr<nums.end();ptr++){
        if(*ptr>0){
            for(ptr1 = ptr+1; ptr1<nums.end(); ptr1++){
                if((*ptr1<*ptr)&&(*ptr1<small)&&*ptr1>0){
                    small = *ptr1;
                    break;
                }else if(*ptr<small){
                    small = *ptr;
                }
            }
        }
    }
    if(small != 1){
        cout<<"small = "<<1<<endl;
        return 0;
    }
    for(ptr = nums.begin(); ptr<nums.end();ptr++){
        if(*ptr == small+1){
            small++;
            ptr=nums.begin();
            continue;
        }    
    }
    cout<<"Small ->"<<small+1 <<endl;
    return 0;
}
