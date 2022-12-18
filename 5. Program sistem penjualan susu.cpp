#include<iostream>
using namespace std;
int main()
{
	int kode_susu, jumlah_pembelian;
	string ukuran;
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<"| Kode susu | Nama Produk |		Ukuran		|	Harga	|"<<endl;
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<"| 1         | Dancow      |	B = Besar		| Rp. 10.000,-  |"<<endl;
	cout<<"|           |             |	S = Sedang		| Rp. 4.250,-   |"<<endl;
	cout<<"|           |             |	K + Kecil		| Rp. 2.100,-   |"<<endl;
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<"| 2         | Indomilk    |	B = Besar		| Rp. 8.500,-	|"<<endl;
	cout<<"|           |             |	S = Sedang		| Rp. 4.000,-   |"<<endl;
	cout<<"|           |             |	K = Kecil		| Rp. 2.025,-   |"<<endl;
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<"| 3         | Sustacal    |	B = Besar		| Rp. 17.000,-  |"<<endl;
	cout<<"|           |             |	S = Sedang		| Rp. 14.500,-  |"<<endl;
	cout<<"|           |             |	K = Kecil		| Rp. 8.300,-   |"<<endl;
	cout<<"-------------------------------------------------------------------------"<<endl;

	cout<< "Masukkan Kode Susu ( 1 - 3 ) = ";
	cin>> kode_susu;
	cout<< "Masukkan Jumlah Pembelian = ";
	cin>> jumlah_pembelian;
	cout<< "Masukkan Ukuran (B/S/K) = ";
	cin>> ukuran;

	if ( kode_susu == 1 ){
		cout<<" Susu Dancow "<<endl;
		if ( ukuran == "B" ){
			cout<< "Harga Susu Rp. 10.000" <<endl;
			jumlah_pembelian = jumlah_pembelian * 10000;
			cout<< "Jumlah Pembelian = "<<jumlah_pembelian<<endl;
		}else if ( ukuran == "S" ){
			cout<< "Harga Susu Rp 4.250" <<endl;
			jumlah_pembelian = jumlah_pembelian * 4250;
			cout<< "Jumlah Pembelian = "<<jumlah_pembelian<<endl;
		}else if ( ukuran == "K" ){
			cout<< "Harga Susu Rp. 2.100" <<endl;
			jumlah_pembelian = jumlah_pembelian * 2100;
			cout<< "Jumlah Pembelian = "<<jumlah_pembelian<<endl;
		}else{
			cout<< "Maaf, Ukuran yang anda masukkan tidak terdefinisi"<<endl;
		}
	}else if ( kode_susu == 2){
		cout<<" Susu Indomilk "<<endl;
		if ( ukuran == "B" ){
			cout<< "Harga Susu Rp. 8.500" <<endl;
			jumlah_pembelian = jumlah_pembelian * 8500;
			cout<< "Jumlah Pembelian = "<<jumlah_pembelian<<endl;
		}else if ( ukuran == "S" ){
			cout<< "Harga Susu Rp 4.000" <<endl;
			jumlah_pembelian = jumlah_pembelian * 4000;
			cout<< "Jumlah Pembelian = "<<jumlah_pembelian<<endl;
		}else if ( ukuran == "K" ){
			cout<< "Harga Susu Rp. 2.025" <<endl;
			jumlah_pembelian = jumlah_pembelian * 2025;
			cout<< "Jumlah Pembelian = "<<jumlah_pembelian<<endl;
		}else{
			cout<< "Maaf, Ukuran yang anda masukkan tidak terdefinisi"<<endl;
		}
	}else if ( kode_susu == 3){
		cout<< " Susu Sustacal "<<endl;
		if ( ukuran == "B" ){
			cout<< "Harga Susu Rp. 17.000" <<endl;
			jumlah_pembelian = jumlah_pembelian * 17000;
			cout<< "Jumlah Pembelian = "<<jumlah_pembelian<<endl;
		}else if ( ukuran == "S" ){
			cout<< "Harga Susu Rp 14.500" <<endl;
			jumlah_pembelian = jumlah_pembelian * 14500;
			cout<< "Jumlah Pembelian = "<<jumlah_pembelian<<endl;
		}else if ( ukuran == "K" ){
			cout<< "Harga Susu Rp. 8.300" <<endl;
			jumlah_pembelian = jumlah_pembelian * 8300;
			cout<< "Jumlah Pembelian = "<<jumlah_pembelian<<endl;
		}else{
			cout<< "Maaf, Ukuran yang anda masukkan tidak terdefinisi"<<endl;
		}
	}else{
		cout<<"Maaf, Kode Susu yang anda masukkan tidak tersedia"<<endl;
	}

	return 0;
}
