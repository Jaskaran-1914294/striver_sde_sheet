#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++){
            for(int j=i;j<m;j++){
                swap(a[i][j],a[j][i]);
            }
        }
    }
};
int main(){
    int n ;
    cin>>n;
    vector<vector<int>>a(n);
    for(auto &i:a){
        for(auto &j:i){
            cin>>j;
        }
    }
    Solution ans;
    ans.rotate(a);
    for(auto i:a){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}