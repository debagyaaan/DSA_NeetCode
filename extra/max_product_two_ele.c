int maxProduct(int* nums, int numsSize) {
    for (int i=0; i<numsSize; i++) {
        for (int j=i+1; j<numsSize; j++) {
            if (nums[j]<nums[i]){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    int i = numsSize-1;
    int j = numsSize-2;

    return (nums[i]-1)*(nums[j]-1);
}
