#include<stdio.h>

int main(){
int k,l=0;
printf("enter number of elements in the array : ");
scanf("%d",&k);
int a[k];
for(int i=0;i<k;i++){
printf("enter number at %d position : ",i+1);
scanf("%d",&a[i]);
}
printf("\n");
for(int p=0;p<k;p++){
for(int i=0;i<k;i++){
for(int j=l;j<=i;j++){
printf("%d  ",a[j]);
}
printf("\n");    
}
l++;
}
return 0;
}
