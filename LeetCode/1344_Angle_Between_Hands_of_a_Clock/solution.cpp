class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour = hour*30;
        if(hour == 360) hour = 0;
        float x = 0.5*minutes + hour;
        minutes = minutes*6;
        x = minutes-x;
        if(x<0)x*=-1;
        if(x>180)x=360-x;
        return x;
    }
};