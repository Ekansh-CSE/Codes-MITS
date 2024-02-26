//binary search
#include <stdio.h>
int main() {
    int a[10];
    for(int i=0;i<10;i++){
    printf("enter element %d :",i+1);
    scanf("%d",&a[i]);
}   int n = sizeof(a) / sizeof(a[0]);
    int t;
    printf("Enter the element to search: ");
    scanf("%d", &t);
    int l = 0, h = n - 1;
    int f = 0;
    while (l <= h) {
        int m = l + (h - l) / 2;
        if (a[m] == t) {
            f = 1;
            printf("Element %d at index %d\n",f, m);
            break; }
        else if (a[m] < t)
            l = m + 1;
        else
            h = m - 1; }
    if (!f)
        printf("Element not present in the array\n");
    return 0; }