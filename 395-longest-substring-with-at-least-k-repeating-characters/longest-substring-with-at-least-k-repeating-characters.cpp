class Solution {
public:
    int longestSubstring(string s, int k) {
        int n=s.length();
        int maxLen=0;
        for(int i=1;i<=26;++i) {
            vector<int> count(26, 0);
            int left=0,right=0;
            int unique=0;
            int countAtLeastK=0;
            while(right<n){
                int idx=s[right]-'a';
                if(count[idx]==0){
                    unique++;
                }
                count[idx]++;
                if(count[idx]==k){
                    countAtLeastK++;
                }
                right++;
                while(unique>i) {
                    int leftIdx=s[left]-'a';
                    if(count[leftIdx]==k){
                        countAtLeastK--;
                    }
                    count[leftIdx]--;
                    if(count[leftIdx]==0){
                        unique--;
                    }
                    left++;
                }
                if(unique==i && unique==countAtLeastK){
                    maxLen=max(maxLen,right-left);
                }
            }
        }
        return maxLen;
    }
};
