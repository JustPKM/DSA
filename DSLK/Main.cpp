#include"Header.h"
int main()
{
	list a;
	int x,t;
	khoitao(a);
	themVaoDSLKVong(a);
	cout << "\nDanh sach vua nhap la: ";
	xuatDSLKVong(a);
	//cout << "\nDanh sach lien ket don vong sau khi sap xep: ";
	//sapxepTang(a);
	//xuatDSLKVong(a);
	//cout << "\nNhap x de dem so phan tu co trong danh sach lien ket vong: ";
	//cin >> x;
	//cout << "So phan tu co trong danh sach lien ket vong la: " << SoLuongPT_X(a, x);
	//cout << "\nNhap mot so de tim va tra ve dia chi dau tien cua phan tu: "; cin >> x;
	//cout << "Dia chi cua phan tu dau tien la: " << DiaChiX_Head(a, x);
	//cout << "\nNhap mot so de tim va tra ve dia chi thu hai cua phan tu: "; cin >> x;
	//cout << "\nDia chi cua phan tu x thu hai xuat hien la: " << DiaChiX_Hai(a, x);

	//if (!kiemTra_Tang(a))
	//	cout << "\nDanh sach lien ket khong tang.";
	//else
	//	cout << "\nDanh sach lien ket tang.";
	//cout << "\nCac phan tu bang tong cua hai phan tu tiep theo la: "; xuat_PTSumSau(a);
	//cout << "\nCac phan tu bang tong cua hai phan tu phia truoc la: "; xuat_PTSumTruoc(a);
	//cout << "\nDia chi cua so nguyen to dau tien la: " << XuatDC_SNT_Head(a);
	//cout << "\nSo luong so hoan thien co trong danh sach lien ket la: " << demSHH_DslkDon(a);
	//cout << "\nCac phan tu la so chinh phuong trong danh sach lien ket la: "; xuat_SCP(a);

	//if (KT_DSCap3(a))
		//cout << "\nDay la danh sach day so cap 3.";
	//else
		//cout << "\nDay khong phai la danh sach day so cap 3.";
	//cout << "\nMax am trong danh sach la: " << Max_Am(a);
	//cout << "\nDanh sach sau khi sap xep giam: ";
	//SapXep_Giam(a);
	//xuatDSLKVong(a);
	cout << "\nNhap phan tu can chen truoc: "; cin >> t;
	cout << "\nNhap gia tri de chen truoc: "; cin >> x;
	chen_Truoc(a, x, t);
	cout << "\nDanh sach sau khi chen truoc la: ";
	xuatDSLKVong(a);
	//cout << "\nNhap phan tu can chen sau: "; cin >> t;
	//cout << "\nNhap gia tri de chen sau: "; cin >> x;
	//Chen_Sau(a,x,t);
	//cout << "\nDanh sach sau khi chen sau la: ";
	//xuatDSLKVong(a);
	return 0;
}