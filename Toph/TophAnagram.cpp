#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A,B;
    int l1,l2,i,j,ang=0, n_ang=0;
    getline (cin,A);
    getline (cin,B);

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    if(A==B){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}
