#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& a) {
        int n = a.size();
        int s=0,mid=0,e=n-1;
        while(mid<=e){
            if(a[mid]==0){
                swap(a[s],a[mid]);
                mid++;
                s++;
            }
            else if(a[mid]==1){
                mid++;
            }
            else{
                swap(a[e],a[mid]);
                e--;
            }
        }
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
    ans.sortColors(a);
    for(auto i:a){
        cout<<i<<" ";
    }
}