
// kth smallest elements;

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int findKthSmallest(vector<int>& nums, int k){
    priority_queue<int> pq;

    for(int i=0; i<k; i++){
        pq.push(nums[i]);
    }

    // process the rest of the element;
    for(int i=k; i<nums.size(); i++){
        if(pq.top() > nums[i]){
            pq.pop();
            pq.push(nums[i]);
        }
    }

    return pq.top();
}


int main(){
    vector<int> nums = {3,2,1,5,6,4};

    int k=3;

    cout<<"The "<<k<< "-th smallest element is : "<<findKthSmallest(nums, k)<<endl;

    return 0;
}
