#include <bits/stdc++.h>
#include<bitset>
using namespace std;

int main(){
    int arr[6][6], i, j;
    int max = -100, sum = 0;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            cin >> arr[i][j];
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            sum =  arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] arr[i+2][j+2];
            if(sum > max){
                max = sum;
            }
        }
    }
    cout << max << endl;

    return 0;
}
