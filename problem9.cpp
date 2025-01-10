#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> v;
        if(s.length()<10)return v;
        unordered_map<string,int>mp;
        for(int i=0; i+10<=s.length(); i++){
            mp[s.substr(i,10)]++;
        }
        for(auto& i:mp){
            if(i.second>1){
                v.push_back(i.first);
            }
        }
        return v;
    }
};
int main(){
    Solution s;
    string g="AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    vector<string>ans=s.findRepeatedDnaSequences (g);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
}