#include<bits/stdc++.h>
using namespace std;
vector<int> repeatedNumber(vector<int> &a) {
    int together = 0;
    int n = a.size();
    for(int i=1;i<=n;i++){
        together ^= i;
    }
    for(int i=0;i<n;i++){
        together ^= a[i];
    }
    int pos = 0;
    int temp = together;
    while(temp){
        if(temp&1){
            break;
        }
        pos++;
        temp = temp>>1;
    }
    int ans1 = 0;

    for(auto i:a){
        if(( i & (1<<pos) )){
            ans1 ^= i;
        }
    }
    for(int i=1;i<=n;i++){
        if(i & (1<<pos)){
            ans1 ^= i;
        }
    }
    int ans2 = ans1^together;
    for(auto i:a){
        if(i==ans2){
            return {ans2,ans1};
        }
    }
    return {ans1,ans2};
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
    }
    vector<int>ans = repeatedNumber(a);
    cout<<"Repeated Number : "<<ans[0]<<endl;
    cout<<"Missing Number : "<<ans[1]<<endl;
    cout<<endl;
}