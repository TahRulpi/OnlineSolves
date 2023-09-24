#include <iostream>
using namespace std;
int main()
{
   long long i,fact=1,N,f;
   cin>>N;
   if(N>=20)
   {
       cout<<"0000";
       return 0;
   }
   for(i=N;i>=1;i--){
      fact=fact*i;

   }
    fact=fact%10000;
    cout<<fact<<endl;
   return 0;
}
