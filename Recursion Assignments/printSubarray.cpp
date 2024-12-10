#include<iostream>
#include<vector>
using namespace std;

void printSubarray_util(vector<int> &nums, int start, int end){
    //Base Case
    if(end == nums.size()){
        return;
    }

    //1 case
    for(int i=start; i<=end; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    //RE
    printSubarray_util(nums, start, end+1);

}

void printSubarray(vector<int> &nums){
    for(int start = 0; start < nums.size(); start++){
        int end = start;
        printSubarray_util(nums, start, end);
    }
}

int main(){
    vector<int>nums{1,2,3,4,5};
    printSubarray(nums);
    
    return 0;
}