// Max Sum Subarray of size K
//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N) {
        long ans = 0;
        for (int i = 0; i < K; i++) ans += Arr[i];
        
        long currSum = ans;
        
        for (int i = K; i < N; i++)
        {
            currSum += Arr[i] - Arr[i - K];
            ans = max(ans, currSum);
        }
        
        return ans;
    }
};