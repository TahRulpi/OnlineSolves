#include<bits/stdc++.h>
//#include <string>
using namespace std;
int main()
{
    string s;
    getline (cin, s);
    string rev = string(s.rbegin(),s.rend());
    if(s==rev){
      cout<<"yes"<<endl;
    }else{
    cout<<"no"<<endl;
    }
    //cout<<rev<<endl;
    return 0;
}
