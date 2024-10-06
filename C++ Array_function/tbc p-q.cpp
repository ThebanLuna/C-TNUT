#include <iostream>

using namespace std;

void input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
}

void TB_le_PQ(int a[], int n, int p, int q) {
    float s = 0, dem = 0;
    for (int i = 0; i < n; i++) {
        if ((a[i] % 2 == 1) && (a[i] >= p) && (a[i] <= q)) {
            s += a[i];
            dem++;
        }
    }
    if (dem != 0) {
        cout << "Trung binh cac phan tu le trong doan [" << p << ", " << q << "] la: " << s / float(dem) << endl;
    }
}

void In_sole(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) {
            cout << "So le tai vi tri " << i << " la: " << a[i] << endl;
        }
    }
}

int main() {
    int a[100], n, p, q;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap p: ";
    cin >> p;

    cout << "Nhap q: ";
    cin >> q;

    input(a, n);

    TB_le_PQ(a, n, p, q);

    In_sole(a, n);

    return 0;
}