#include "myBank.h"
#include <stdio.h>
#define Size 50

double bank[Size][2] = {{0}};
double val;

void funcO(){
int inde=-1;
for(int i=0;i<Size;i++){
if(bank[i][1]==0){
inde=i;
break;
}
}
if(inde !=-1){
printf("Please enter amount for deposit: ");
if(scanf("%lf", &val)!=0){
if(val>=0){
bank[inde][0]=val;
bank[inde][1]=1;
printf("New account number is: %d \n",(inde+901));
inde++;
}
else{
printf("Invalid Amount \n");
}
}
else{
printf("Failed to read the amount \n");
}
}
}
void funcB(int account_number){
if(bank[account_number-901][1]==1){
printf("The balance of account number %d is: %lf \n",account_number,bank[account_number-901][0]);
}
else{
printf(" This account is closed \n");
}
}
void funcD(int account_number){
if(bank[account_number-901][1]==1){
printf("Please enter amount for deposit: ");
if(scanf("%lf", &val)!=0){                                                                           
if(val>=0){
bank[account_number-901][0]+=val;
printf("The new balance is: %lf",bank[account_number-901][0]);
}
else{
printf("Cannot deposit a negative amount");
}
}
else{
printf("Failed to read the amount\n");
}
}
else{
printf(" This account is closed \n");
}
}
void funcW(int account_number){
if(bank[account_number-901][1]==1){
printf("\n please enter the amount to withdraw:");
scanf("%lf", &val);
if(val>=0){
if(bank[account_number-901][0]>=val){
printf("\n old balance in account is - %lf \n",bank[account_number-901][0]);
bank[account_number-901][0]-=val;
printf("\n new balance in account is - %lf \n",bank[account_number-901][0]);
}
else{
printf("\n this account doesnt have the amount. \n");
}
}
else{
printf("Cannot deposit a negative amount \n");
}
}
else{
printf(" This account is closed \n");
}
}
void funcC(int account_number){
if(bank[account_number-901][1]==1){
bank[account_number-901][1]=0;
bank[account_number-901][0]=0;
printf(" Closed account number %d \n",account_number);
}
else{
printf(" This account is already closed \n");
}
}
void funcI(){
printf("Please enter interest rate: ");
if(!scanf("%lf", &val))
{
    printf("Failed to read the interest rate\n");
}
else{
if(val<0){
printf("Invalid interest rate \n");
}
else{
for(int i=0;i<Size;i++){
if(bank[i][1]==1){
bank[i][0]=((100+val)/100)*bank[i][0];
}
}
}
}
}
void funcP(){
for(int i=0;i<Size;i++){
if(bank[i][1]==1){
printf("\n The balance of account number %d is: %lf",(i+901),bank[i][0]);
}
}
}
void funcE(){
for(int i=0;i<Size;i++){
bank[i][0]=0;
bank[i][1]=0;
}
}
