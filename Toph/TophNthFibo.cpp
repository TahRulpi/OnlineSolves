#include<bits/stdc++.h>
using namespace std;

int fib(int N){
    if(N==1){
        return 1;
    }
    if(N==2){
        return 1;
    }
    return fib(N-1)+fib(N-2);

}
int main(){
    int N;
    cin>>N;
    cout<<fib(N)<<endl;
    return 0;
}
