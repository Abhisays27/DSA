// #include <bits/stdc++.h> 
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     //Write your code here
//      std::vector<int> result;
//     for (int i = 1; i <= mCols; i++) {
//         if (i % 2 != 0) {
//             for (int j = 1; j <= nRows; j++) {
//                 result.push_back(arr[j - 1][i - 1]);
//             }
//         } else {
//             for (int j = nRows; j >= 1; j--) {
//                 result.push_back(arr[j - 1][i - 1]);
//             }
//         }
//     }
//     return result;
// }