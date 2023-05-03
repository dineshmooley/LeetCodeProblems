//1st Approach
class Solution {
public:
    int reverse(int x) {
        int y=0;
        while(x){
            if(y>INT_MAX/10 || y<INT_MIN/10){
                return 0;
            }else{
                y=y*10 +x%10;
                x=x/10;
            }
        }
        return y;
    }
};

//2nd Approach
class Solution {
public:
    int reverse(int x) {
    long result = 0;
    while(x != 0)
    {
        result = result*10 + x % 10;
        x /= 10;
    }
    return (result > INT_MAX || result < INT_MIN)? 0 : result;
}
};
