class node{
public:
    int val = 0;
    int index = 0;
    node(int _val, int _index){
        val = _val;
        index = _index;
    }
    
    node(){
        val = 0;
        index = 0;
    }
};
const int maxn = 100000;
node maxheap[maxn];
int maxmap[maxn];

void max_heapify(int i, int k){
    int large = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<k&&maxheap[left].val>maxheap[large].val){
        large = 2*i+1;
    }
    if(right<k&&maxheap[right].val>maxheap[large].val){
        large = 2*i+2;
    }
    if(large!=i){
        node tmp = maxheap[large];
        maxheap[large] = maxheap[i];
        maxheap[i] = tmp;
        max_heapify(large, k);
    }
    maxmap[maxheap[i].index] = i;
}

void build_maxheap(int heap_size){
    for(int i=heap_size;i>=0;--i){
        max_heapify(i, heap_size);
    }
}

void max_rebalance(int i, int k){
    int father = (i-1)/2;
    if(father>=0&&maxheap[i].val > maxheap[father].val){
        node tmp = maxheap[i];
        maxheap[i] = maxheap[father];
        maxheap[father] = tmp;
        max_rebalance(father, k);
    }
    else{
        max_heapify(i, k);
    }
    maxmap[maxheap[i].index] = i;
}


class Solution {
public:   
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        if(nums.size()==0) return ans;
        for(int i=0;i<k;++i){
            maxheap[i] = node(nums[i],i);
        }
        build_maxheap(k);
        int n = nums.size();
        ans.push_back(maxheap[0].val);
        for(int i=k;i<n;++i){
            maxheap[maxmap[i-k]] = node(nums[i],i);
            max_rebalance(maxmap[i-k], k);
            ans.push_back(maxheap[0].val);
        }
        return ans;
    }
};