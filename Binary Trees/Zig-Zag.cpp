// #include <bits/stdc++.h> 
// #include<queue>
// #include<vector>

    
// template <typename T = int>
// class TreeNode
// {
// public:
//     T data;
//     TreeNode<T> *left;
//     TreeNode<T> *right;

//     TreeNode(T val)
//     {
//         this->data = val;
//         left = NULL;
//         right = NULL;
//     }

//     ~TreeNode()
//     {
//         if (left != NULL)
//         {
//             delete left;
//         }
//         if (right != NULL)
//         {
//             delete right;
//         }
//     }
// };



// // vector<int> zigzagTreeTraversal(TreeNode<int> *root)
// // {
// //     //    Write your code here.
// //     vector<int> result;
// //     if(root==NULL){
// //         return result;
// //     }

// //     queue<TreeNode<int>*> q;
// //     q.push(root);

// //     bool leftToRight = true;

// //     while(!q.empty()){
// //         int size = q.size();
// //         vector<int> ans(size);

//         //level process
//         for(int i=0;i<size;i++){
//             TreeNode<int>* frontNode= q.front();
//             q.pop();

//             int index = leftToRight?i:size-i-1;
//             ans[index]= frontNode->data;

//             if(frontNode->left){
//                 q.push(frontNode->left);
//             }
//             if(frontNode->right){
//                 q.push(frontNode->right);
//             }
//         }
//         //dir change
//         leftToRight=!leftToRight;
//         for(auto i: ans){
//             result.push_back(i);
//         }
//     }
//     return result;
// }