//This one here is a very simple problem, please try it on your own.














































class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;

        ans.push_back(celsius + 273.15);
        ans.push_back((celsius * 1.8) + 32);

        return ans;
    }
};
