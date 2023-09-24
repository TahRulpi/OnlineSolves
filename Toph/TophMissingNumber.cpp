#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,p,q,r,missing=0;
    cin>>N;
    cin>>p>>q>>r;
    missing=(N-(p+q+r));
    cout<<missing<<endl;

    return 0;
}

