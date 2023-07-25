#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int y;
    cin>>y;
    v.erase(v.begin()+y);
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a,v.begin()+b);
    cout<<v.size()<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}
