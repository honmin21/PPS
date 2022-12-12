#include<math.h>
void main()
{
	int principal,time,rate,compoundinterest;
	printf("enter principal,time,rate");
	scanf("%d %d %d",&principal,&time,&rate);
	compoundinterest=principal*pow((1+rate/100),time);
	printf("compoundinterest is %d",compoundinterest);
	return;
}
