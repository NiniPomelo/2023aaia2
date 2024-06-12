//week17-4.cpp 方法三: Bucket Sort 桶子排序法
void sortColors(int* nums, int numsSize) {
    int zero=0, one=0, two=0; //準備3個桶子
    for(int i=0; i<numsSize; i++){ 
        if(nums[i] == 0) zero++; //找到1個0
        if(nums[i] == 1) one++;  //找到1個1
        if(nums[i] == 2) two++;  //找到1個2
    }
    for(int i=0; i<numsSize; i++){
        if(i<zero) nums[i] = 0; //最左邊，都放0
        else if(i<zero+one) nums[i] = 1;
        else nums[i] = 2; //剩下右邊，放2
    }
}