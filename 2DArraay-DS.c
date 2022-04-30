#include <stdio.h>
 
int main(){
    int i,j;
    int a[6][6];
    for(i=0; i < 6; i++)
    for(j=0; j < 6; j++)
     scanf("%d",&a[i][j]);
     
    int sum,flag=1,max;
    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            sum = a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            if(flag==1){
                max=sum;
                flag=2;
            }
            if(max<=sum)
                max=sum;
        }
    }
    printf("%d",max);
    return 0;
}
