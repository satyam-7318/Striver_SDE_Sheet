https://leetcode.com/problems/kth-largest-element-in-a-stream/



class KthLargest {
public:
    
priority_queue <int,vector<int>,greater<int>> min_heap;
    int K;
    KthLargest(int k, vector<int>& nums) {
        K=k;
        for(int i=0;i<nums.size();i++)
            add(nums[i]);
    }
    
    int add(int val) {
        if(min_heap.size()<K)
            min_heap.push(val);
        else
        {
            if(min_heap.top()<val)
            {
                min_heap.pop();
                min_heap.push(val);
            }
        }
        return min_heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
