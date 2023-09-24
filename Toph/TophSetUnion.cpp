#include <iostream>
using namespace std;

int main() {
    int N,M,i,j,k,l,arr[50],arr2[50],newarr[50][50];
    cin>>N>>M;
    for(i=0;i<N;i++){
        cin>>arr[i];
    }
    for(j=0;j<M;j++){
        cin>>arr2[j];
    }

    for(i=0;i<N;i++){
        cout<<arr[i];
    }
    for(j=0;j<M;j++){
        cout<<arr2[j];
    }
    cout<<newarr[i][j];

    return 0;
}

