#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,q;
    cin>>n>>q;
    vector<vector<int>> arrays;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vector<int> temp;
        for(int j=0;j<k;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        arrays.push_back(temp);
    }

    vector<int> storeQueryAns;
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        storeQueryAns.push_back(arrays[a][b]);
    }

    for(int i=0;i<storeQueryAns.size();i++){
        cout<<storeQueryAns[i]<<endl;
    } 
    


    return 0;
}