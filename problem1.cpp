#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int nearestX = max(x1 , min(x2,xCenter));
        int nearestY = max(y1 , min(y2,yCenter));

        int dist = (nearestX - xCenter)*(nearestX - xCenter) + (nearestY - yCenter)*(nearestY - yCenter);
        return dist <= radius*radius;
    }
};
int main(){
    Solution s;
    cout<<s.checkOverlap(1, 0, 0, 1, -1, 3, 1)<<endl;
   
    return 0;
}