#include<iostream>
#include<string.h>
using namespace std;
class Giaovien {
	char ht[30],bc[20],cn[20];
	int tuoi;
	float bl;
	public:
		friend istream& operator >> (istream& in, Giaovien &a) {
			fflush(stdin);
			cout<<"Nhap ho ten la: ";
			in.getline(a.ht,30);
			fflush(stdin);
			cout<<"Nhap bang cap la: ";
			in.getline(a.bc,20);
			cout<<"Nhap chuyen nganh la: ";
			in.getline(a.cn,20);
			fflush(stdin);
			cout<<"Nhap tuoi la: ";
			in>>a.tuoi;
			cout<<"Nhap bac luong la: ";
			in>>a.bl;
			
			return in;
	}
	float lcb() {
		return this->bl * 610;
	}
	friend ostream& operator << (ostream& out , Giaovien a) {
		out<<"Ho ten la: "<<a.ht<<endl
		<<"Bang cap la: "<<a.bc<<endl
		<<"Chuyen nganh la: "<<a.cn<<endl
		<<"Tuoi la: "<<a.tuoi<<endl
		<<"Bac luong la: "<<a.bl<<endl;
	}
	
	bool operator == (Giaovien a) {
		return strcmpi(this->bc,a.bc) == 0;
	}
};

void Nhap_DSgv(Giaovien a[] , int &n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap thong tin giao vien thu "<<i+1<<" la: "<<endl;
		cin>>a[i];
	}
}

void Xuat_DSgv(Giaovien a[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"\nThong tin giao vien thu "<<i+1<<" la: "<<endl;
		cout<<a[i];
	}
}

void Sosanh(Giaovien a[], int &n) {
	Giaovien c,d;
	cin>>c>>d;
	if(c==d)
		cout<<"\nbang cap bang nhau "<<endl;
	 else
		cout<<"\nbang cap khac nhau "<<endl;
}

int main() {
	int n;
	cout<<"\nNhap so luong giao vien la: "<<endl;
	cin>>n;
	Giaovien a[n];
	cout<<"\n\tNhap thong tin giao vien la: "<<endl;
	Nhap_DSgv(a,n);
	cout<<"\n\tXuat thong tin giao vien la: "<<endl;
	Xuat_DSgv(a,n);
	cout<<"\n\tSo sanh 2 giao vien la: "<<endl;
	Sosanh(a,n);
}


