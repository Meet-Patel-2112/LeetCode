class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourDegrees = (hour % 12) * 30;
        double minuteDegrees = minutes * 6;

        hourDegrees += minutes * 0.5;
        double angleDifference = abs(hourDegrees - minuteDegrees);
        return min(angleDifference, 360 - angleDifference);
    }
};