// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         map<int,int> m;
//         for(int i=0; i<nums.size();++i){
//             m.find(nums[i]) == m.end() ? m[nums[i]]=1 : m[nums[i]]++;
//         }
//         vector<pair<int,int>> v;
//         for(auto & p : m){
//             v.push_back(p);
//         }
//         sort(v.begin(),v.end(),[](pair<int,int> a , pair<int,int> b) {return a.second > b.second; });
    
//         for(auto & p : v){
//             cout << p.first << " " << p.second << endl;
//         }
//         vector<int> res;
//         for(int i=0; i<k; ++i){
//             res.push_back(v[i].first);
//         }
//         return res;
//     }
    
// //        vector<int> topKFrequent(vector<int>& nums, int k) {
// //         unordered_map<int,int> map;
// //         for(int num : nums){
// //             map[num]++;
// //         }
        
// //         vector<int> res;
// //         priority_queue<pair<int,int>> pq; 
// //         for(auto it = map.begin(); it != map.end(); it++){
// //             pq.push(make_pair(it->second, it->first));
// //             if(pq.size() > (int)map.size() - k){
// //                 res.push_back(pq.top().second);
// //                 pq.pop();
// //             }
// //         }
// //         return res;
// //     }
// // };
