class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentaltitude=0;
        int highestaltitude=0;
        for(int i=0;i<gain.size();i++){
            currentaltitude+=gain[i];
            highestaltitude=max(highestaltitude,currentaltitude);

        } 
        return highestaltitude;
    }
};