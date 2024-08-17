bool isAnagram(char* s, char* t) {
    int m=0;
    int n=0;
    m=strlen(s);
    n=strlen(t);
    if(m != n || m==0 || n==0)
        return false;
    int i,c1[26],c2[26];
    for(i=0;i<m;i++){
        c1[s[i]-'a']++;
        c2[t[i]-'a']++;
    }
    for(i=0;i<26;i++){
        if(c1[i] != c2[i])
            return false;
    }
    return true;
}
