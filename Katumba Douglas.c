#include <stdio.h>
int main (){
     // Initial deposit
    int initial = 50000;
     // you have sent
    int sent = 20000;
     // your mobile money balance
     int balance = initial - sent;
     printf("your mobile monry balance\n");
     printf("Your current balance is UGX %d\n", balance);
     return 0;


}