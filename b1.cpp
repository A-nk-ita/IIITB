#include<stdio.h>
int main()
{
	int i=0,j=0;
	int t=1000000;
	int a[t],r[t];
	for(i=0;i<1000000;i++)
	{
		a[i]=t;
		t--;
	}   
	for(i=0;i<1000000;i++)
	for(j=i+1;j<1000000 ;j++)
	 while(a[j]<a[i])
	  j++;
	r[i]=j;  
	 
}
