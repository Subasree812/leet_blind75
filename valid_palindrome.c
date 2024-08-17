bool isPalindrome(char* s) {
    int l,f=1,i,k;
    l=strlen(s);
    if(l==1)
        return 1;

    for(i=0,k=l-1;i<=k;i++,k--){
        f=1;
        char s1;
        char s2;
        s1=s2=-1;
        while(f && i<=k){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s1=tolower(s[i]);
                f=0;
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                s1=s[i];
                f=0;
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                s1=s[i];
                f=0;
            }
            else
                i++;
        }
    
    f=1;
    while(f && i<=k){
            if(s[k] >= 'A' && s[k] <= 'Z'){
                s2=tolower(s[k]);
                f=0;
            }
            else if(s[k] >= 'a' && s[k] <= 'z'){
                s2=s[k];
                f=0;
            }
            else if(s[k] >= '0' && s[k] <= '9'){
                s2=s[k];
                f=0;
            }
            else
                k--;
        }
        if(s1 != s2)
            return 0;
    }
    return 1;
}
