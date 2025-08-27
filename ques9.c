//write a program to calculate simple and compound intrest for given principle, rate, time.

#include<stdio.h>
#include<math.h>

int main(){
    int p, r,t;
    float SI,CI,n;
    float amount;

    printf("enter price");
    scanf("%d",&p);

    printf("enter rate");
    scanf("%d",&r);

    printf("enter time");
    scanf("%d",&t);

    printf("Enter number of times interest applied per year (n): ");
    scanf("%f", &n);

    SI= p*r*t/100;
    amount= p*pow((1+r/(n*100)),(n*t));
    CI= amount-p;

    printf("the simple intrest is %.2f\n",SI);
    printf("the total amount is %.2f\n",amount);
    printf("the compound intrest is %.2f\n",CI);

    return 0;
}