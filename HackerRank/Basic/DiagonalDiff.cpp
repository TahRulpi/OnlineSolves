#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */



int main(){
    int rc, i, j, arr[100][100];
    cin >> rc;
    int pd=0, sd=0;

    for(i = 0; i < rc; i++){
        for(j = 0; j < rc; j++){
            cin >> arr[i][j];

            if(i==j){
                pd = pd+ arr[i][j];
            }

            if(i+j==rc - 1){
                sd = sd+ arr[i][j];
            }
        }
    }
    cout << abs(pd-sd) << endl;

    return 0;
}
