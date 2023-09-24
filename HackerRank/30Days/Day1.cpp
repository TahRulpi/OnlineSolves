#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,r;
    double b,p;
    string st1 = "HackerRank ", st2;
    cin>>a>>b;
    getline(cin, st2);
    r=a+b;
    p=b+b;
    string res = st1 + st2;
    cout<<r<<"\n"<<p<<"\n"<<res<<endl;
    return 0;
}
