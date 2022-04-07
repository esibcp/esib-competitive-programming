class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    priority_queue<int> pq;
    for(auto & c : stones){
        pq.push(c);
    }

    while (pq.size()>1){
        int x =pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();

        int res = abs(x-y);

        if(res>0){
            pq.push(res);
        }
        
        if(pq.size()==0 && res==0){
            pq.push(0);
        }

    }
    return pq.top();
    }
};