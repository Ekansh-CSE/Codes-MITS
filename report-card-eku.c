#include <stdio.h>
void grade(int a)
{
    int b;
    b = a;
    if (b <= 100 && b > 90)
    {
        printf("A1  ");
    }
    else if (b <= 90 && b > 80)
    {
        printf("A2  ");
    }
    else if (b <= 80 && b > 70)
    {
        printf("B1  ");
    }
    else if (b <= 70 && b > 60)
    {
        printf("B2  ");
    }
    else if (b <= 60 && b > 50)
    {
        printf("C1  ");
    }
    else if (b <= 50 && b > 40)
    {
        printf("C2  ");
    }
    else
        printf("FAIL");
}

// assuming there are 6 subjects in general
int main()
{
    int marks[6], e = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("enter marks for subject %d : ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int j = 0; j < 6; j++)
    {
        e = e + marks[j];
    }
    printf("|---------------------------------------------------------------------------|\n");
    printf("|                         R E P O R T   C A R D                             |\n");
    printf("|---------------------------------------------------------------------------|\n");
    printf("|S.No. |      SUBJECT          |  MARKS     |  PERCENTAGE    |   GRADE      |\n");
    printf("|------|-----------------------|------------|----------------|--------------|\n");
    printf("|  1   | Emerging Tech in CS   |    %d      |       %d       |", marks[0], marks[0]);
    printf("     ");
    grade(marks[0]);
    printf("     |\n");
    printf("|      |                       |            |                |              |\n");
    printf("|  2   | Digital Elec.         |    %d      |       %d       |", marks[1], marks[1]);
    printf("     ");
    grade(marks[1]);
    printf("     |\n");
    printf("|      |                       |            |                |              |\n");
    printf("|  3   | Mathematics           |    %d      |       %d       |", marks[2], marks[2]);
    printf("     ");
    grade(marks[2]);
    printf("     |\n");
    printf("|      |                       |            |                |              |\n");
    printf("|  4   | Engineering Chem.     |    %d      |       %d       |", marks[3], marks[3]);
    printf("     ");
    grade(marks[3]);
    printf("     |\n");
    printf("|      |                       |            |                |              |\n");
    printf("|  5   | Computer Programming  |    %d      |       %d       |", marks[4], marks[4]);
    printf("     ");
    grade(marks[4]);
    printf("     |\n");
    printf("|      |                       |            |                |              |\n");
    printf("|  6   | BEEE                  |    %d      |       %d       |", marks[5], marks[5]);
    printf("     ");
    grade(marks[5]);
    printf("     |\n");
    printf("|---------------------------------------------------------------------------|\n");
    printf("|        Your total Marks are : %d           Your CGPA is : %0.2f           |\n", e, (float)(e/ 6)/9.5);
    printf("|              Y O U R   O V E R A L L   G R A D E   I S   :  ");
    grade(e / 6);
    printf("          |\n");
    printf("|---------------------------------------------------------------------------|");
    return 0;
}