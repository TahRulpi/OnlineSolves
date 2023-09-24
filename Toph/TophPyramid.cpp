#include <bits/stdc++.h>
using namespace std;

int main()
{
   int N,i,j,s;
   cin>>N;

   for(i=1;i<=N;i++){
      for(s=i;s<=N-1;s++){
         cout<<"#";
      }
      for(j=1;j<=i;j++){
         cout<<"*";
         if(j<i){
            cout<<"#";
         }
      }
      cout<<endl;
   }


   return 0;
}
