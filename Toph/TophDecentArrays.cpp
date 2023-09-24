#include <iostream>
using namespace std;
int main(){
    int N,i,flag=0;
    cin>>N;
    int ar[N];
    for(i=1;i<=N;i++){
        cin>>ar[i];
    }
    for(i=1;i<N;i++){
        if(ar[i]>ar[i+1]){
            cout<<"No"<<endl;
            break;
        }
    }
    if(i==N){
        cout<<"Yes"<<endl;
    }
    return 0;
}
