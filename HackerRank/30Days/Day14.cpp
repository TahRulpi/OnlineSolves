#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, i;
    int maximumDifference;
    cin >> n;
    vector<int> a;
    vector<int> elements;
    for(i = 0; i < n; i++){
        int e;
        cin >> e;

        a.push_back(e);
    }
    elements = a;
    sort(elements.begin(),elements.end());
    maximumDifference = elements.back() - elements.front();


    return 0;
}
