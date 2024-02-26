#include<stdio.h>
int main(){
FILE *a;
char b;
a=fopen("name.txt","r");
while((b=getc(a))!=EOF){
printf("%c",b);
}
    return 0;
}