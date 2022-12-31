#include<stdio.h>
int main()
{
  float n,val;
  int sum=0;
  int b;
  double multi;
  printf("please enter the number");
  scanf("%f",&n);
  while(n!=-999)
  {
  	val=n-(int)n;
  	if(val==0)
  	{
  		sum+=n;
	  }

	  else{
	  	if(sum-(int)sum==0){
	  	multi=0;}
	  	else{
		multi=1;
	  	multi*=n;
	  }
	  printf("please enter number:");
	  scanf("%f",&n);
  }
  printf("please enter number:");
	  scanf("%f",&n);
   }


  printf("%d\n",sum);
  printf("%f\n",multi);
  return 0;
 } 
