#include <bits/stdc++.h>

#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl


using namespace std;
typedef long long ll;

string s;

int main (){
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 's') cout << '$';
        else if (s[i] == 'i') cout << '!';
        else if (s[i] == 'o') cout << "()";
        else{
            if (i == 0 and isalpha(s[i])){
                s[i] = toupper(s[i]);
            }
            cout << s[i];
        }
    }
    cout << "." << endl;
    return 0;
}
