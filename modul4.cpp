#include <iostream>
using namespace std;
//prototype
void prosesbaca ();
void prosestukar ();
void prosestampil ();
// varabel global
int a, b, temp;
//program utama
int main (){
	prosesbaca();
	prosestukar();
	prosestampil();
	return 0;
}
//proses membaca
void prosesbaca () {
	cout <<"masukan nilai A : ";
	cin >> a;
	cout <<"masukan nilai B : ";
	cin >>b;
//proses tukar
	void prosestukar () {
		temp = b;
		b = a;
		a = temp;
//proses tampil
	void prosestampil () {
		cout <<"===============" <<endl;
		cout << "Nilai A sekarang : " << a << endl;
		cout << "Nilsi B sekarang : " << b;
}