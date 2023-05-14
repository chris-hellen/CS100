#include <stdio.h>
#include <math.h>

main(){

    double num20, num10, num5, num1, numQua, numNic, numDime, numPen;

    printf("Enter the number of $20s: ");
    scanf("%lf", &num20);
    printf("Enter the number of $10s: ");
    scanf("%lf", &num10);
    printf("Enter the number of $5s: ");
    scanf("%lf", &num5);
    printf("Enter the number of $1s: ");
    scanf("%lf", &num1);
    printf("Enter the number of quarters: ");
    scanf("%lf", &numQua);
    printf("Enter the number of dimes: ");
    scanf("%lf", &numDime);
    printf("Enter the number of nickles: ");
    scanf("%lf", &numNic);
    printf("Enter the number of pennies: ");
    scanf("%lf", &numPen);

    double cash20 = num20*20, cash10 = num10*10, cash5 = num5*5, cash1 = num1, cashQua = numQua*25, cashNic = numNic*5, cashDime = numDime*10, cashPen = numPen;
    int totalDollars = round(cash20+cash10+cash5+cash1) + round(cashQua+cashDime+cashNic+cashPen) / 100;
    int totalCents = round(cashQua+cashDime+cashNic+cashPen);
    totalCents = totalCents % 100;
    
    printf("You have %d dollars and %d cents\n", totalDollars, totalCents);

    double lenBill = (num20+num10+num5+num1)*6.14, lenQua = numQua*.955, lenDime = numDime*.705, lenNic = numNic*.835, lenPen = numPen*.750;
    int totalLen = round(lenBill+lenQua+lenDime+lenNic+lenPen);

    printf("The length of your money is roughly %d inches", totalLen);

    return 0;
}