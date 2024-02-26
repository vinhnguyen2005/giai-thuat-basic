#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
/* Tan so xuat hien của số trong mang
*/
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int cnt[100] = {0};
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }
    int max = 0, b;
    for (size_t i = 0; i < n; i++)
    {
        if(max < cnt[a[i]])
        {
            max = cnt[a[i]];
            b = a[i];
        }
        else if(max == cnt[a[i]])
        {
            if (b > a[i])
            {
                b = a[i];
            }    
        }
    }
    printf("%d %d", b, max);
     
    
    return 0;
}
