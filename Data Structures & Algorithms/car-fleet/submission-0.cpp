class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> vp;
        for(int i=0 ; i<n ; i++){
            vp.push_back({position[i],speed[i]});
        }
        sort(vp.rbegin() , vp.rend());
        stack<double> st;
        for(auto &[p,s] : vp){
            double time = (double)(target-p)/s;
            if(!st.empty()){
                double t2 = st.top();
                if(time <= t2) continue; 
            }
            st.push(time);
        }

        return st.size();
    }
};
