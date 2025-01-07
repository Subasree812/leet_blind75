bool isHappy(int n) {
    int ss = 0;
        
        while (n != 1) {
            ss = 0;
            while (n > 0) {
                int t = n % 10;
                ss += t * t;
                n = n / 10;
            }
            n = ss;
            
            if (n == 4) {
                return false;
            }
        }
        
        return true;
}
