// Count Occurences of Anagrams
// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
class Solution{
public:
	int search(string pat, string txt) {
	    int patSize = pat.size();
        int txtSize = txt.size();
        
        vector<int> patArray(26, 0);
        vector<int> txtArray(26, 0);
        
        for(int i = 0; i < patSize; i++) 
        {
            patArray[pat[i] - 'a']++;
            txtArray[txt[i] - 'a']++;
        }
        
        int count = 0;
        if(patArray == txtArray) count++;
        
        for(int i = patSize; i < txtSize; i++) 
        {
            txtArray[txt[i] - 'a']++;
            txtArray[txt[i - patSize] - 'a']--;
            
            if(patArray == txtArray) count++;
        }
        
        return count;
	}

};