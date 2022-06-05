#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int ans = -1e8;
        int curr=0;
        for(int i=0;i<a.size();i++){
            curr+=a[i];
            ans = max(ans,curr);
            if(curr<0){
                curr=0;
            }
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
    cout<<ans.maxSubArray(a)<<endl;
}