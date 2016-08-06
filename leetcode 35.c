int searchInsert(int* nums, int numsSize, int target) {
    if(target<=nums[0]) return 0;
    if(target>nums[numsSize-1]) return numsSize;
    int i;
    for(i=0;i<numsSize-1;++i){
        if(nums[i]==target) break;
        if(target>nums[i]&&target<nums[i+1]){
            i++;
            break;
        } 
    }
    return i;
    
}