/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* twoSum(int* nums, int numsSize, int target) {
       int *b;
       b = (int*) malloc(2 * sizeof(int));
       bool stop = false;
       for(int i=0; i<numsSize ; i++){
           for(int a=i+1; a<numsSize; a++){
               if(nums[i] + nums[a] == target){                   
                   b[0] = i;
                   b[1] = a;
                   stop = true;
                   break;
               }               
           }
           if(stop){
               break;
           }
       }         
       return b;           
}