#include <stdio.h>
#define fun(a) for(int i=0;i<a;i++)
int main(void) {
	// your code goes here
	int n;
	scanf("%d" ,&n);
	int a,b,c;
	fun(n)
	{
	    scanf("%d %d %d" ,&a,&b,&c);
	    if(a==7||b==7||c==7)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

