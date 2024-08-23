char * mergeAlternately(char * word1, char * word2){
     int l1 = strlen(word1); 
    int l2 = strlen(word2);  
    int m = l1 + l2; 
    char *merged = (char *)malloc((m + 1) * sizeof(char));
    int i = 0, j = 0, k = 0; 
    while (i < l1 || j < l2) {
        if (i < l1) {
            merged[k++] = word1[i++];
        }
        if (j < l2) {
            merged[k++] = word2[j++];
        }
    }

    merged[k] = '\0';

    return merged;    
}
