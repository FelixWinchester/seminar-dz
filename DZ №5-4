#include <iostream>  
 using namespace std;  
 int main()  
 {  
         int n, m, c = 0;  
         cin >> n >> m;  
         int **a = new int*[n];  
         for (int i = 0; i < n; i++) {  
                 a[i] = new int[m];  
         }  
         for (int i = 0; i < n; i++) {  
                 for (int j = 0; j < m; j++) {  
                         cin >> a[i][j];  
                         if (a[i][j] < 0) {  
                                 c++;  
                         }  
                 }  
         }  
         cout << c;  
         return 0;  
 }
