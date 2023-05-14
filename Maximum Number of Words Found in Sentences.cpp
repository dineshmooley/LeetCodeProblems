class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = -1;
        for(int i=0;i<sentences.size();i++)    {
            int scnt = 0;
            for(auto it: sentences[i])  {
                if(it == ' ')   {
                    scnt++;
                }
            }

            if(scnt > max)  {
                max = scnt;
            }
        }

        return max + 1;
    }
};
