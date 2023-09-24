#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,phn[8], i;
    string name,number,que;
    cin >> n;
    map <string,string> phonebook;
    for(i = 0; i < n; i++){
        cin >> name >> number;
        phonebook[name] = number; //storing in phonebook

        //phonebook.insert(pair<string,string>(name,number)); == phonebook[name] = number;
    }

    while(cin >> que){
      //  map <string,string> :: iterator itr;
      //  itr = phonebook.find(que);
        if(phonebook.find(que) != phonebook.end()){ //if the search found
            cout << que << "=" << phonebook.find(que) -> second << endl; //second means in number
        //    cout << itr -> first << "=" << itr -> second << endl;
        }
        else
            cout << "Not found" << endl;
    }
    return 0;
}

