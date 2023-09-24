#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,r;
    cin>>s;
    for(int i=0;i<s.length();i++){
          // if(s[i]!='a' && s[i]=='e' && s[i]=='i' && s[i]=='o' && s[i]=='u' && s[i]=='A' && s[i]=='E'  && s[i]=='I' && s[i]=='O' && s[i]=='U' && s[i]=='y' && s[i]=='Y'){
             if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E'  || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='y' || s[i]=='Y'){
              continue;
             }
             else
              r+='.';
              r=r+(char) tolower(s[i]);
            // r+= towlower(s[i]);
            }

    cout<<r;

  //  return 0;
}




