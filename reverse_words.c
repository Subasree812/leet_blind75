void reverse(char* s,int start,int end) {
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
char* reverseWords(char* s) {
    if (s == NULL) 
        return NULL;

    int length = strlen(s);
    int start = 0, end = length - 1;
    while (s[start] == ' ') 
        start++;
    while (end >= start && s[end] == ' ') 
        end--;
    
    // Reverse the entire string
    reverse(s, start, end);

    // Reverse each word in the reversed string
    start = 0;
    end = 0;
    while (end <= length) {
        if (s[end] == ' ' || s[end] == '\0') {
            reverse(s, start, end - 1);
            start = end + 1;
        }
        end++;
    }

    // Remove extra spaces
    int i = 0, j = 0;
    while (s[i]) {
        if (s[i] != ' ' || (i > 0 && s[i - 1] != ' ')) {
            s[j++] = s[i];
        }
        i++;
    }
    if (j > 0 && s[j - 1] == ' ') {
        j--;
    }
    s[j] = '\0';

    return s;
}

