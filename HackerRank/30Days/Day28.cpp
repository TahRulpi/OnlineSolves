#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, index = 0;
    cin >> n;
    char name[30][20];

    for(int i = 0; i < n; i++){
        char firstname[20], email[50], ID[11] = "@gmail.com";
        cin >> firstname >> email;

        if (strstr(email, ID)!= NULL){
            strcpy(name[index], firstname);

            index++;
        }
    }

    for(int i = 0; i < index; i++){
        for(int j = i+1; j < index; j++){
            if(strcmp(name[i], name[j]) > 0){
                char temp[20];
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    for(int i = 0; i < index; i++){
        cout << name[i] << endl;
    }

    return 0;
}
