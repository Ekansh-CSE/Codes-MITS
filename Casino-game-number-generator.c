#include <stdio.h>
#include <stdlib.h>
//#include<time.h>
int main()
{
    int a, b,c;
    printf("following is the program to generate random numbers for a cassino game from 1 to 100\n");
    k:
    printf("Enter your number : ");
    scanf("%d",&c);

    a = rand() % 100;
    if(a==c){
        printf("u  won\n");
    }
    else printf("you lost\n");


    printf("number was : %d\n", a);
    printf("to play again press 1.\n");
    printf("to exit the generator press any number.\n");
    scanf("%d", &b);
    if (b == 1)
    {
        goto k;
    }
    return 0;
}