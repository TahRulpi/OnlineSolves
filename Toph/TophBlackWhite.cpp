#include <bits/stdc++.h>
typedef long long ll;
const int MAX = 2e5;
using namespace std;

char A[10000001],B[10000001];

int main() {
	//string A,B,n;
	//int n;
	cin >> A >> B;
	int l1=strlen(A);
    int l2=strlen(B);
    int n1=A[l1-1]-'0';
    int n2=B[l2-1]-'0';
	int n = n1+n2;

  	if((n1==0 && n2==0) || n1==n2 || n%2==0){
        cout<< "Black";
	}
	else
        cout<< "White";
	return 0;
}
