#include<stdio.h>
#include<conio.h>

int toh(int n,char src,char dest,char aux);

int main()
{
	int n=3;
	toh(n,'A','C','B');
	return 0;
}

int toh(int n,char src,char dest,char aux)
{
	if(n==1)
	{
		printf("\nmove disk1 from %c to %c ",src,dest);
		return 0;
	}
	toh(n-1,src,aux,dest);
	printf("\n move disk %d from %c to %c ",n,src,dest);
	toh(n-1,aux,dest,src);
}
