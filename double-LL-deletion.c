#include<stdio.h>
#include<stdlib.h>
struct k{
    int da;
    struct k *ne;
    struct k *pr;
};
void del(struct k *polo,int lolo){
    int i=1;
    //polo should be head
    struct k *lk=polo;
    while(i<lolo-1){
        lk=lk->ne;
        i++;
    }
    struct k* pk=lk->ne;
    lk->ne=pk->ne;
    pk->pr=NULL;
    struct k*lp=pk->ne;
    lp->pr=lk;
    pk->ne=NULL;
    free(pk);
}

int main(){
struct k *a=(struct k*)malloc(sizeof(struct k));
struct k *b=(struct k*)malloc(sizeof(struct k));
struct k *c=(struct k*)malloc(sizeof(struct k));
struct k *d=(struct k*)malloc(sizeof(struct k));
struct k *e=(struct k*)malloc(sizeof(struct k));
a->da=5;
b->da=6;
c->da=7;
d->da=8;
e->da=9;
a->ne=b;
a->pr=NULL;
b->ne=c;
b->pr=a;
c->ne=d;
c->pr=b;
d->ne=e;
d->pr=c;
e->ne=NULL;
e->pr=d;
struct k *nu=a;
del(nu,3);

    return 0;
}