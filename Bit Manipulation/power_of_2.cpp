class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n<=0)return false;
        //doing and operation
        if((n & (n-1))==0){
            return true;
        }
        return false;
    }
};