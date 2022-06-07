#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i = m-1;
        int j = n-1;
        int k = a.size();
        while(i>=0 and j>=0){
            if(a[i]>b[j]){
                a[k--]=a[i--];
            }
            else{
                a[k--]=b[j--];
            }
        }
        while(j>=0){
            a[k--]=b[j--];
        }
    }
};
int main(){
    int m,n;
    cin>>m>>n;
    vector<int>a(m+n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    Solution ans ;
    ans.merge(a,m,b,n);
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
}