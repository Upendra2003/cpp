#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a,int b,int c,int d){
    int newArr[4]={a,b,c,d};
    int maxNum=0;
    for(int i=0;i<=4;i++){
        if(newArr[i]>maxNum){
            maxNum=newArr[i];
        }
    }
    cout<<maxNum<<endl;
    return maxNum;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}