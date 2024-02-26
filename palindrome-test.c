#include<stdio.h>
int main(){
int a=0,b=0,c=0,k=0;
printf("enter the number ");
scanf("%d",&a);
k=a;
while(a!=0){
    b=a%10;
    c=c*10+b;
    a=a/10;
}
if(k==c) printf("it is a palindrome number");
else printf("it is not a palindrome number");
    return 0;
}