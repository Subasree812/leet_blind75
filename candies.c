bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* r=(bool*)malloc(candiesSize * sizeof(bool));
    *returnSize=candiesSize;
    int max=candies[0],i;
    for(i=1;i<candiesSize;i++){
        if(candies[i]>max)
            max=candies[i];
    }
    for(i=0;i<candiesSize;i++){
        if(candies[i] + extraCandies >= max)
            r[i] = true;
        else
            r[i] = false;
    }
    return r;
}
