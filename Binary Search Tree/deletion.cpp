// #include <bits/stdc++.h> 
// /*************************************************************
//     Following is the Binary Tree node structure

//     template <typename T>

//     class BinaryTreeNode
//     {
//     public :
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//         ~BinaryTreeNode() {
//             if (left)
//                 delete left;
//             if (right)
//                 delete right;
//         }
//     };

// *************************************************************/
// BinaryTreeNode<int>* findMin(BinaryTreeNode<int>* root)
// {
//     BinaryTreeNode<int>* temp = root;
//     while(temp->left!=NULL){
//         temp=temp->left;
//     }
//      return temp;
// }

// BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int key){
//     // Write your code here.
//     //base case
//     if(root==NULL){
//         return root;
//     }

//     if(root->data==key){
//         //0th child kay liye
//         if(root->left==NULL && root->right==NULL){
//             delete root;
//             return NULL;
//         }
//         //  1    child kay liye
//          if(root->left!=NULL && root->right==NULL){
//              BinaryTreeNode<int>* temp = root->left;
//                  root->left = NULL;
//              delete root;
//              return temp;
          
//         }
//          if(root->left==NULL && root->right!=NULL){
//              BinaryTreeNode<int>* temp = root->right;
//                    root->right = NULL;
//              delete root;
//              return temp;
          
//         }

//         //2child
//         if(root->left!=NULL && root->right!=NULL)
//         {
      
//             int minValue = findMin(root->right)->data;
//             root->data = minValue;
//             root->right = deleteNode(root->right, minValue);
//             return root;
//         }




//     }
//     else if(root->data>key){
//         root->left = deleteNode(root->left, key);
//         return root;
//     }
//     else{
//         root->right = deleteNode(root->right, key);
//         return root;

//     }
// }
