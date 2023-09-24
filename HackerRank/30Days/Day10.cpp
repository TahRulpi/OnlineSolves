#include <bits/stdc++.h>
#include<bitset>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    bitset<32> a(n);
    int arr[32] = {0};
    int count = 0;

    for(i = 0; i < 32; i++){
        if(a[i] == true){
            arr[count]++;
        }
        else
            count++;
    }
    sort(arr, arr+32);
    cout << arr[31];
    return 0;
}


/*string toBinary(unsigned n)
{
    if (n == 0) {
        return "";
    }

    return toBinary(n / 2) + to_string(n % 2);
}

int main()
{
    int n, i, count=0 ;
    cin >> n;
    count = 0;
    cout << toBinary(n) << endl;
    if(toBinary[n] == 1){
        count++;
    }
    cout << count<< endl;
    return 0;
}*/

