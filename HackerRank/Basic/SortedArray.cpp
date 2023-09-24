#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums[100], target, i;
    cout << "nums = ";
    cin >> nums[i] >> target;
    cout << "target = ";
    cin >> target;

    if(nums[i] == 0 || target == 0){
        cout << "-1, -1";
    }
    if(nums[i] == target){
        cout << "-1, -1";
    }

    return 0;

}
