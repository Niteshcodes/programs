#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N,X,Y;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    std::cin>>N>>X>>Y;
	    if(Y%X==0&&(Y/X)<=N)
	    {
	        std::cout<<"yes"<<"\n";
	    }
	    else if(Y==0)
	    {
	        std::cout<<"Yes"<<"\n";
	    }
	    else
	    {
	        std::cout<<"no"<<"\n";
	    }
	}
	return 0;
}
