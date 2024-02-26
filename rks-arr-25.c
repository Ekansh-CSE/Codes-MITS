#include<stdio.h>
int main(){
int l,n;
printf("enter the number of elements in the array : ");
scanf("%d",&l);
n=l;
int k[l],m[n];
int temp;
for(int i=0;i<l;i++){
    printf("enter data at %d position ",i+1);
    scanf("%d",&k[i]);
}
for(int i=0;i<l;i++){
    printf("enter index for %d number  ",k[i]);
    scanf("%d",&m[i]);
    //k[m[i]]=k[i];
}
for(int i=0;i<l;i++){
    temp=k[m[i]];
    k[m[i]]=k[i];
    k[i]=temp;
}
for(int i=0;i<l;i++){
    printf("%d  ",k[i]);
}
    return 0;
}