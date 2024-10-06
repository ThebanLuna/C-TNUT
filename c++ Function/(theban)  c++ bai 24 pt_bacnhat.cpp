#include <iostream>
using namespace std;

void pt_bacnhat(float a, float b) {
    if (a == 0) {          // nếu a = 0 thì tiếp tục thực thi các câu lệnh trong ngoặc nhọn. nếu a khác 0 thì dòng 11
        if (b == 0) {      // nếu a = 0 và b = 0 thì chạy dòng 7
            cout << "Phuong trinh co vo so nghiem." << endl;
        } else {      // nếu a = 0 và b khác 0 thì chạy dòng 9
            cout << "Phuong trinh vo nghiem." << endl;
        }
    } else {             // nếu a khác 0 thì hiển thị x ra màn hình: dòng 12 và 13
        float x = -b / a;          // tính x = -b/a
        cout << "Nghiem cua phuong trinh la x = " << x << endl; // tìm x xong thì hiển thị x ra màn hình
    }
}

int main() {            // phải nhớ  hàm main được coi là điểm bắt đầu thực hiện của chương trình
    float a, b;
    cout << "Nhap he so a: "; cin >> a;
    cout << "Nhap he so b: "; cin >> b;

    pt_bacnhat(a, b);     // gọi hàm pt_bacnhat() và truyền tam số thực vào hàm, để nó chạy và in ra màn hình một trong ba dòng 7; 9; 13

    return 0;
}