#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> a;
    int n, k, q;
    cin >> n >> q;
    
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> k;
        a[i].resize(k);
        for(int j = 0; j < k; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < q; i++){
        cin >> n >> k;
        cout << a[n][k] << endl;
    }
    
    return 0;
}