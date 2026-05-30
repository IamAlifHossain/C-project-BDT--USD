#include <stdio.h>
#include <math.h>
int main(){
    float taka, dollar, exchange_rate;
    int b100, b50, b20, b10, b5, b2, b1;
    int c50, c25, c10, c5, c1;
    int total_cent;

    printf("Enter amount in TAKA : ");
    scanf("%f", &taka);

    printf("Enter Exchange Rate : ");
    scanf("%f", &exchange_rate);

    dollar = taka/exchange_rate;

    printf("Dollar : $%.2f\n", dollar);
    
    total_cent = roundf(dollar*100);
    
    printf("%d Dollars and %d cents\n", total_cent/100, total_cent%100);


    b100 = total_cent/10000;
    total_cent%=10000;

    b50 = total_cent/5000;
    total_cent%=5000;

    b20 = total_cent/2000;
    total_cent%=2000;

    b10 = total_cent/1000;
    total_cent%=1000;

    b5 = total_cent/500;
    total_cent%=500;

    b2 = total_cent/200;
    total_cent%=200;

    b1 = total_cent/100;
    total_cent%=100;

    c50 = total_cent/50;
    total_cent%=50;

    c25 = total_cent/25;
    total_cent%=25;

    c10 = total_cent/10;
    total_cent%=10;

    c5 = total_cent/5;
    total_cent%=5;

    c1 = total_cent/1;
    total_cent%=1;

    if(b100>0){printf("$100 Bills : %d\n", b100);}
    if(b50>0){printf("$50 Bills  : %d\n", b50);}
    if(b20>0){printf("$20 Bills  : %d\n", b20);}
    if(b10>0){printf("$10 Bills  : %d\n", b10);}
    if(b5>0){printf("$5 Bills   : %d\n", b5);}
    if(b2>0){printf("$2 Bills   : %d\n", b2);}
    if(b1>0){printf("$1 Bills   : %d\n", b1);}

    if(c50>0){printf("50c coins  : %d\n", c50);}
    if(c25>0){printf("25c coins  : %d\n", c25);}
    if(c10>0){printf("10c coins  : %d\n", c10);}
    if(c5>0){printf("5c coins   : %d\n", c5);}
    if(c1>0){printf("1c coins   : %d\n", c1);}

    return 0;
}