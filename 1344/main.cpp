class Solution {
public:
    double angleClock(int hour, int minutes) {
        double Mdegree = (minutes/(double)60 * 360);
        double delta = minutes/(double)60 * 30;
        double Hdegree = ((hour/(double) 12 * 360) + delta);
        double diff = abs(Mdegree - Hdegree);
        return diff > 180 ? 360.0 - diff : diff;
    }
};
