class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0) {
        return false;
    }
    int temp=x;
    int i;
    long long int n = 0;
    while(temp)   {
        i = temp%10;
        n = (long long int)n * 10 + i;
        temp/=10;
    }

    if(n == x)  {
        return true;
    }
    return false;
    }
};
