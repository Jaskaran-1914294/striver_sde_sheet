#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        int n = a.size();
        int s = a[0][0];
        int e = a[0][1];
        vector<vector<int>>ans;
        
        for(int i=1;i<n;i++){
            int sHere = a[i][0];
            int eHere = a[i][1];
            if(sHere<=e){
                e=max(e,eHere);
            }
            else{
                ans.push_back({s,e});
                s = sHere;
                e = eHere;
            }
        }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(2,0));
    for(int i=0;i<n;i++){
        cin>>a[i][0];
        cin>>a[i][1];
    }
    Solution ans;
    vector<vector<int>>b = ans.merge(a);
    for(auto i:b){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}