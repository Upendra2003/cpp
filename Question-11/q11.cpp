#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<string> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector<string> v;
    while(ss.good()){
        string substr;
        getline(ss,substr,',');
        v.push_back(substr);
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<string> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}