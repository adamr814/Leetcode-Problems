#include <iostream>

void running_sum(int *array, int arrSize){ 
    int sum[arrSize]; //Initialize sum array with size of input array
    sum[0] = array[0]; 
    std::cout << sum[0] << " ";
    for(int i = 1; i < arrSize; i++){ //Loop while i is less than the size of the input array
        sum[i] = (sum[i-1] + array[i]);
        std::cout << sum[i] << " ";}
    std::cout << std::endl;
}

int main(){
    int nums[4] = {1, 2, 3, 4};
    int arrSize = sizeof(nums) / sizeof(nums[0]);
    running_sum(nums, arrSize);
}