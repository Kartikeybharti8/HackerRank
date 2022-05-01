#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void str_similar(char * str){

    int i=0;
    int r=0;
    while(str[i]!='\0'){
        int x=0;
        int j=i;
        while(str[j+x]!='\0' && str[j+x]==str[x++])
            r++;
        i++;    
    }
    printf("%d\n",r);

}


int main() {

    int n,i;
   char str[100001];
    
   scanf("%d",&n);
    
   for(i=0;i<n;i++){
       scanf("%s",str);
       str_similar(str);
   }
    return 0;
}
