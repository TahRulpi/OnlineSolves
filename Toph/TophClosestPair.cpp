#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main() {
    //sync;
    vector<pair<ll,ll>> v;

    int n,i,j,a,b;
    cin>>n;

    for(i=0;i<n;i++){
            cin>>a>>b;
            v.push_back({a,b});
    }
    //sort(v.begin(),v.end());

    double ans = INT_MAX;

    for(int i=0; i<n; i++){
        double d = sqrt(pow(abs(v[i].first-v[i+1].first),2) + pow(abs(v[i].second-v[i+1].second),2));
        ans = min(d,ans);
    }
     cout<< setprecision(14)<< fixed;
     cout<< ans << "\n";
     return 0;
}
