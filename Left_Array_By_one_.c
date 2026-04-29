class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {

        int Temp=0; //In This Variable we Have to Store the Value of Array Temporarly  -->first letter should be lower case
        int ArrayLength=nums.size(); //this is the Size of Array which Will be Helpful for Processing Code 
        int ForwardIndex=0;
        int BackwardIndex=ArrayLength-1;
        while(ForwardIndex<BackwardIndex)
        {
            Temp=nums[ForwardIndex];
            nums[ForwardIndex]=nums[BackwardIndex];
            nums[BackwardIndex]=Temp;
            ForwardIndex++;
            BackwardIndex--;
        }
    int ArrayRoatebyNumber=ArrayLength-2;
    ForwardIndex=0;
     while(ForwardIndex<ArrayRoatebyNumber)
        {
            Temp=nums[ForwardIndex];
            nums[ForwardIndex]=nums[ArrayRoatebyNumber];
            nums[ArrayRoatebyNumber]=Temp;
            ForwardIndex++;
            ArrayRoatebyNumber--;
        }

        
   

    }
};
