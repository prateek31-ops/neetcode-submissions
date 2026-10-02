class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0 ; i<stones.size() ; i++){
            pq.push(stones[i]);
        }
        if(pq.size() == 0) return 0;
        if(pq.size() == 1) return stones[0];
        while(pq.size() > 1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x==0){
                continue;
            }
            pq.push(abs(x-y));
        }
        return pq.top();

    }
};
