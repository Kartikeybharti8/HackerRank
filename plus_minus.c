#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    float neg = 0, zer = 0, pos = 0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > 0)
        {
            pos++;    
        }
        else if(arr[i] == 0)
        {
            zer++;    
        }
        else
        {
            neg++;    
        }
        
    }
    printf("%.3f\n%.3f\n%.3f\n", pos/n , neg/n, zer/n);
    return 0;
}
