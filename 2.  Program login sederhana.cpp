#include<iostream>
using namespace std;
int main()
{
	string username, password;
	cout<< "Masukkan Username : ";
	cin>>username;
	cout<< "Masukkan Password : ";
	cin>>password;
	if ( username == "rendiarta13" && password == "renkenzou04")
		cout<< "Username dan Password sesuai, Login berhasil" <<endl;
	else if ( username != "rendiarta13" || password != "renkenzou04")
		if ( username == "rendiarta13" && password != "renkenzou04")
			cout<< "Username sesuai, Password tidak sesuai" <<endl;
		else if ( username != "rendiarta13" && password == "renkenzou04")
			cout<< "Username tidak sesuai, Password sesuai" <<endl;
	else
		cout<< "Username dan Password tidak sesuai"<<endl;

	return 0;
}
