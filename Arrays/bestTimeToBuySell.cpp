#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n = a.size();
        int max_on_right = a[n-1];
        int ans = 0;
        for(int i=n-2;i>=0;i--){
            int ansHere = max_on_right - a[i];
            ans = max(ans,ansHere);
            max_on_right = max(max_on_right,a[i]);
        }
        return ans;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
    }
    Solution ans ;
    cout << ans.maxProfit(a) << endl;
}