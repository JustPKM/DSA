#include"Header.h"
void khoitao(list& ds)
{
	ds.head = NULL;
	ds.last = NULL;
}
int isEmpty(list ds)
{
	return(ds.head == NULL ? 1 : 0);
}
node NewNode(int x)
{
	node p;
	p = new NODE;
	p->data = x;
	p->next = p;
	return p;
}
void themDauVong(list& ds, int x)
{
	node p;
	p = NewNode(x);
	if (ds.head == NULL)
	{
		ds.head = p;
		ds.last = p;
	}
	else
	{
		p->next = ds.head;
		ds.head = p;
	}
	ds.last->next = ds.head;
}
void themCuoiNode(list& ds, node n)
{
	node p = n;
	if (!isEmpty(ds))
	{
		ds.head = p;
		ds.last = p;
	}
	else
	{
		ds.last->next = p;
		ds.last = p;
	}
	ds.last->next = ds.head;
}
void themVaoDSLKVong(list& ds)
{
	int x;
	while (1)
	{
		cout << "\nNhap x khac -99: ";
		cin >> x;
		if (x == -99)
			break;
		themDauVong(ds, x);
	}
}
void xuatDSLKVong(list ds)
{ 
	node p = ds.head;
	if (!isEmpty(ds))
	{
		do
		{
			cout << p->data << " ";
			p = p->next;
		} while (p!=ds.head);
	}
}
void sapxepTang(list& ds)
{
	node p = ds.head;
	    for (p;p->next!=ds.last;p=p->next)
		{
		for (node q = p->next; q != ds.head; q = q->next)
		{
			if (p->data > q->data)
				swap(p->data, q->data);
		}
		}
	ds.last->next = ds.head;
}
int SoLuongPT_X(list ds,int x)
{
	int dem = 0;
	node p = ds.head;
	do
	{
		if (p->data == x)
			dem++;
		p = p->next;
	} while (p!=ds.head);
	return dem;
}
node DiaChiX_Head(list ds,int x)
{
	bool flag = false;
	node p = ds.head;
	do
	{
		if (p->data == x)
		{
			flag = true;
			return p;
		}	
		p = p->next;
	} while (p!=ds.head);
	if(flag==false)
	return NULL; 
}

node DiaChiX_Hai(list ds, int x)
{
	bool flag = false;
	node p = ds.head;
	do
	{
		if (flag == true&&p->data==x)
			return p;
		if (p->data==x)
			flag = true;
		p = p->next;
	} while (p!=ds.head);
	if (flag == false)
		return NULL;
}

bool kiemTra_Tang(list ds)
{
	bool kq = true;
	node p = ds.head;
	do
	{
		if (p->data > p->next->data)
		{
			kq = false;
			return kq;
		}
		p = p->next;
	} while (p!=ds.head);
	return true;
}
 
void xuat_PTSumSau(list ds)
{
	bool kq = false;
	node p = ds.head;
	int sum;
	do
	{
		sum = p->next->data + p->next->next->data;
		if (p->data==sum)
		{
			kq = true;
			cout << p->data << " ";
		}
		p = p->next;
	} while (p!=ds.head);
	if (kq == false)
		cout << "\nKhong co phan tu nao bang tong cua hai phan tu tiep theo: ";
}

void xuat_PTSumTruoc(list ds)
{
	bool kq = false;
	node p = ds.head;
	node q = ds.head->next->next;
	int sum = 0;
	do
	{
		sum = p->data + p->next->data;
		if (q->data == sum)
		{
			kq = true;
			cout << q->data << " ";
		}
		p = p->next;
		q = q->next;
	} while (p!=ds.head);
	if (kq == false)
		cout << "\nKhong co node nao la tong cua hai phai phan phia truoc.";
}

//kiem tra so nguyen to
bool KT_SNT(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
//xuat dia chi so nguyen to dau tien tim thay
node XuatDC_SNT_Head(list ds)
{
	bool kq = false;
	node p = ds.head;
	do
	{
		if (KT_SNT(p->data))
		{
			kq = true;
			return p;
		}
		p = p->next;
	} while (p!=ds.head);
	if (kq == false)
		return NULL;
}

bool KT_SHH(int n)
{
	int sum = 0;
	for (int i = 1; i <= n/2; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	return(sum == n ? true : false);
}

int demSHH_DslkDon(list ds)
{
	int dem = 0;
	node p = ds.head;
	do
	{
		if (KT_SHH(p->data))
			dem++;
		p = p->next;
	} while (p!=ds.head);
	return dem;
}

//kiem tra so chinh phuong
bool KT_SCP(int n)
{
	for (int i = 0; i <=n; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}
//xuat cac phan tu la so chinh phuong
void xuat_SCP(list ds)
{
	node p = ds.head;
	do
	{
		if (KT_SCP(p->data))
			cout << p->data << " ";
		p = p->next;
	} while (p!=ds.head);
}

//kiem tra day so cap 3
bool KT_DSCap3(list ds)
{
	int tich = 1;
	node p = ds.head;
	
	do
	{
		tich = p->data * 3;
		p = p->next;
		if (tich!=p->data )
		{
			if (p == ds.head)
				break;
			return false;
		}
	} while (p != ds.head);
	return true;
}
//xuat ra so am lon nhat
int Max_Am(list ds)
{
	int max = 0;
	node p = ds.head;
	do
	{
		if (p->data < 0)
		{
				if(max==0)
				max = p->data;
		else if (max < p->data)
				max = p->data;
		}
		p = p->next;
	} while (p!=ds.head);
	return max;
}
// sap xep giam dan
void SapXep_Giam(list& ds)
{
	for (node p=ds.head;p!=ds.last;p=p->next)
	{
		for (node q=p->next;q!=ds.head;q=q->next)
		{
			if (p->data < q->data)
				swap(p->data, q->data);
		}
	}
	ds.last->next = ds.head;
}
//chen truoc phan tu x but chua nghi ra thuat toan de chen co 2 x giong nhau tro len 
void chen_Truoc(list& ds, int x, int a)
{
	node q = ds.head;
	if (!isEmpty(ds))
	{
		do
		{
			if (q->next->data == a)
				chenSauq(q, x);
			q = q->next;
		} while (q != ds.head);
	}
}
//chen sau phan tu x 
void Chen_Sau(list& ds, int x, int a)
{
	node q = ds.head;
	if (!isEmpty(ds))
	{
		do
		{
			if (q->data == a)
			{
				chenSauq(q, x);
			}
			q = q->next;
		} while (q != ds.head);
	}
}
node chenSauq(node q, int x)
{
	node p = NewNode(x);
	p->next = q->next;
	q->next = p;
	return q;
}