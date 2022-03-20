// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target.
// The same number may be chosen from candidates an unlimited number of times. 
// author Elie Moutran

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans; // final answer vetor (used as global var here to be accessible in all function calls)

void solver(vector<int> &candidates, int target, int index, vector<int> &current) {
	if(target == 0) {
		ans.push_back(current); // if target == 0 it => current has a solution 
		return;
	}

	if(target > 0 && index >= candidates.size()) { // if we went through all the array and our target is still positive stop
		return;
	}

	if(candidates[index] <= target) {
		current.push_back(candidates[index]); 
		solver(candidates, target-candidates[index], index, current); // this is adding again the same element because we can use them an unlimited number of times.
		current.pop_back();
	}

	solver(candidates, target, index+1, current); // moving to another element in candidates (index+1)
}
vector<vector<int>> find_candidates(vector<int> candidates, int target) { 
	vector<int> current;
	solver(candidates, target, 0, current); // sending candidates, target, first index (0), current (empty vector : this will be a temp vector solution where we add and remove elements  to it with "solver")
	return ans;
}

int main(){
	vector<int> candidates = {2,3,6,7};
	int target = 7;
	ans = find_candidates(candidates, target);
	// printing solution (just for testing)
	for (auto sol : ans){
	    for (auto x : sol){
	        cout << x << " ";
	    }cout << endl;
	}
  
	return 0;
}
