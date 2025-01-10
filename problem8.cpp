#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   int countSubarraysWithAtMostKOdds(vector<int>& nums, int k) {
    if(k < 0) return 0; 
    
    int l = 0, r = 0, cnt = 0, subcount = 0;
    int n = nums.size();
    
    while(r < n) {
        if(nums[r] % 2 != 0) cnt++;  
        
        while(cnt > k) {  
            if(nums[l] % 2 != 0) cnt--;
            l++;
        }
        
        subcount += r - l + 1;  
        r++;
    }
    
    return subcount;
}

int numberOfSubarrays(vector<int>& nums, int k) {
    return countSubarraysWithAtMostKOdds(nums, k) - countSubarraysWithAtMostKOdds(nums, k - 1);
}

};
int main (){
    Solution s;
    vector<int> nums={ 1,1,2,1,1};
    int k=3;
    cout<<s.numberOfSubarrays (nums,k);

}