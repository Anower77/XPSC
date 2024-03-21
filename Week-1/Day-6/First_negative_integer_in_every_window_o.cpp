// First negative integer in every window of size k
// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1


vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) 
{
    
 int i = 0, j = 0;
    queue<long long> q;
    vector<long long> result;
    
    while (j < N) {
        if (A[j] < 0)
            q.push(A[j]);

        if (j - i + 1 == K) 
        {
            if (q.empty()) 
            {
                result.push_back(0);
            }
            else 
            {
                result.push_back(q.front());
                if (A[i] == q.front()) 
                {
                    q.pop();
                }
            }
            i++;
        }
        j++;
    }
    return result;

                                                 
}