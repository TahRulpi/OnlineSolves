#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i;
    long factorial = 1.0;
    cin >> n;
    if (n < 0){
        return 1;
    }
    else{
      for(i = n; i >= 1; i--){
        factorial = factorial * i;
      }
    }
    cout << factorial;
    return 0;
}
