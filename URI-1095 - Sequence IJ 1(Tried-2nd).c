/**
     Bismillahir Rahmanir Rahim.
--------------------------------------
      S M MahDi -CSTE 10th , NSTU.
            Date: 19-06-2016
---------------------------------------
**/

#include<stdio.h>
int main(void){

    int i=1,j=60;
    for(i=1,j=60;j<=60;i+=3,j-=5){

        printf("I=%d J=%d\n",i,j);

        if(j==0)
            break;
    }
    return 0;
}
