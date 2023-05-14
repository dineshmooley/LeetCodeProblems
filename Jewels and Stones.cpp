class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mp;

        for(auto it: stones)    {
            mp[it]++;
        }

        int count=0;
        for(auto it: jewels)    {
            if(mp.find(it)!=mp.end())   {
                count = count + mp[it];
            }
        }

        return count;
    }
};
