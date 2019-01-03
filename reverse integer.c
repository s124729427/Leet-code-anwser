int reverse(int x) {
    int c = 0;
    int a = 0;
    while(x != 0){       
        a = x % 10;
        x = x / 10;
        if(c > 2147483647/10 || c < -2147483648/10 || ( a > 7 && c == 214748364 ) || (a < -8 && c == -214748364)){
            return 0;
        }
        c = c * 10 + a;
        
    }
    return c;  
}