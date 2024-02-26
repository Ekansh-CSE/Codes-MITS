#include<stdio.h>
#include<stdlib.h>
struct k{
    int da;
    struct k *ne;
};
void del(struct k*polo,int jolo){
    //polo should be head
    int i=1;
    while(i<jolo-1){
        polo=polo->ne;
        i++;
    }
    struct k *lp=polo->ne;
    polo->ne=lp->ne;
    lp->ne=NULL;
    free(lp);
}
int main(){
struct k *a[10];
for(int i=0;i<10;i++){
    a[i]=(struct k*)malloc(sizeof(struct k));
}
for(int i=0;i<10;i++){
    scanf("%d",&a[i]->da);
    if(i<9){
        a[i]->ne=a[i+1];
    }
    else a[i]->ne=NULL;
}
    return 0;
}