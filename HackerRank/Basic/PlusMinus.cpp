#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    int ar[100];
    cin >> n;
 //   int size =  sizeof ar;
    float p = 0,ne = 0, z = 0;
    float resp, resn, resz;

    for(i = 0; i < n; i++){
        cin >> ar[i];

     if(ar[i] > 0){
        p++ ;
    }

     else if(ar[i] < 0){
        n++;
    }

    //if(ar[i] == 0){
    else if(ar[i] == 0){
        z++;
    }

   resp = p/n;
   resn = ne/n;
   resz = z/ n;

    cout << resp << "\n" << resn <<"\n" << resz <<endl;
    return 0;
    }
}




/*#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



void plusMinus(vector<int> arr) {
    int size = arr.size();
    int i;
    float p = 0, n = 0, z = 0;
    float resp, resn, resz;

    for(i = 0; i < size; i++){

    if(arr[i] > 0){
        p++;
     }
     if(arr[i] < 0){
        n++;
     }
     if(arr[i] == 0){
        z++;
     }
    }

    resp = p/size;
    resn = n/size;
    resz = z/size;

    cout << resp << "\n" << resn <<"\n" << resz <<endl;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}*/
