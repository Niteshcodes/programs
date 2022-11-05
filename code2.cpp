#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,r,q,x,y,s;
	cin>>T;

	for(int i=0;i<T;i++)
	{        r=q=0;
        	 cin>>x>>y;
             r=x/y;
            
             q=x%y;
             
             s=r+q; 
             
             cout<<s<<"\n";
	}
	return 0;
}
