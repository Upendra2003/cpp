#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    vector<int> queries;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        queries.push_back(x);
    }
    
    for(int i=0;i<q;i++){
        auto it=find(v.begin(),v.end(),queries[i]);
        if(it!=v.end()){
            auto low=lower_bound(v.begin(),v.end(),queries[i]);
            cout<<"Yes "<<(low-v.begin()+1)<<endl;
        }
        else{
            auto low=lower_bound(v.begin(),v.end(),queries[i]);
            cout<<"No "<<(low-v.begin()+1)<<endl;
        }
        
    }
    
    
    return 0;
}
