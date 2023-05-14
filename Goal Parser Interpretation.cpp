class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        int i = 0;
        string ans = "";

        while(i<n)  {
            if(command[i] == 'G')   {
                ans = ans +'G';
            }
            else if(command[i] == '(' && command[++i] == ')')   {
                ans = ans + 'o';
            }
            else    {
                ans = ans + "al";
                i++;
                i++;
            }
            i++;

        }

        return ans;
    }
};
