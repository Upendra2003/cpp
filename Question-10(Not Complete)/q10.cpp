#include<bits/stdc++.h>
using namespace std;

int main(){
    long int N,S,P,Q;
    cin>>N>>S>>P>>Q;
    vector<long int> vector;
    vector.push_back(S%2147483648);
    for(int i=1;i<N;i++){
        vector.push_back(vector[i-1]*P+(Q%2147483648));
    }
    for(int i=0;i<vector.size();i++){
        cout<<vector[i]<<" ";
    }
    sort(vector.begin(),vector.end());
    auto count=unique(vector.begin(),vector.end())-vector.end();
    cout<<count;
    return 0;
}