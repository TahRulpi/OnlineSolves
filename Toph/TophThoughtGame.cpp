#include <iostream>
using namespace std;
int main()
{
    int t,i,x,y,sum;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>x>>y;
        sum=(x+y)/2;
        if(sum%2==0){
           cout<<"Sadia will be happy."<<endl;

        }
        else{
           cout<<"Oops!"<<endl;
        }
    }
    return 0;
}
