#include<stdio.h>
int main()
{
	int a,b,sum,dif,mul;
	scanf("%d %d",&a,&b);
	sum=a+b;
	dif=a-b;
	mul=a*b;
	if(sum>dif&&sum>mul)
		printf("%d\n",sum);
	else if(dif>sum&&dif>mul)
		printf("%d\n",dif);
	else
		printf("%d\n",mul);
	return 0;
}

