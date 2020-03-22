include <iostream>
using namespace std;

struct time
{
  int seconds;
  int minutes;
  int hours;
};

void timedifference(struct time, struct time, struct time*);

int main()
{
    struct time t1, t2, difference;

    cout << "Enter start time." << endl;
    cout << "Enter hours, minutes and seconds: ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter stop time." << endl;
    cout << "Enter hours, minutes and seconds: ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    timedifference(t1, t2, &difference);

    cout << endl << "TIME DIFFERENCE: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds;
    cout << " - " << t2.hours << ":" << t2.minutes << ":" << t2.seconds;
    cout << " = " << difference.hours << ":" << difference.minutes << ":" << difference.seconds;
    return 0;
}
void timedifference(struct time t1, struct time t2, struct time*difference){
    
    if(t2.seconds > t1.seconds)
    {
        --t1.minutes;
        t1.seconds += 60;
    }

    difference->seconds = t1.seconds - t2.seconds;
    if(t2.minutes > t1.minutes)
    {
        --t1.hours;
        t1.minutes += 60;
    }
    difference->minutes = t1.minutes-t2.minutes;
    difference->hours = t1.hours-t2.hours;
}
