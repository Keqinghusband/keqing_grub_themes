#include<bits/stdc++.h>
using namespace std;
const int N=1e7+7;
int f[N];
int main(){
    int a;
    cin>>a;
    f[1]=1;f[2]=1;
    for(int i=3;i<=a;i++){
        f[i]=f[i-1]+f[i-2];
    }
    cout<<f[a];
    return 0;
}