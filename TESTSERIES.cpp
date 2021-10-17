#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long a, i=0 ,e = 0;
	    int im;
	    for(im=0;im<5;im++)
	    {
	        cin>>a;
	        if(a==1)
	        i++;
	        else if(a==2)
	        e++;
	    }
	    if(i>e)
	    cout<<"INDIA\n";
	    else if(e>i)
	    cout<<"ENGLAND\n";
	    else
	    cout<<"DRAW\n";
	}
	return 0;
}
