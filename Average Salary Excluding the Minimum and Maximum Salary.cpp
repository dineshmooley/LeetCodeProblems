class Solution {
public:
    double average(vector<int>& salary) {
        int maxs = salary[0];
        int mins = salary[0];
        int sum = 0;
        double cnt = 0; 
        for(auto it: salary)    {
            maxs = max(maxs, it);
            mins = min(mins, it);
        }


        for(auto it: salary)    {
            if(it==maxs || it==mins)    {
                continue;
            }
            sum = sum + it;
            cnt++;
        }

        double avg = sum/cnt;
        return avg;
    }
};
