#include<iostream>
using namespace std;
class PS {
	private:
		int ts;
		int ms;
	public:
		void nhap() {
			cout<<"Nhap tu so la:";
			cin>>ts;
			cout<<"Nhap mau so la: ";
			cin>>ms;
			while(ms == 0 ) {
				cout<<"Nhap lai! Khong hop le: ";
				cin>>ms;
			}
		}
		void xuat();
};
void PS::xuat(){
	cout<<ts <<" / "<<ms<<endl;
}

int main() {
	PS a;
	a.nhap();
	a.xuat();
}
