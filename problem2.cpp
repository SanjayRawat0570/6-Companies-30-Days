#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    static int findTheWinner(int n, int k) {
        int winner=1;
        for(int i=2; i<=n; i++)
            winner=(winner+(k-1))%i+1;
        return winner;
    }
};
int main(){
    Solution s;
    cout<<s.findTheWinner(5, 2)<<endl;
    return 0;
}