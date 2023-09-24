#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,i,j,sum=0l;
    double avg;
    cin>>N;
    for(i=1;i<=N;i++){
        cin>>j;
        //j+=a[i];
        sum=sum+j;
        avg=float(sum)/i;
        cout<<setprecision(10)<<avg<<endl;
    }
    return 0;
}


