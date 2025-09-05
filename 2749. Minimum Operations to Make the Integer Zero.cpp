class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
     /*   num1=3.   num2=-2
        x=3-(-2)=5
        5<1 no
        1>=2 no
        x=3-(-4)=7 111
        7<2 no
        2>=3 no
        x=3-(-6)=9 1001
        3>=2 yes*/
        for(int k=1;k<=60;k++)
        {
            long long num=num1-1LL*num2*k;
            if(num<k) return -1;
            else if(k>=__builtin_popcountll(num)) return k;
        }
        return -1;
    }
};
