#include<stdio.h>
float calculate(int la,int ir,int ye){
    float EMI= la*ir/(1-1/(1+ir)^(ye*12));
    return EMI;
}
int main(){
int loan_amount;
int interest_rate1;
int interest_rate2;
int years;
scanf("%d\n",&loan_amount);
scanf("%d\n",&interest_rate1);
scanf("%d\n",&years);
scanf("%d\n",&interest_rate2);
float bank1= calculate(loan_amount,interest_rate1,years);
float bank2 = calculate(loan_amount,interest_rate2,years);
printf("EMI rate of bank1 is: %f\n",bank1);
printf("EMI rate of bank2 is: %f\n",bank2);
if(bank1>bank2){
    printf("Go for the bank2\n");
}


    return 0;
}
