#include <iostream>
#include <time.h>
using namespace std;

long int sum(int arr[1000], int n) {
    if (n == 1) return arr[0];
    return arr[n - 1] + sum(arr, n - 1);
}

int main() {
	srand((int)time(0));
    int n;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        arr[i]=rand();
    }
    cout << sum(arr, n);
    return 0;
}
//5000 chạy đc, 6000 lỗi tràn bộ nhớ
