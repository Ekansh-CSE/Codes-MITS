#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    char b[10];
    printf("enter the thing among stone/paper/scissor which the opponents got:\n ");
    printf("user 1: "); gets(a); 
    printf("user 2: "); gets(b); 

    if ((!strcmp(a, "stone")) && (!strcmp(b, "stone")))
    {
        printf("it's a tie..");
    }
    else if ((!strcmp(a, "paper")) && (!strcmp(b, "paper")))
    {
        printf("it's a tie..");
    }
    else if ((!strcmp(a, "scissor")) && (!strcmp(b, "scissor")))
    {
        printf("it's a tie..");
    }
    else if ((!strcmp(a, "stone")) && (!strcmp(b, "scissor")))
    {
        printf("opponent 1st won");
    }
    else if ((!strcmp(a, "scissor")) && (!strcmp(b, "paper")))
    {
        printf("opponent 1st won");
    }
    else if ((!strcmp(a, "paper")) && (!strcmp(b, "stone")))
    {
        printf("opponent 1st won");
    }
    else if ((!strcmp(b, "stone")) && (!strcmp(a, "scissor")))
    {
        printf("opponent 2nd won");
    }
    else if ((!strcmp(b, "scissor")) && (!strcmp(a, "paper")))
    {
        printf("opponent 2nd won");
    }
    else if ((!strcmp(b, "paper")) && (!strcmp(a, "stone")))
    {
        printf("opponent 2nd won");
    }
    else
        printf("enter the correct spelling of stone,paper,scissor");

    return 0;
}