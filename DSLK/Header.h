#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
typedef int dev;
struct NODE
{
	dev data;
	NODE* next;
};
typedef NODE* node;
struct list
{
	node head;
	node last;
};
void khoitao(list&);
int isEmpty(list ds);
node NewNode(int x);
void themDauVong(list& ds, int x);
void themVaoDSLKVong(list& ds);
void xuatDSLKVong(list ds);
void sapxepTang(list& ds);
int SoLuongPT_X(list ds, int x);
node DiaChiX_Head(list ds, int x);
node DiaChiX_Hai(list ds, int x);
bool kiemTra_Tang(list ds);
void xuat_PTSumSau(list ds);
void xuat_PTSumTruoc(list ds);
node XuatDC_SNT_Head(list ds);
bool KT_SHH(int n);
bool KT_SNT(int n);
bool KT_SCP(int n);
void xuat_SCP(list ds);
int demSHH_DslkDon(list ds);
bool KT_DSCap3(list ds);
int Max_Am(list ds);
void SapXep_Giam(list& ds);
void chen_Truoc(list& ds, int x, int a);
void Chen_Sau(list& ds, int x, int a);
node chenSauq(node q, int x);