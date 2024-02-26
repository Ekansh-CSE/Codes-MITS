#include<stdio.h>
#include<math.h>
int main(){
int a[5],k=0;
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for(int j=0;j<5;j++){
for(int i=0;i<5;i++){
    if(fabs(a[i])<=fabs(a[i+1])){
        k=a[i];
        a[i]=a[i+1];
        a[i+1]=k;
    }
    else continue;
}}
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}
    return 0;
}