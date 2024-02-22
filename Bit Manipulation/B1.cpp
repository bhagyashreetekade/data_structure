
//to get bit value
bool getbit(int num,int i){
    //i - 1 because we need third bit
    return num & (1<<i-1);
}

//to set the bit value
int setbit(int num,int i){
    return num | (1 <<i-1);
}

//to clear the bit
int clearbit(int num,int i){
    return num & (~(1<<i-1));
}

vector<int> bitManipulation(int num, int i){
    // Write your code here.
    vector<int>res;
    res.push_back(getbit(num,  i));
    res.push_back(setbit(num,  i));
    res.push_back(clearbit(num, i));
    return res;
}