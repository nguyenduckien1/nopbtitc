#include<iostream>
#include<string.h>
using namespace std;

class Nguoi {
	protected:
		char ht[30];
		int ns;
	public:
		Nguoi(char *ht = "" , int ns = 0) {
			strcpy(this->ht,ht);
			this->ns = ns;
		}
		
		void nhap() {
			cout<<"Nhap ho ten la: ";
			fflush(stdin);
			cin.getline(ht,30);
			cout<<"Nhap nam sinh la: ";
			cin>>ns; 
		}
		
		void xuat() {
			cout<<" HO TEN "<<ht<<endl
			 	<<" NAM SINH "<<ns<<endl;
		}
		
}; 

class TS : public Nguoi {
		protected:
			int sbd;
			float dt,dl,dh;
		public:
			TS(char* ht = "", int ns = 0,int sbd = 0, float dt = 0.0,float dl = 0.0 , float dh = 0.0) : Nguoi(ht,ns) {
				this->sbd = sbd;
				this->dt = dt;
				this->dl = dl;
				this->dh = dh;
			}
			 
			void nhap() {
				Nguoi::nhap();
				
				cout<<"Nhap so bao danh la: ";
				cin>>sbd;
				cout<<"Nhap diem toan la: ";
				cin>>dt;
				cout<<"Nhap diem ly la: ";
				cin>>dl;
				cout<<"Nhap diem hoa la: ";
				cin>>dh;
			}
			
			void xuat() {
				Nguoi::xuat();
				
				cout<<" SO BAO DANH "<<sbd<<endl
					<<" DIEM TOAN "<<dt<<endl
					<<" DIEM LY "<<dl<<endl
					<<" DIEM HOA "<<dh<<endl
					<<" TONG BA MON "<<this->get_tong()<<endl;
			}
			
			float get_tong() {
				return this->dt + this->dl + this->dh;
			}
};


void Nhap_ts(TS a[], int &n ) {
	cout<<"\tNhap thong tin thi sinh la: "<<endl;
	for(int i=0;i<n;i++) {
		cout<<"NHap thong tin thi sinh thu "<<i+1<<endl;
		a[i].nhap();
	}
}

void Xuat_ts(TS a[] , int n) {
	cout<<"\tThong tin thi sinh la: "<<endl;
	for(int i=0;i<n;i++) {
		cout<<"THi sinh thu "<<i+1<<endl;
		a[i].xuat();
	}
}

void sort_ts(TS a[] , int &n) {
	cout<<"\t\nThi sinh truoc khi sap xep la:  ";
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i].get_tong() > a[j].get_tong()) {
				swap(a[i],a[j]);
			}
		}
	}
	Xuat_ts(a,n);
}
int main () {
	int n;
	cout<<"Nhap so luong thi sinh la: ";
	cin>>n;
	
	TS a[n];
	Nhap_ts(a,n);
	Xuat_ts(a,n);
	sort_ts(a,n);
	return 0;
}
