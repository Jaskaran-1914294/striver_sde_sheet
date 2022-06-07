#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int f = a[0];
        int s = a[0];
        while(1){
            f = a[a[f]];
            s = a[s];
            if(f==s){
                break;
            }
        }
        s = a[0];
        while(s!=f){
            f = a[f];
            s = a[s];
        }
        return f;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
    }
    Solution ans;
    cout<<ans.findDuplicate(a)<<endl;
    
}