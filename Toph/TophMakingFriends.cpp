#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cin>>n;
    for(i=2;i<=n;i++){
        if(n%i==0){
            cnt++;
            //cout<<cnt<<endl;
        }
    }
    cout<<cnt<<endl;

    return 0;
}

