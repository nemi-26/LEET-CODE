int majorityElement(int* nums, int numsSize) {
    int can=0;//candiate
    int c=0;//count
    for(int i=0;i<numsSize;i++){
        if(c==0){
            can=nums[i];
        }
        c+=(nums[i]==can)?1:-1;
    }
    return can;
}
