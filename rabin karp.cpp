#include<stdio.h>
#include<string.h>
int main()
{
	int t[10]={1,1,0,1,1,1,0,1,0,1};
  int idx[10];
  memset(idx,0,sizeof(idx));
	int f=0,count=0;
	int x=0,y=0,c=1,k=3;
	int p[3]={1,0,1};
	for(int j=0;j<3;j++){
	 x=(x*2+t[j]);
	 y=(y*2+p[j]);	
	 c=c*2 ;
	}
  c/=2;
	for(int i=3;i<=10;i++){
		if(x==y){
    int j;
		for(j=0;j<3;j++){
		 	if(p[j]!=t[i-3+j]){
		 	 break;
			}
		 }
     if(j == 3){
  		//printf("Pattern found");
      idx[count] = i-3;
      count++;
      }
    }
    x=x-c*t[i-3]; 
		x=x*2+t[i];		
	 }
   printf("Total patterns found at %d\n",count);
   for(int i=0;i<count;i++)
   	printf("%d ",idx[i]);
}
						
						
            
            
