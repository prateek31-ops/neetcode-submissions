
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26, 0);

        for(char ch : tasks) {
            count[ch-'A']++;
        }

        priority_queue<pair<int,int>> pq;

        for(int i = 0; i < 26; i++) {
            if(count[i] > 0) {
                pq.push({count[i], i});
            }
        }

        queue<pair<int, pair<int,int>>> q;

        int time = 0;

        while(!pq.empty() || !q.empty()) {

            time++;

            if(!pq.empty()) {
                auto [cnt, i] = pq.top();
                pq.pop();

                cnt--;

                if(cnt > 0) {
                    q.push({cnt, {time+n, i}});
                }
            }

            if(!q.empty() && q.front().second.first == time) {
                auto [cnt, p] = q.front();
                q.pop();

                pq.push({cnt, p.second});
            }
        }

        return time;
    }
};