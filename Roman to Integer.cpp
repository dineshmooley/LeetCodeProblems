class Solution {
public:
    int romanToInt(string s) {
        stack<int> s1;
        int ans=0;
        map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int n = size(s);
        for(int i=0; i<n; i++)  {
            if(s1.empty()){
                s1.push(mp[s[i]]);
            }
            else if(s1.top() < mp[s[i]])    {
                int temp = mp[s[i]] - s1.top();
                s1.pop();
                s1.push(temp);
            }
            else    {
                s1.push(mp[s[i]]);
            }
        }   
        while(!s1.empty())  {
            ans = ans + s1.top();
            s1.pop();
        }
        return ans;
    }
};
