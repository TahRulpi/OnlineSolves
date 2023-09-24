#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    int arr[100];

    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(i = (n-1); i >= 0; i--){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

  //  cout << arr;

  return 0;
}
