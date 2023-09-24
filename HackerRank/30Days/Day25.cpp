#include<iostream>
using namespace std;

int main()
{
   int n,i, num;

   //cout << "Enter number: ";
   cin >> n;

   //check for prime number
   for(i = 0; i < n; i++){
    cin >> num;
    
    int count = 0;
    
    for (int j = 2; j <= num/2; j++)
    {
      if (num % j == 0)
      {
         count=1;
         break;
      }

    }

   if (num == 1){
      cout << "Not prime" << endl;
   }
   else{
       if(count==0){
           cout <<"Prime" << endl;
       }
       else{
      cout << "Not prime" << endl;
   }
  }
 }

   return 0;
}