#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y,m,ans;
    cin>>X>>Y;
    m=Y%X;
    ans=X-m;
    if(m==0){
        ans=0;
    }
    cout<<ans<<endl;

}

