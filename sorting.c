// to convert eng formating into decimal
#include <stdio.h>
#include <string.h>
int main()
{
    char k[10];
    printf("enter the number in words to get its decimal form : ");
    gets(k); // matlab valke fix krni padegi
             // idhar integer toh mene kahee liya hie nahi hai yrr
    if (strcmp(k,"one")==0||strcmp(k,"One")==0||strcmp(k,"ONE")==0){
        printf("1");}
    else if (strcmp(k,"two")==0||strcmp(k,"Two")==0||strcmp(k,"TWO")==0){
        printf("2");}
        else if (strcmp(k,"one")==0||strcmp(k,"One")==0||strcmp(k,"ONE")==0){
        printf("3");}
    else if (k == 'four' || k == 'Four'){
        printf("4");}
    else if (k == 'five' || k == 'Five'){
        printf("5");}
    else if (k == 'six' || k == 'Six'){
        printf("6");}
    else if (k == 'seven' || k == 'Seven'){
        printf("7");}
    else if (k == 'eight' || k == 'Eight'){
        printf("8");}
    else if (k == 'nine' || k == 'Nine'){
        printf("9");}
    else if (k == 'zero' || k == 'Zero'){
        printf("0");}*/
    else
        printf("");

    return 0;
}