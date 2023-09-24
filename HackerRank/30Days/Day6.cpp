#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;



void oddeven(char s[]){
        int i;

        for(i = 0; i < strlen(s); i++){
          if( i%2 == 0){
            cout << s[i]  ;
          }
        }
        cout << " " ;

        for(i = 0; i < strlen(s); i++){
          if(i%2 != 0){
            cout << s[i];
          }
        }
        cout << " " << endl;
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i;
    cin >> n;
    char s[10000];
    for (i = 0; i < n; i++ ){
        cin >> s;
        oddeven(s);
    }
    return 0;
}





