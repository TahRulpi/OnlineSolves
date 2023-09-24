#include <bits/stdc++.h>
using namespace std;


int main(){
    int a[100],b[100],i,j;
    int count_a=0;
    int count_b=0;

     for (i=0; i<3; i++) {
        cin>>a[i];
    }

    for (i=0; i<3; i++) {
        cin>>b[i];
    }

    for(i=0; i<3;i++){
        if(a[i]>b[i]){
            count_a++;
        }
        else if(a[i]<b[i]){
            count_b++;
        }
    }

    cout<<count_a<<" "<<count_b<<endl;

    return 0;
}
