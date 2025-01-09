#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size(), steps = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n/2; i++){
            steps += nums[n-1-i] - nums[i]; //Adding difference
        }
        return steps;
    }
};
int main (){
    Solution s;
    vector<int> nums = {1,2,3};
    cout<<s.minMoves2(nums)<<endl;
    return 0;
}