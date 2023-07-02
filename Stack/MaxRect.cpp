// #include<bits/stdc++.h>

// int largestAreaInHistogram(vector<int>&arr) {
// 	// Find next smaller element
// 	int n=arr.size();
// 	stack<int>stk;
// 	vector<int>left(n),right(n);
// 	left[0]=-1,right[n-1]=n;
// 	stk.push(0);
// 	for(int i=1;i<n;i++) {
// 		while(!stk.empty() && arr[stk.top()]>=arr[i]) {
// 			stk.pop();
// 		}
// 		left[i]=(stk.empty()?-1:stk.top());
// 		stk.push(i);
// 	}
// 	while(!stk.empty()) {
// 		stk.pop();
// 	}
// 	stk.push(n-1);
// 	for(int i=n-2;i>=0;i--) {
// 		while(!stk.empty() && arr[stk.top()]>=arr[i]) {
// 			stk.pop();
// 		}
// 		right[i]=(stk.empty()?n:stk.top());
// 		stk.push(i);
// 	}
// 	int ans=0;
// 	for(int i=0;i<n;i++) {
// 		int width=right[i]-left[i]-1;
// 		ans=max(ans,width*arr[i]);
// 	}
// 	return ans;
// }

// int maximalAreaOfSubMatrixOfAll1(vector<vector<int>>&mat,int n,int m){
// 	int ans=0;
// 	for(int i=0;i<mat.size();i++) {
// 		for(int j=0;j<mat[0].size();j++) {
// 			if(i>0) {
// 				mat[i][j]=(mat[i][j]==1?mat[i-1][j]+1:0);
// 			}
// 		}
// 		ans=max(ans,largestAreaInHistogram(mat[i]));
// 	}
// 	return ans;
// }