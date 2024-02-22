#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
/* CAC SO XUAT HIEN TRONG MANG
INPUT: 1 2 3 3 3 3 1 9 9 0
OUTPUT: 1 2 3 9 0
*/
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        int ok = 1;
        for (size_t j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
