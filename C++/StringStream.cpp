#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> s;
	stringstream ss(str);
    int a;
    char ch;
    while(!ss.eof()){
        ss >> a;
        ss >> ch;
        s.push_back(a);
    }
    
    return s;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
