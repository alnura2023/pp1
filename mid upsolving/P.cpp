#include <iostream>
using namespace std;
void Product(int a[], int n) {
    int x = a[0], y = a[1];
    for (int i=0; i<n; i++)
      for (int j=i+1; j<n; j++)
         if (a[i]*a[j] > x*y)
            x = a[i], y = a[j];
 
    cout << x*y;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Product(a, n);
    return 0;
}


