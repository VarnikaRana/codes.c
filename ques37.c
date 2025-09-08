//Write a program to find the LCM of two numbers.

#include<stdio.h>

int main(){
    int num1, num2, lcm,i;

    printf("enter num1");
    scanf("%d", &num1);

    printf("enter num2");
    scanf("%d", &num2);

    int max = (num1 > num2) ? num1 : num2;

    for(i = max; ; i++) {
        if(i % num1 == 0 && i % num2 == 0) {
            lcm = i;
            break;
        }
    }

    printf("%d\n", lcm);

    return 0;
}
