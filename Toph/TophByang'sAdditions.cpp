#include <iostream>
using namespace std;
int main(){
    int a,b,r1,r2,flag=0;
    cin>>a>>b;

    while(a!=0 && b!=0){
        r1=a%10;
        a=a/10;
        r2=b%10;
        b=b/10;
        if((r1+r2)>9){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Yes"<<endl;
    }else
        cout<<"No"<<endl;
    return 0;
}
