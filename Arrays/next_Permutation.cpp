#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &a){
        int n = a.size();
        int i = n - 2;
        if (n == 1)return;

        if (n == 2){
            swap(a[0], a[1]);
            return;
        }
        for (; i >= 0; i--){
            if (a[i] < a[i + 1]){
                break;
            }
        }

        if (i == -1){
            reverse(a.begin(), a.end());
            return;
        }
        int j = n - 1;

        for (; j >= 0; j--){
            if (a[j] > a[i]){
                break;
            }
        }
        cout << i << " " << j << endl;
        swap(a[i], a[j]);

        reverse(a.begin() + i + 1, a.end());
    }
};
/*

* Important test cases :-
[2,3,1]
[1,2,3]
[3,2,1]
[1,1,5]
[1,3,2]
[1,2]
[2,1]
[1,2,3,4,5,34,2,1,2]
[1,3,2]
[1,3,2]
[1,2,0,3,0,1,2,4]


* Algoritham:-
1> Just Start a point from right where a[i]<a[i+1]
2> Find a pos where a[pos]>a[i]
3> Swap these two
4> Reverse (i+1->>n)




*/

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a){
        cin >> i;
    }
    Solution ans;
    ans.nextPermutation(a);
    for (auto i : a){
        cout << i << endl;
    }
}