#include<stdio.h>
int main(){
int a,b;
printf("ENTER TWO INTEGER:");
scanf("%d %d", &a,&b);

if(a==b){
	printf("Result: %d=%d",a,b);
}	
  else if(a>b){
	printf("Result: %d>%d",a,b);
}
else{
	printf("Result: %d<%d",a,b);
}
return 0;
}

