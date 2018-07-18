#include <iostream>

using namespace std;

class Bola{
	private:
		int code;
		string pemain;
		string club;
	public:
		
	Bola(int code,string pemain, string club);
			int getCode();
			string getPemain();
			string getClub();

};

Bola::Bola(int code,string pemain,string club){
this->code=code;
this->pemain=pemain;
this->club=club;
}

int Bola::getCode(){
	return this->code;
}
string Bola::getPemain(){
	return this->pemain;
}

string Bola::getClub(){
	return this->club;
}
int main(){
	Bola bola = Bola(10,"Kun Aguero","Manchester City");
	cout<<"Nomor		: "<<bola.getCode()<<endl;
	cout<<"Nama Pemain	: "<<bola.getPemain()<<endl;
	cout<<"Club		: "<<bola.getClub()<<endl;
}
