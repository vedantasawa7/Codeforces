// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
    
//     vector<int> A(N);
//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }
    
//     int max_len = 1, current_len = 1;
    
//     for (int i = 1; i < N; i++) {
//         if (A[i] >= A[i-1]) {
//             current_len++;
//         } else {
//             current_len = 1;
//         }
//         max_len = max(max_len, current_len);
//     }
    
//     cout << max_len << endl;
//     return 0;
// }
