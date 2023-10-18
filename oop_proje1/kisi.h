#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <istream>
#include <stdio.h>,
#include <sstream>
using namespace std;


class kisi
{
protected:
	string ad;
	int telno;
public:
	kisi();


	void setName(string ad)
	{
		this->ad = ad;
	}
	void setTelno(int telno)
	{
		this->telno = telno;
	}
	string getName() {
		return ad;
	}
	int getTelno()
	{
		return telno;
	}

};
kisi::kisi()
{
	ad = "";
	telno = 0;
}


class kullanici : public kisi
{
protected:
	/*string kullanci_adi;
	string sifre;
	string eposta;
	string adres;
	string indirim_kodu;
	string dtarihi*/;
public:
	kullanici();
	string kullanci_adi;
	string sifre;
	string eposta;
	string adres;
	string indirim_kodu;
	string dtarihi;
	/*kullanici(string*, int*, string* , string*, string*, string*, string*, string*) :kisi(ad, telno) {
		this->ad = " ";
		this->telno = 0;
		this->kullanci_adi = " ";
		this->sifre = " ";
		this->eposta = " ";
		this->adres = " ";
		this->indirim_kodu = " ";
		this->dtarihi = " ";
	}*/

	void setkullanci_adi(string kullanci_adi)
	{
		this->kullanci_adi = kullanci_adi;
	}
	void setsifre(string sifre)
	{
		this->sifre = sifre;
	}
	void seteposta(string eposta)
	{
		this->eposta = eposta;
	}
	void setadres(string adres)
	{
		this->adres = adres;
	}
	void setindirim_kodu(string indirim_kodu)
	{
		this->indirim_kodu = indirim_kodu;
	}
	void setdtarihi(string dtarihi)
	{
		this->dtarihi = dtarihi;
	}
	string getkullanci_adi()
	{
		return kullanci_adi;
	}
	string getsifre()
	{
		return sifre;
	}
	string geteposta()
	{
		return eposta;
	}
	string getadres()
	{
		return adres;
	}
	string getindirim_kodu()
	{
		return indirim_kodu;
	}
	string getdtarihi()
	{
		return dtarihi;
	}

};
kullanici::kullanici()
{
	ad = " ";
	telno = 0;
	kullanci_adi = " ";
	sifre = " ";
	eposta = " ";
	adres = " ";
	indirim_kodu = " ";
	dtarihi = " ";
}