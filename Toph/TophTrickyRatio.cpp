#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double r, ans, result,d;
	cin >> r;
	double pi = 3.14159;

	if(r>0 && r<100){
        ans = (2 * pi) * r;
        d = 2*r;
        result = ans/d;
        cout<< setprecision(6)<< result<<endl;
	}

	return 0;
}

