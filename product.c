int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* r=(int*)malloc(numsSize * sizeof(int));
    *returnSize=numsSize;
    int j,i;
    for(i=0;i<numsSize;i++){
        int c=1;
        for(j=0;j<numsSize;j++){
            if(i==j)
                continue;
            c=c*nums[j];
        }
        r[i]=c;
    }
    return r;
}
