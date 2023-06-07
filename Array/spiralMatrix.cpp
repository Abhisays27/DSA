// #include <bits/stdc++.h> 
// vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
// {
//     // Write your code here.
//     vector<int> ans;
//     int row=matrix.size();
//     int col = matrix[0].size();
    
//     int total= row*col;
//     int count=0;

//     //intiastaion
//     int sC= 0;
//     int eC= col-1;
//     int sR = 0;
//     int eR = row-1;

//     while(count<total){
//         //printing first coloumn
//         for(int i=sC;i<=eC && count<total;i++){
//             ans.push_back(matrix[sR][i]);
//             count++;
//         }
//         sR++;
//         //printing last row
//         for(int i=sR;i<=eR&& count<total;i++){
//             ans.push_back(matrix[i][eC]);
//             count++;

//         }
//         eC--;
//         //printing Last col
//         for(int i=eC;i>=sC&& count<total;i--){
//             ans.push_back(matrix[eR][i]);
//             count++;

//         }
//         eR--;
//         for(int i=eR;i>=sR&& count<total;i--){
//             ans.push_back(matrix[i][sC]);
//             count++;

//         }
//         sC++;
        



//     }
//     return ans;

    
// }