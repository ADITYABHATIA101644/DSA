class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<int> indices(n);
        for (int i = 0; i < n; ++i) {
            indices[i] = i;
        }
        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return score[a] > score[b];
        });
        vector<string> answer(n);
        for (int i = 0; i < n; ++i) {
            int original_idx = indices[i];
            if (i == 0) {
                answer[original_idx] = "Gold Medal";
            } else if (i == 1) {
                answer[original_idx] = "Silver Medal";
            } else if (i == 2) {
                answer[original_idx] = "Bronze Medal";
            } else {
                answer[original_idx] = to_string(i + 1);
            }
        }
        return answer;
    }
};