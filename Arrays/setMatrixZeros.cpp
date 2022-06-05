#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &a)
{
    bool check = !a[0][0];
    int n = a.size();
    int m = a[0].size();

    bool r = 0, c = 0;
    for (int j = 0; j < m; j++){
        if (a[0][j] == 0){
            r = 1;
        }
    }
    for (int i = 0; i < n; i++){
        if (a[i][0] == 0){
            c = 1;
        }
    }
    // Marking Zeros
    for (int i = 1; i < n; i++){
        for (int j = 1; j < m; j++){
            if (a[i][j] == 0){
                a[0][j] = 0;
                a[i][0] = 0;
            }
        }
    }

    // print(a);

    // Filling with zeros
    for (int i = 1; i < n; i++){
        if (a[i][0] == 0){
            for (int j = 0; j < m; j++){
                a[i][j] = 0;
            }
        }
    }
    for (int j = 1; j < m; j++){
        if (a[0][j] == 0){
            for (int i = 0; i < n; i++){
                a[i][j] = 0;
            }
        }
    }

    if (check){
        // Both
        for (int j = 0; j < m; j++){
            a[0][j] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            a[i][0] = 0;
        }
    }
    if (r){
        for (int j = 0; j < m; j++){
            a[0][j] = 0;
        }
    }
    if (c){
        for (int i = 0; i < n; i++){
            a[i][0] = 0;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    setZeroes(a);
    for (auto i : a){
        for (auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
}