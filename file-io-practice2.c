#include<stdio.h>
#include<string.h>
int main(){
FILE *a;
a=fopen("name2.txt","w");
char k[1];
printf("enter the text you want to input in  the file ");
scanf("%[^\n]c",&k);
 fprintf(a,"%s",k[1]);
    return 0;
}