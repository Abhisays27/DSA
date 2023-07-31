// #include<map>

// BinaryTreeNode<int>* createMappingParent(BinaryTreeNode<int>* root,int start,map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> &NodeToParent)

//   {

//       BinaryTreeNode<int>* res = NULL;

//       queue<BinaryTreeNode<int>*>q;//to store the node value

//       q.push(root);

//       NodeToParent[root] = NULL; //bec root has no parent 

      

//       while(!q.empty())

//       {

//           BinaryTreeNode<int>* front = q.front();

//           q.pop();

          

//           if(front->data == start)//target value found

//           {

//               res = front; //update the result

//           }

//           if(front->left) //is left value exits 

//           {

//               NodeToParent[front->left] = front; //this show that parent of front->left is front itself

//               q.push(front->left);

//           }

          

//           if(front->right) //is right value exits 

//           {

//               NodeToParent[front->right] = front; //this show that parent of front->right is front itself

//               q.push(front->right);

//           }

//       }

//       return res;

//   }

  

//   int burnTree(BinaryTreeNode<int>* root,map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> &NodeToParent)

//   {

//       map<BinaryTreeNode<int>*,bool> visited;//this is for to map the visited node of tree

      

//       queue<BinaryTreeNode<int>*>q;

//       q.push(root);

      

//       visited[root] = true;//bec target node is always visited

      

//       int ans = 0;

      

//       while(!q.empty())

//       {

//           bool flag = 0;

//           int size = q.size();

          

//           for(int i=0;i<size;i++)

//           {

//               BinaryTreeNode<int>* front = q.front();

//               q.pop();

              

//               if(front->left && !visited[front->left])//if front->left exits and it is not visited then

//               {

//                   flag = 1; //mark the flag 1

//                   q.push(front->left); //push into queue

//                   visited[front->left] = 1; //mark them visited

//               }

              

//               if(front->right && !visited[front->right])//if front->right exits and it is not visited then

//               {

//                   flag = 1; //mark the flag 1

//                   q.push(front->right); //push into queue

//                   visited[front->right] = 1; //mark them visited

//               }

              

//               if(NodeToParent[front] && !visited[NodeToParent[front]])//if parent exits and it is not visited then

//               {

//                   flag = 1;

//                   q.push(NodeToParent[front]);

//                   visited[NodeToParent[front]] = 1;

//               }

//           }

          

//           if(flag == 1)

//           {

//               ans++;

//           }

//       }

//       return ans;

//   }

 

// int timeToBurnTree(BinaryTreeNode<int>* root, int start)

// {

//     // Write your code here

//     map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> NodeToParent;   //this is create mapping with the parent node

//     BinaryTreeNode<int>* targetNode = createMappingParent(root,start,NodeToParent);//to find the target node in tree

        

//     int ans = burnTree(targetNode,NodeToParent);

//     return ans;

// }