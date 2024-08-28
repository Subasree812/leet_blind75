int isVowel(char c) {
    char v[] = "aeiouAEIOU";
    for (int i = 0; v[i] != '\0'; i++) {
        if (c == v[i]) {
            return 1;
        }
    }
    return 0;
}
char* reverseVowels(char* s) {
    if (s == NULL) 
        return NULL;
    int l = 0;
    int r = 0;
    while (s[r] != '\0') {
        r++;
    }
    r--;
    while (l < r) {
        if (isVowel(s[l]) && isVowel(s[r])) {
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        } else {
            if (!isVowel(s[l])) {
                l++;
            }
            if (!isVowel(s[r])) {
                r--;
            }
        }
    }
    return s;
}
