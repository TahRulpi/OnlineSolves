#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,a,i;
    int max=0;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>a;
        if(a>max)
        {
            max=a;
        }
    }
    cout<<max<<endl;
    return 0;

}



