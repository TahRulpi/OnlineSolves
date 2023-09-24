#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    //string N_temp;
    //getline(cin, N_temp);

    //int N = stoi(ltrim(rtrim(N_temp)));

    int n;
    cin>>n;

    if(n%2!=0){
        cout<<"Weird";
    }
    if(n%2==0 && n>2 && n<5){
        cout<<"Not Weird";
    }
    if(n%2==0 && n>6 && n<20){
        cout<<"Weird";
    }
    if(n%2==0 && n>20){
        cout<<"Not Weird";
    }

    return 0;
}

