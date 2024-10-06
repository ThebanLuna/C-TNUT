#include <iostream>
#include <cmath>

#define tra_ve_kq       return
#define so_nguyen       int
#define mu              pow
#define hien_thi_ra     cout
#define nhap_vao        cin
#define ham_chinh       main
#define so_thuc         float
using namespace std;
/* việt hóa C++, đem lập trình đến gần hơn với mn. TNUT */
so_thuc Tong(so_nguyen n){
    so_thuc s = 0, tu;
    so_thuc mau = 1;
    for (so_nguyen i = 1; i <= n; i++){
        tu = mu(-1, n + 1);
        mau += mu(i, 2);
        s += (tu / mau);
    }
    tra_ve_kq s;
}

so_nguyen ham_chinh(){
    so_nguyen n;
    hien_thi_ra << "Nhap so nguyen duong n: ";
    nhap_vao >> n;
    hien_thi_ra << "Tong s la: " << Tong(n);
    tra_ve_kq 0;
}