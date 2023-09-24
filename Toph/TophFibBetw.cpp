#include <bits/stdc++.h>
using namespace std;

int main() {
   int L,R;
   set<int>ve;
   cin>>L>>R;
   if(L<=0) ve.insert(0);
   if(L<=1) ve.insert(1);
   int a=0;
   int b=1;
   int sum=0;
   while(sum<=R){
       sum = (a+b);
       if(sum>=L) ve.insert(sum);
        a=b;
        b=sum;
    }
     int len = ve.size()-3,k=0;
     for(auto it:ve){
         if(len>=0)
            cout<<it<<"\n",len--;
     }
return 0;
}

