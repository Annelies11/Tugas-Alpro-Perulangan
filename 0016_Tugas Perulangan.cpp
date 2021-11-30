#include <iostream>
#include <string>

using namespace std;

int main() {
	int pilihan, p, a, b, r, t, t_a, p_a, t_p, mod, salah;
	string ulang, peringatan = "Aris Mahmudi\nTI 1\nNPM : 2113020015";
	//float phi;
	double r2, ling, hasil;
	do {
		system("CLS");
		salah=0;
		cout<<peringatan<<endl;
		cout<<endl;
		cout<<"Pilih Rumus Bangun Datar/Ruang Apa Yang Ingin Anda Kerjakan!(pilih angkanya saja)"<<endl;
		cout<<"1. Lingkaran\n2. Persegi\n3. Trapesium\n4. Kerucut\n5. Prisma Segi Tiga"<<endl;
		cout<<"\nAnda memilih nomor : "; cin>>pilihan;
	
		switch(pilihan) {
			case 1 :
				cout<<"Anda memilih Lingkaran"<<endl;
				cout<<"Masukkan jari-jari lingkaran : ";
				cin>>r;
				mod = r%7;
				if (mod==0) {
					hasil=(22*r*r)/7;
				} else {
					hasil=3.14*r*r;
				}
				cout<<"Luas lingkaran adalah : "<<hasil;
			break;
			case 2 :
				cout<<"Anda memilih Persegi"<<endl;
				cout<<"Masukkan panjang sisi persegi : ";
				cin>>p;
				hasil=p*p;
				cout<<"Luas dari persegi "<<p<<" X "<<p<<" adalah : "<<hasil;
			break;
			case 3 :
				cout<<"Anda memilih Trapesium"<<endl;
				cout<<"    ___a_____     "<<endl;
				cout<<"   / |       \\   "<<endl;
				cout<<"  /  |t       \\  "<<endl;
				cout<<" /___|__b______\\ "<<endl;
				cout<<"Masukkan tinggi a : "; cin>>a;
				cout<<"Masukkan tinggi b : "; cin>>b;
				cout<<"Masukkan tinggi t : "; cin>>t;
				hasil=0.5*(a+b)*t;
				cout<<"Luas trapesium anda adalah : "<<hasil;
			break;
			case 4 :
				cout<<"Anda memilih Kerucut"<<endl;
				cout<<"Masukkan jari-jari alas : "; cin>>r;
				cout<<"Masukkan tinggi kerucut : "; cin>>t;
				mod = r%7;
				if (mod==0) {
					ling=(22*r*r)/7;
				} else {
					ling=3.14*r*r;
				}
				hasil=(ling*t)/3;
				cout<<"Volume kerucut anda adalah : "<<hasil;
			break;
			case 5 :
				cout<<"Anda memilih Prisma Segi Tiga"<<endl;
				cout<<"Masukkan panjang alas prisma : "; cin>>p_a;
				cout<<"Masukkan tinggi alas prisma  : "; cin>>t_a;
				cout<<"Masukkan tinggi prisma       : "; cin>>t_p;
				hasil=(0.5*p_a*t_a)*t_p;
				cout<<"Volume prisma segi tiga anda adalah : "<<hasil;
			break;
			default :
				cout<<"oops!\a"<<endl;
				salah=1;
			break;
		}
		cout<<endl;
		if(salah!=1) {
		cout<<"Apakah anda ingin menghitung lagi? (y/n)"<<endl;
		cin>>ulang;
		} else{
		ulang="y";
		peringatan="Anda mengisi dengan data yang salah. Silakan isi dengan data yang benar";
		}
		
	} while(ulang=="y"||ulang=="Y"||salah==1);
	system("CLS");
	cout<<"Terima kasih telah menggunakan layanan kami."<<endl;
	cout<<"Aris Mahmudi - arismahmudi.com"<<endl;
}
