#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string sf, sl;
    int avg = 0, n1, n2, n3, n4, i;
    int testScores[i];

    cin >>sf >> sl >> n1 >> n2 >> n3 >> n4;

    for(i = 0; i < sizeof testScores; i++){
            avg += testScores[i];
        }
    avg = avg / sizeof testScores;

    cout << "Name: " << sl << ", " << sf <<endl;
    cout << "ID: " << n1 << endl;

    if(avg >= 90){
            cout << "Grade: " << "O" << endl;// Outstanding
        }
        else if(avg >= 80){
            cout << "Grade: " << "E" << endl;// Exceeds Expectations
        }
        else if(avg >= 70){
            cout << "Grade: " << "A" << endl; // Acceptable
        }
        else if(avg >= 55){
            cout << "Grade: " << "P" << endl; // Dreadful
        }
        else if(avg >= 40){
            cout << "Grade: " << "D" << endl; // Dreadful
        }
        else{
            cout << "Grade: " << "T" << endl; // Troll
        }


    return 0;
}

