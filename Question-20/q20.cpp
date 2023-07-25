#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin>>q;
    map<string,vector<int>> m;
    while(q--){
        int x,mark;
        string name;
        cin>>x>>name;
        switch (x) {
            case 1: {
                cin>>mark;
                m[name].push_back(mark);
                break;
            }
            case 2:{
                m.erase(name);
                break;
            }
            case 3:{
                auto it=m.find(name);
                int total_marks=0;
                if(it!=m.end()){
                    vector<int> &marks=it->second;
                    for(int i=0;i<marks.size();i++){
                        total_marks+=marks[i];
                    }
                    cout<<total_marks<<endl;
                }else{
                    cout<<total_marks<<endl;
                }
                break;
            }
        }
    }
    return 0;
}



