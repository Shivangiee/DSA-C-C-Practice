class Solution {
public:
void reverse(vector<int>& nums, int start, int end)    // ---> for cleaner code make a reverse function separate and call that function with forward and backward index that way you dont have to add 3 while loop
{
    while(start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}
     void rotateArray(vector<int>& nums, int k) {
          int Temp=0;
          int ForwardIndex=0;
          int BackwardIndex=nums.size()-1;
          k = k % nums.size();
          while(ForwardIndex<BackwardIndex)
          {
            Temp=nums[ForwardIndex];
            nums[ForwardIndex]=nums[BackwardIndex];
            nums[BackwardIndex]=Temp;
            ForwardIndex++;
            BackwardIndex--;
          }
          ForwardIndex=0;
          BackwardIndex=nums.size()-1-k;
         while(ForwardIndex<BackwardIndex)
          {
            Temp=nums[ForwardIndex];
            nums[ForwardIndex]=nums[BackwardIndex];
            nums[BackwardIndex]=Temp;
            ForwardIndex++;
            BackwardIndex--;
          }
          ForwardIndex=nums.size()-k;
          BackwardIndex=nums.size()-1;
          while(ForwardIndex<BackwardIndex)
          {
            Temp=nums[ForwardIndex];
            nums[ForwardIndex]=nums[BackwardIndex];
            nums[BackwardIndex]=Temp;
            ForwardIndex++;
            BackwardIndex--;
          }
     }
};
