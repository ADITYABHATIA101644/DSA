class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map <int,int> count;
        int l=0;
        int size=0;
        for(int h=0;h<fruits.size();h++){
            count[fruits[h]]++;
            while(count.size()>2){
                count[fruits[l]]--;
                if(count[fruits[l]]==0){
                    count.erase(fruits[l]);
                    
                }
                l++;
                
            }
            size=max(size,h-l+1);
        }
        return size;
    }
};