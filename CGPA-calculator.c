#include <stdio.h>
void perc(int x, int y)
{
    int k = 0;
    k = y / x;
    printf("youc CGPA is : %0.2f", (float)k / 9.5);
}
int main()
{
    int a, c = 0;
    printf("enter the total number of subjets: ");
    scanf("%d", &a);
    int b[a];

    for (int i = 0; i < a; i++)
    {
        printf("enter marks of subject %d : ", i + 1);
        scanf("%d", &b[i]);
    }
    for (int j = 0; j < a; j++)
    {
        c += b[j];
    }
    perc(a, c);
    return 0;
}