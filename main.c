#include "myBank.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
int account;
char option;
while(1){
printf("\nPlease choose a transaction type: \n");
printf(" O-Open Account\n");
printf(" B-Balance Inquiry\n");
printf(" D-Deposit\n");
printf(" W-Withdrawal\n");
printf(" C-Close Account\n");
printf(" I-Interest\n");
printf(" P-Print\n");
printf(" E-Exit\n");
scanf("%c",&option);
switch(option){
case 'O':
          funcO();
          break;
case 'B':
          printf("Please enter account number:");
          if(scanf("%d",&account)!=0){
          if(account>950 || account<901){
             printf(" Invalid account number \n");
          }
          else{
          funcB(account);
          }
          }
          else{
          printf(" Failed to read the account number \n");
          }
          break;
case 'D':
          printf("Please enter account number:");
          if(scanf("%d",&account)!=0){
          if(account>950 || account<901){
             printf(" Invalid account number \n");
          }
          else{
          funcD(account);
          }
          }
          else{
          printf(" Failed to read the account number \n");
          }
          break;
case 'W':
          printf("Please enter account number:");
          if(scanf("%d",&account)!=0){
          if(account>950 || account<901){
             printf(" Invalid account number \n");                                                                                }
          else{
          funcW(account);
          }
          }
          else{
          printf(" Failed to read the account number \n");
          }
          break;
case 'C':
          printf("Please enter account number:");
          if(scanf("%d",&account)!=0){
          if(account>950 || account<901){
             printf(" Invalid account number \n");
          }
          else{
          funcC(account);
          }
          }
          else{
          printf(" Failed to read the account number \n");
          }
          break;
case 'I':
          funcI();
          break;
case 'P':
          funcP();
          break;
case 'E':
          funcE();
          exit(0);
          break;
default:
          printf(" Invalid transaction type \n");
          break;
}
}
return 0;
}
