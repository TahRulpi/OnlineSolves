#include<bits/stdc++.h>
using namespace std;
main(){
    int N,x,i,flag = 0;
    cin>>N;
    for(i=2;i<=N-1;i++){
       if(N%i==0){
            flag = 1;
            break;
       }
    }
    if(flag==1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}

