int setBits(int n){
    // Write your code here.

   if (!(n & (n + 1)))
        return n;
    // else
    return n | (n + 1);
}