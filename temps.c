/*
========================================================================================================
Name: temps.c
Author: George Wehbeh
Student#: 104884192
Course Code IPC144
Section:NWW
Date: 9/26/19
Workshop:Workshop 3 in lab
======================================================================================================== 
*/
/*
This code is meant to take 2 inputs from a user per day, in this case 3 days so 6 total inputs. It also checks to see if the user input correct numbers and gives an error message in the scenario that the numbers are incorrect.
Also the code now will output a minimum and maximum temperature for the days alloted and which day they occured on, and will also output mean averages for maximum minimum and temperature itself.
*/

#include <stdio.h>
#define NUMS 4
int main(){
printf("---=== IPC Temperature Analyzer ===---");
int Max = -41;
int Min = 41;
int hday, lday;
int high, low;
float high1,high2,high3,high4,low1,low2,low3,low4;
float Lmean, Hmean,Tmean;
int day=1;
for (day =1; day <= NUMS; day++){
printf("\nEnter the high value for day %d: ", day);
scanf("%d", &high);
printf("\nEnter the low value for day %d: ", day);
scanf("%d", &low);
while( high < low || high <= -40|| high >= 40 || low <=  -40 || low >= 40 ){
printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
printf("\nEnter the high value for day %d: ", day);
scanf("%d", &high);
printf("\nEnter the low value for day %d: ", day);
scanf("%d", &low); 
}
 if (day ==1){
high1 = high;
low1 = low;
if(high1 >= Max){
Max = high1;
hday = 1;}
if (low1 <= Min){
Min = low1;
lday = 1;}
}
else if(day == 2){
high2 = high;
low2 = low;
if (high2 >= Max){
Max = high2;
hday = 2;}
if (low2 <= Min){
Min = low2;
lday = 2;}
}
else if (day == 3){
high3 = high; 
low3 = low;
if (high3 >= Max){
Max = high3;
hday = 3;}
if (low3 <= Min){
Min = low3;
lday = 3;}
}
else if (day == 4){
high4 = high;
low4 = low;
if(high4 >= Max){
Max = high4;
hday = 4;}
if(low <= Min){
Min = low4;
lday = 4;}
}
}
Lmean = (low1 + low2 + low3 + low4)/4; 
printf("\nThe average (mean) LOW temperature was: %.2lf\n",Lmean );
Hmean = (high1 +high2+high3+high4)/4;
printf("The average (mean) HIGH temperature was: %.2lf\n",Hmean );
Tmean  = (high1 +high2+high3+high4+low1+low2+low3+low4)/8;
printf("The average (mean) temperature was: %.2lf\n",Tmean );
printf("The highest temperature was %d, on day %d\n", Max, hday );
printf("The lowest temperature was %d, on day %d\n",Min, lday );
return 0;
}


