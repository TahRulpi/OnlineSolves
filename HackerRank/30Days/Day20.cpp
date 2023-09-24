#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, nums[100], i, temp, j, count = 0;
    cin >> n;

    for(i = 0; i < n; i++){
        cin >> nums[i];
    }
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                count++;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        cout << nums[i] << " " << endl;
    }
    cout << "Array is sorted in "<< count << " swaps." << endl;
    cout << "First Element: " << nums[0] << endl;
    cout << "Last Element: " << nums[n-1] << endl;

    return 0;
}
