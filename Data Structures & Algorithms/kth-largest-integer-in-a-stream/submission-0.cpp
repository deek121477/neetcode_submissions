class KthLargest {
public:
//largest so 
priority_queue<int,vector<int>,greater<int>>minh;
int k;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            minh.push(nums[i]);
         if(minh.size()>k)
         {
          minh.pop();
         }
        }
    

    }
    
    int add(int val) {
        //when the function called

    minh.push(val);
    if(minh.size()>k)
    minh.pop();

    return minh.top();
    }
};
