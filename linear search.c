//linear search
#include<stdio.h>
int main(){
int a[10],k;
for(int i=0;i<10;i++){
    printf("enter the element at %d ",i+1);
    scanf("%d",&a[i]);
}
printf("enter the number you want to search ");
scanf("%d",&k);
for(int i=0;i<10;i++){
    if(a[i]==k){
        printf("%d position \n",i+1);
    }
}

    return 0;
}
