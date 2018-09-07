class NumArray {
public:
    int sum[50000];
    vector<int> nums;
    
    void buildup(int l, int r, int index){
        if(l==r){
            sum[index] = nums[l];
            return;
        }
        else{
            int mid = (l+r)/2;
            buildup(l, mid, index*2+1);
            buildup(mid+1, r, index*2+2);
            sum[index] = sum[index*2+1] + sum[index*2+2];
        }
    }
    
    void update_num(int l, int r, int i, int index, int delta){
        if(l==r){
            sum[index] += delta;
            return;
        }
        else{
            int mid = (l+r)/2;
            if(i<=mid)  update_num(l, mid, i, index*2+1, delta);
            if(mid<i)  update_num(mid+1, r, i, index*2+2, delta);
            sum[index] += delta;
        }
    }
    
    int query(int l, int r, int L, int R, int index){
        if(L<=l && r<=R){
            return sum[index];
        }
        int mid = (l+r)/2;
        int ans = 0;
        if(L<=mid) ans += query(l, mid, L, R, index*2+1);
        if(R>mid) ans += query(mid+1, r, L, R, index*2+2);
        return ans;
    }
    
    NumArray(vector<int> nums) {
        this->nums = nums;
        if(nums.size()==0){
            return;
        }
        buildup(0, nums.size()-1, 0);
    }
    
    void update(int i, int val) {
        int delta = val - this->nums[i];
        update_num(0, nums.size()-1, i, 0, delta);
        this->nums[i] = val;
    
    }
    
    int sumRange(int i, int j) {
        return query(0, nums.size()-1, i, j , 0);
    }
    
};