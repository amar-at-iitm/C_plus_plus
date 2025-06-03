#include <iostream>
using namespace std;

void multiply(int arr1[], int arr2[], int result[], int n) {
    for (int i = 0; i < n; ++i) {
        result[i] = arr1[i] * arr2[i];
    }
}

int main() {
    int n;

    
    cout << "Enter the n of the arrays: ";
    cin >> n;

    int A[n], B[n], result[n];

    
    cout << "Enter elements of the first array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

   
    cout << "Enter elements of the second array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> B[i];
    }

  
    multiply(A, B, result, n);

    
    cout << " Multiple of A and B = " << endl;
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
