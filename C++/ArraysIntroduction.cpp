#include <iostream>
#include <vector>
using namespace std;
#define loop(i, n) for(int i = 0; i < n; ++i)

int main() {
    int n; 
    cin >> n;
    vector<int> arr(n);
    loop(i, n){
        cin >> arr[i];
    }
    loop(i, n){
        cout << arr[n - i - 1] << " ";
    }
    return 0;
}