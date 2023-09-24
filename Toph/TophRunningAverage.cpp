#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,i,a[100];
    double j=0,avg;
    cin>>N;
    for(i=1;i<=N;i++){
        cin>>a[i];
        j+=a[i];
        avg=j/i;
        cout<<setprecision(10)<<avg<<endl;
        //cout<<avg<<endl;
    }
    return 0;
}


