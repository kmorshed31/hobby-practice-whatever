/* Write a
program that permits the user to type in two dates and then calculates the number of elapsed days
between the two dates.Try to structure the program logically into separate functions. For example,
you should have a function that accepts as an argument a date structure and returns the value of
N computed as shown previously.This function can then be called twice, once for each date, and the
difference taken to determine the number of elapsed days*/
#include <stdio.h>
typedef struct{
int days;
int month;
int years;
}time;
int f(year,month){
  if (month<=2){
    year-=1;
  }
  return year;
}
int g(month){
  if (month<=2){
    month+=12;
  }
  month+=1;
}
int numdays(time *d1){
  int N = 1461 * (f(d1->years,d1->month)/4) + 153 * (g(d1->month)/5) + d1->days;
  return N;
}
int main() {
  
    time date1 = {15, 5, 2023}; 
    time date2 = {10, 4, 2024};
    int days1 = numdays(&date1);
    int days2 = numdays(&date2);

    
    printf("Number of days for date1: %d\n", days1);
    printf("Number of days for date2: %d\n", days2);
    printf("Difference in days: %d\n", days2 - days1);

    return 0;
}
