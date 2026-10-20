class Solution {
public:
int bs(vector<int>& arr, int tar, int st, int end){
    if(end >= st){
        int mid = st + (end - st)/ 2;
        if(arr[mid] == tar) return mid;
        else if(arr[mid] <= tar){
            return bs(arr, tar, mid + 1, end);
        }
        else{
            return bs(arr, tar, st, mid - 1);
        }
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        return bs(nums, target, st, end);
    }
};