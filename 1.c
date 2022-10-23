#include "load.h"
#include <stdio.h>

int main()
{
	int a=0,b=1;

	while(b)
	{
		printf("Choose library:\n1 - array\n2 - matrix\n3 - quit\n");
		scanf("%d",&a);
		if(a==1)
			LoadRun("arrayfuncs.dll");
		if(a==2)
			LoadRun("matrixfuncs.dll");
		if(a==3)
			b=0;
	}
	return 0;
}
