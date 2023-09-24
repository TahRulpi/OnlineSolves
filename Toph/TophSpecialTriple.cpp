#include <iostream>
using namespace std;

int main() {
	int X, ans,i, ans1;
	cin >> X;
	ans = X/3;
	ans1= X/3+1;
	if (X>=3 && X<=100){

	    if(X%3==0){
	        for(i=0;i<3;i++){
            cout<<ans<<" ";
	    }
	    }

	    else if(X%3==1){
	        for(i=0;i<3-1;i++){
            cout<<ans<<" ";
	    }
	    cout<<ans1<<" ";
	    }

	    else if(X%3==2){
	        for(i=0;i<3-1;i++){
            cout<<ans1<<" ";
	    }
	    cout<<ans<<" ";
	    }

	}

	return 0;
}

