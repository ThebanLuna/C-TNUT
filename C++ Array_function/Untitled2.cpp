#include <iostream>

using namespace std;

void input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
}

void tb_chan_pq(int a[], int n, int p, int q) {
    float s = 0, dem = 0;
    for (int i = 0; i < n; i++) {
        if ((a[i] % 2 == 0) && (a[i] >= p) && (a[i] <= q)) {
            s += a[i];
            dem++;
        }
    }
    if (dem != 0) {
        cout << "Trung binh cac phan tu chan trong doan [" << p << ", " << q << "] la: " << s / float(dem) << endl;
    }
}

void duong_chia_het_3(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] % 3 == 0) {
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

    tb_chan_pq(a, n, p, q);

    duong_chia_het_3(a, n);

    return 0;
}