#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,p;
    cin >> s;
    int i;
    int size = s.length();
   // int st = size/2;
    for (i = 1; i < size/2; i++){
       if(s[i] == s[size-i-1]){
        cout << "true";
       }
       else
        cout << "false";

    }



    return 0;
}



