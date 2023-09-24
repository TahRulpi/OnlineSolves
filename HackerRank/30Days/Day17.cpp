#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, n, p, res;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> p;
        res = pow(n, p);
        if( n <= 0 || p<= 0){
        cout << "n and p should be non-negative" << endl;
    }
    else
        cout << res << endl;
    }

    return 0;
}
