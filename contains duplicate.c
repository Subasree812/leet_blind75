bool containsDuplicate(int* nums, int numsSize) {
    int i, flag = 0, j;
    

    for(i = 0; i < numsSize - 1; i++) {
        for(j = i + 1; j < numsSize; j++) {
            if(nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    for(i = 0; i < numsSize - 1; i++) {
        if(nums[i] == nums[i + 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("true");
    else
        printf("false");
}
