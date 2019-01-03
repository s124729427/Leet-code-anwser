int climbStairs(int n) {
    int x=1,y=1,z;
    if(n<2){
        return 1;
    }
    for(int i = 2;i <= n;i++){
       z = x + y;
       y = x;
       x = z;
    }
    return z;
}