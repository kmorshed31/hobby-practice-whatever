/*
Write a function elapsed time that takes as its arguments two time structures and returns a time
structure that represents the elapsed time (in hours, minutes, and seconds) between the two times.
So the call
elapsed time (time1, time2)
where time1 represent 3:45:15 and time2 represents 9:44:03, should return a time structure that
represents 5 hours, 58 minutes, and 48 seconds. Be careful with times that cross midnight
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
int second;
int minute;
int hour;
}time;
time tdifference(time t1,time t2){
  time difference;
  if ((t2.second-t1.second)<0){difference.second=t2.second-t1.second+60;}else{
    difference.second=t2.second-t1.second;
  }
  if ((t2.minute-t1.minute)<0){difference.minute=t2.minute-t1.minute+60;}else{
    difference.minute=t2.minute-t1.minute;
  }
  if ((t2.hour-t1.hour)<0){
difference.hour=t2.hour-t1.hour+24;}else{difference.hour=t2.hour-t1.hour;}
  return difference;
}
int main() {
time t1, t2, timeDifference;
t1.second=34;
t1.minute=23;
t1.hour=3;
t2.second=5;
t2.minute=2;
t2.hour=1;

timeDifference = tdifference(t1, t2);

  printf("Time Difference: %d:%d:%d\n", timeDifference.hour, timeDifference.minute, timeDifference.second);

    return 0;
}
