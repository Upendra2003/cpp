#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin>>q;
    set<int> s;
    while(q--){
        int y,x;
        cin>>y>>x; 
        switch(y){
            case 1: s.insert(x);
                    break;
            case 2: s.erase(x);
                    break;
            case 3: {
                    auto it=s.find(x);
                    if(it!=s.end()){
                        cout<<"Yes"<<endl;
                    }else{
                        cout<<"No"<<endl;
                    }
                    break;
                    }
            default:break;
        }   
    }
    return 0;
}



