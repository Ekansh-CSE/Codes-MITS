//implementation of sorting algorithms
#include<stdio.h>
int main(){
int a[10],k;
for(int i=0;i<10;i++){
    printf("enter element %d :",i+1);
    scanf("%d",&a[i]);
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(a[j]<=a[j+1]){
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
        }}}
for(int i=0;i<10;i++){
    printf("%d \n",a[i]);
}
    return 0;
}