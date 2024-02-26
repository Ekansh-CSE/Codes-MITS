//basic prgram for linked list
#include<stdio.h>
struct a{
    int p;
    struct a *b;
};
int main(){
struct a l[10];
for(int i=0;i<10;i++){
    printf("enter the values for linked list %d index ",i+1);
    scanf("%d",&l[i].p);
}
for(int j=0;j<10;j++){
    if(j<9)
    l[j].b=l[j+1].p;
else 
l[j].b=NULL;
}
for(int i=0;i<10;i++){
    printf("%d\n",l[i].p);}
    return 0;
}