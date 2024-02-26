#include<stdio.h>
#include<math.h>
void sum(float a, float b){
    printf("the sum is %f",a+b);
}
void dif(float a, float b){
    printf("the difference is %f",a-b);
}
void multi(float a, float b){
    printf("the product is %f",a*b);
}
void div(float a, float b){
    printf("the sum is %f",(float)a/b);
}
void rem(float a, float b){
    printf("the sum is %d",(int) a%(int)b);
}
void power(float a, float b){
    int k=0;
    k=pow(a,b);
    printf("the number is %f",k);
}
void root(float a){
    int k=0;
    k=pow(a,1/2);
    printf("the under root is %f",(float)k);
}
void logarithm(int a){
    float k;
    k=log(a);
    printf("the log is %f",k);
}
void sine(float a){
    int k=0;
    k=sin(a);
    printf("the value is %f",(float)k);
}
void cosine(float a){
    int k = 0;
    k=cos(a);
    printf("the value is %f",(float)k);
}
    void tangent(float a){
    int k = 0;
    k=tan(a);
    printf("the value is %f",(float)k);

}
int main(){
    int a=0,b=0;
    float c,d,e,f;
    printf("Enter 1 for Sum.\n");
    printf("Enter 2 for difference.\n");
    printf("Enter 3 for multiplication.\n");
    printf("Enter 4 for Division.\n");
    printf("Enter 5 for Modulus.\n");
    printf("Enter 6 for power of a number.\n");
    printf("Enter 7 for root of a number.\n");
    printf("Enter 8 for log base e.\n");
    printf("Enter 9 for sine of a number.\n");
    printf("Enter 10 for cosine of a number.\n");
    printf("Enter 11 for Tangent of a number.\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("enter the first number: ");
        scanf("%f",&c);
        printf("enter the second number: ");
        scanf("%f",&d); sum(c,d); break;
       case 2:
        printf("enter the first number: ");
        scanf("%f",&c);
        printf("enter the second number: ");
        scanf("%f",&d); dif(c,d); break;
       case 3:
        printf("enter the first number: ");
        scanf("%f",&c);
        printf("enter the second number: ");
        scanf("%f",&d); multi(c,d); break;
        case 4:
        printf("enter the first number: ");
        scanf("%f",&c);
        printf("enter the second number: ");
        scanf("%f",&d); div(c,d); break;
        case 5:
        printf("enter the first number: ");
        scanf("%f",&c);
        printf("enter the second number: ");
        scanf("%f",&d); rem(c,d); break;
        case 6:
        printf("enter the number: ");
        scanf("%f",&c);
        printf("enter the power: ");
        scanf("%f",&d); power(c,d); break;
        case 7:
        printf("enter the number: ");
        scanf("%f",&c); root(c);
        break;
        case 8:
        printf("enter the number: ");
        scanf("%f",&c); logarithm((int)c);
        break;
        case 9:
        printf("enter the number: ");
        scanf("%f",&c); sine(c);
        break;
        case 10:
        printf("enter the number: ");
        scanf("%f",&c); cosine(c);
        break;
        case 11:
        printf("enter the number: ");
        scanf("%f",&c); tangent(c);
        break;
    }
    return 0;
}