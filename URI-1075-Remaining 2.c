/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 20-06-2016
---------------------------------------
**/

#include<stdio.h>
int main(void){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=10000;i++){
        if(i%n==2)
            printf("%d\n",i);
    }
    return 0;
}
