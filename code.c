int minKBitFlips(int* nums, int s, int k) {
    int ans=0,times=0;
    for(int i=0;i<s;i++){
        if(i>=k){
            if(nums[i-k]>1){
                nums[i-k]-=2;
                times--;
            }
        }
        if(nums[i]==times%2){
            if(i+k>s)
            return -1;
            ans++;
            times++;
            nums[i]+=2; 
        }
    }
    return ans;
}
