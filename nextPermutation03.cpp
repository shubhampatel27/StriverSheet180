// #include <bits/stdc++.h> 
// #include <iostream>  
// using namespace std;
// vector<int> nextPermutation(vector<int> &permutation, int n)
// {
//     //  Write your code here.
//   int k, l;
//   for(k=n-2; k>=0; k--){
//       if(permutation[k]<permutation[k+1]){
//           break;
//       }
//   }
//   if(k == -1)
//     {
//         reverse(permutation.begin(), permutation.end());
//         return permutation;
//     }
//   for(l=n-1; l>k; l--){
//      if( permutation[l]>permutation[k]) break;
//   }
//   swap(permutation[k], permutation[l]);

//   reverse(permutation.begin()+k+1,permutation.end());
//    return permutation;
// }