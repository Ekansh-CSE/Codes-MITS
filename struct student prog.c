#include<stdio.h>
#include<string.h>
struct student{
char name[20];
char branch[10];
float cgpa;

};
int main(){
struct student s1,s2,s3;
strcpy(s1.name,"xyz");
strcpy(s1.branch,"CSE");
s1.cgpa=9.23;
strcpy(s2.name,"xyz");
strcpy(s2.branch,"Et");
s2.cgpa=7.23;
strcpy(s3.name,"ttttt");
strcpy(s3.branch,"Csd");
s3.cgpa=8.23;
  printf("name = %s , branch = %s,cgpa = %f\n",s1.name,s1.branch,s1.cgpa); 
   printf("name = %s , branch = %s,cgpa = %f\n",s2.name,s2.branch,s2.cgpa); 
   printf("name = %s , branch = %s,cgpa = %f\n",s3.name,s3.branch,s3.cgpa); 
    
    
    
    return 0;
}