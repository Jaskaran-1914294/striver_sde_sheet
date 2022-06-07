#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

ll merger(ll *arr,ll s,ll mid,ll e){
    ll n1 = mid-s+1;
    ll n2 = e-mid;
    ll *a = new ll[n1];
    ll *b = new ll[n2];
    for(ll i=0;i<n1;i++){
        a[i] = arr[s+i];
    }
    for(ll i=0;i<n2;i++){
        b[i] = arr[mid+1+i];
    }
    ll ansHere = 0;
    ll i = 0, j = 0, k = s;
    while(i<n1 and j<n2){
        if(a[i]>b[j]){
            ansHere += (n1 - i);
            arr[k++] = b[j++];
        }
        else{
            arr[k++] = a[i++];
        }
    }
    while(i<n1){
        arr[k++] = a[i++];
    }
    while(j<n2){
        arr[k++] = b[j++];
    }
    return ansHere;
}
ll countInversion(ll *a,ll s,ll e){
    ll ans = 0;
    if(s<e){
        ll mid = (s+e)/2;
        ans += countInversion(a,s,mid);
        ans += countInversion(a,mid+1,e);
        ans += merger(a,s,mid,e);
    }
    return ans;
}
int main(){
    ll n ;
    cin >> n;
    ll *a = new ll[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<countInversion(a,0,n-1)<<endl;
    for(ll i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
}
