#include<iostream>
using namespace std;

int main()
{
	int amt,R500,R100,R50,R10,R5,R1,i;
	cin>>amt;

	R500=amt/500;
	amt=amt%500;

	R100=amt/100;
	amt=amt%100;

	R50=amt/50;
	amt=amt%50;

	R10=amt/10;
	amt=amt%10;

	R5=amt/5;
	amt=amt%5;

	R1=amt;

	for(i=0; i<R1; i++){
        cout<<"1 ";
    }
    for(i=0; i<R5; i++){
        cout<<"5 ";
    }
    for(i=0; i<R10; i++){
        cout<<"10 ";
    }
    for(i=0; i<R50; i++){
        cout<<"50 ";
    }
    for(i=0; i<R100; i++){
        cout<<"100 ";
    }
    for(i=0; i<R500; i++){
        cout<<"500 ";
    }

	//cout<<R1<<R5<<R10<<R50<<R100<<R500;


	return 0;
}
