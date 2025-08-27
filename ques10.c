//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main(){
    float hours, mins, sec;
    int tot_sec;

    printf("enter time in seconds");
    scanf("%d", &tot_sec);

    hours= tot_sec/3600;
    tot_sec=tot_sec %3600;

    mins= tot_sec/60;
    sec= tot_sec%60;

    printf("time=%0.2f;%0.2f;%0.2f",hours, mins, sec);

    return 0;
    
}
