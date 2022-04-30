#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,dig1=0,dig2=0,diff;
    scanf("%d",&n);
    int arr[n][n];    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {    
            scanf("%d",&arr[i][j]); 
            //add the diagonal each time when they are added to the matrix   
            if(i==j)
            {
                dig1=dig1+arr[i][j];
            }    
            if(i==(n-j-1))
            {
                dig2=dig2+arr[i][j];                                   
            }    
        }
    }
    diff=abs(dig1-dig2);
    printf("%d",diff);
    return 0;
}
