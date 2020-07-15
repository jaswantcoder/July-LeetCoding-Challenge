class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        int tot_min=hour*60+minutes;
        double h_rot=(360/(12*60.0))*tot_min;
        double min_rot=6.0*minutes;
        return min(abs(h_rot-min_rot),360-abs(h_rot-min_rot));
        
        
        
    }
};
