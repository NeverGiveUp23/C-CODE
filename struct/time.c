#include <stdio.h>

struct time {
  int seconds;
  int minutes;
  int hours;
};



struct time timeUpdate(struct time now){
  ++now.seconds;

  if(now.seconds == 60){
    now.seconds = 0; // restart the seconds clock
    ++now.minutes; // updagte to th next minute
    if (now.minutes == 60)
    {
      now.minutes = 0;
      ++now.hours;

      if (now.hours == 24)
      {
        now.hours = 0;
      }
    };
  };
return now;
}




int main(){

struct time timeUpdate(struct time now);
struct time currentTime, nextTime;

printf("Enter the time: ");
scanf("%i:%i:%i", &currentTime.hours, &currentTime.minutes, &currentTime.seconds);


  nextTime = timeUpdate(currentTime);

  printf("Updated time is %.2i:%.2i:%.2i\n", nextTime.hours, nextTime.minutes, nextTime.seconds);



  return 0;
}