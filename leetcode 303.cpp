class NumArray {
public:
    NumArray(vector<int> &nums) {
        if(nums.size()==0) return;
        this->sum.push_back(nums[0]);
        for(int i=1;i<nums.size();++i){
            this->sum.push_back(nums[i]+this->sum[i-1]);
        }
    }
    int sumRange(int i, int j) {
        if(this-sum.size()==0) return 0;
        if(i==0) return this->sum[j];
        else{
            return this->sum[j]-this->sum[i-1];
        }
    }
    public:
    vector<int> sum;
};
