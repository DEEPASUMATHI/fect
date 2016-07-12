#include<stdio.h>
int main(){
int n;
scanf("%d",n);
int res=fact(n);
printf("%d",res);
int fact(int n){
if(n==1)
return 0;
else
return n*fact(n-1);
}
return 0;
}
