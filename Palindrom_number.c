bool isPalindrome(int x) {
int reversed=0;
    int r=0;
    int n=x;
    if(x>=0){
    while(n != 0){
        r=n%10;
        reversed=(reversed*10)+r;
        n=n/10;
    }
    }
    else{
        return 0;
    }
    if(x == reversed){
        return 1;
    }
    else {
        return 0;
    }
}
