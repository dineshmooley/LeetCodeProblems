class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2 == 0)    {
            return n;
        }
        else{
            int temp = n;
            while(temp++)   {
                if(temp%2 == 0 && temp%n == 0)  {
                    return temp;
                }
            }
        }

        return -1; 
    }
};
