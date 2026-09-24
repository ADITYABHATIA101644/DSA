class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; ++i) {
            pq.push({score[i], i});
        }
        vector<string> answer(n);
        int rank = 1;
        while (!pq.empty()) {
            auto [sc, idx] = pq.top();
            pq.pop();
            if (rank == 1) {
                answer[idx] = "Gold Medal";
            } else if (rank == 2) {
                answer[idx] = "Silver Medal";
            } else if (rank == 3) {
                answer[idx] = "Bronze Medal";
            } else {
                answer[idx] = to_string(rank);
            }
            rank++;
        }
        return answer;
    }
};
