// #include <bits/stdc++.h> 
// vector<int> ninjaAndSortedArrays(vector<int>& A, vector<int>& B, int m, int n) {
//     int j = 0;
//     for(int i = m;i<m+n;i++){
//         swap(A[i],B[j]);
//         j++;
//     }
//     int gap = ceil((float)(m+n)/2);
//     int len = m+n;
//     while(gap>0){
//         int i = 0;
//     	int j = gap;
//         if(gap == 1){
//             gap = -1;
//         }
//         while(i<len && j<len){
//             if(A[i]>A[j]){
//                 swap(A[i],A[j]);
//             }
//             i++;
//             j++;
//         }
//         gap = ceil((float)(gap)/2); 
//     }
//     return A;
// }
