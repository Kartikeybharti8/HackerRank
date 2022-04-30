#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int n,i;
scanf("%d",&n);
long long int arr[n],sum;
 
 for(i=0;i<n;i++)
 {
     scanf("%lli",&arr[i]);
 }  
 
 for(i=0;i<n;i++)
 {
    sum=sum+arr[i];
 }
   
 printf("%lli",sum);
 return 0;
}
