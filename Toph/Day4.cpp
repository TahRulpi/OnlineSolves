#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, age, af_3;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> age;

    if(age<0){
        age = 0;
        cout << "Age is not valid, setting age to 0.";
        af_3 = age + 3;
        cout << "\nYou are young.";
        cout << "\nYou are young.";
    }

    if(age>0 && age<13){
        cout << "You are young.";
        //age = age + 3;
        af_3 = age + 3;
        if(af_3 >= 13){
            cout << "\nYou are a teenager.";
        }
    }

    if(age >= 13 && age< 18){
        cout << "You are a teenager.";
        af_3 = age + 3;
          if(af_3 >= 18){
          cout << "\nYou are old.";
          }
    }

    if(age >= 18){
        cout << "You are old.";
        cout << "\nYou are old.";
    }
    }
    return 0;
}

