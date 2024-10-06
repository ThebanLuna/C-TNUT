#include <iostream>
#include <cmath>
using namespace std;

void pt_bacnhat(float a, float b) {        // định nghĩa một hàm để giải pt bậc nhất đã giải thích ở bài 24
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh co vo so nghiem." << endl;
        } else {
            cout << "Phuong trinh vo nghiem." << endl;
        }
    } else {
        float x = -b / a;
        cout << "Nghiem cua phuong trinh la x = " << x << endl;
    }
}

void pt_bachai(float a, float b, float c) {
    if (a == 0) {              // nếu a == 0 thì gọi hàm pt_bacnhat() để nó chạy như bài 24
        pt_bacnhat(b, c);     
    } else {                   // nếu a khác 0 thì tính đen ta = b^2 - 4 * a * c
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "Phuong trinh vo nghiem." << endl;
        } else if (delta == 0) {
            float x = -b / (2 * a);
            cout << "Phuong trinh co nghiem kep x = " << x << endl;
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co hai nghiem phan biet:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
}

int main() {                          // phải nhớ  hàm main được coi là điểm bắt đầu thực hiện của chương trình
    float a, b, c;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;

    pt_bachai(a, b, c); //gọi hàm và truyền tham số thực vào hàm. a, b, c ở trong hàm ở dòng này mới là tham số thực nè.

    return 0;
}