#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int n){
        vector<int> t = {1};
        vector<vector<int>> ans;
        ans.push_back(t);
        if (n == 1){
            return ans;
        }
        t.clear();
        t.push_back(1);
        t.push_back(1);
        ans.push_back(t);
        if (n == 2){
            return ans;
        }
        n -= 2;
        while (n){
            vector<int> nt;
            nt.push_back(1);
            for (int i = 0; i < t.size() - 1; i++){
                nt.push_back(t[i] + t[i + 1]);
            }
            nt.push_back(1);
            ans.push_back(nt);
            t = nt;
            n--;
        }
        return ans;
    }
};
int main()
{
    int n;
    cin >> n;
    Solution answer;

    vector<vector<int>> a = answer.generate(n);
    for (auto i : a){
        for (auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
}