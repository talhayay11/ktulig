#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <istream>
#include <stdio.h>
#include <sstream>
#include <time.h>
#include <limits.h>
#include <stdint.h>
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

class yonetici :public kisi {
	char* yonetici_sifre;
public:
	bool yonetici_giris();
	void indirim_kodu_tanımla();//müsteriye ozel indirim kodu string olarak olusturulup 2 boyutlu bir dizide tutulacak
	



	
	void sikayet_goster();//sikayet.txt acilacak.
	void kurye_ekle();//kurye kısmından alınacak.
	void fatura_goster();//sepet.txt acilacak
	void kategori_guncelle();//kategorilerin guncellenmesı
	void kiyafet_ekle();//kiyafet.txt acilacak
	
};
class kullanici : public kisi
{
private:
	string kullanci_adi;
	string sifre;
	string eposta;
	string adres;
	string indirim_kodu;
	string dtarihi;
public:
	kullanici()
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
	void sifre_degistir(string kullaniciadi, string yeni_sifre)
		
	{
		this->sifre = sifre;
		this->kullanci_adi = kullaniciadi;
		string* bul = &sifre;
		
	}
	
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
	/*void SifreDegistir(string yeni_sifre)
	{
		cin >> yeni_sifre;
		this->sifre = yeni_sifre;
	}*/
};
//kullanici::kullanici(string ad, int telno, string kullanci_adi, string sifre, string eposta, string adres, string indirim_kodu)
//{
//	this->ad = " ";
//	this->telno = 0;
//	this->kullanci_adi = " ";
//	this->sifre = " ";
//	this->eposta = " ";
//	this->adres = " ";
//	this->indirim_kodu = " ";
//	this->dtarihi = " ";
//}
class kiyafet
{
protected:
	string kategori;
	string renk;
	double fiyat;
	int kiyafet_id;
	string beden;
public:
	kiyafet()
	{
		renk = ' ';
		fiyat = 0;
		kiyafet_id = 0;
		beden = ' ';
	}
	void setkategori(string kategori)
	{
		this->kategori = kategori;
	}
	void setrenk(string renk)
	{
		this->renk = renk;
	}
	void setfiyat(double fiyat)
	{
		this->fiyat = fiyat;
	}
	void setkiyafet_id(int kiyafet_id)
	{
		this->kiyafet_id = kiyafet_id;
	}
	void setbeden(string beden)
	{
		this->beden = beden;
	}
	string getkategori()
	{
		return kategori;
	}
	string getrenk()
	{
		return renk;
	}
	double getfiyat()
	{
		return fiyat;
	}
	int getkiyafet_id()
	{
		return kiyafet_id;
	}
	string getbeden()
	{
		return beden;
	}


	bool kategori_secim(int secim)
	{
		switch (secim)
		{
		case 1:
			kategori = "Elbise";
			kiyafet_id = 1;
			fiyat = 500;
			return true;

			break;
		case 2:
			kategori = "Tisort";
			kiyafet_id = 2;
			fiyat = 50;
			return true;
			break;
		case 3:
			kategori = "Pantolon";
			kiyafet_id = 3;
			fiyat = 100;
			return true;
			break;
		case 4:
			kategori = "Etek";
			kiyafet_id = 4;
			fiyat = 200;
			return true;
			break;
		case 5:
			kategori = "Ayakkabi";
			kiyafet_id = 5;
			fiyat = 350;
			return true;
			break;
		case 6:
			kategori = "Gomlek";
			kiyafet_id = 6;
			fiyat = 350;
			return true;
			break;
		default:
			cout << "YANLIS KATEGORI SECIM YAPTINIZ" << endl;
			return false;
			break;
		}
	}




	bool renk_secim(int secim)
	{
		switch (secim)
		{
		case 1:
			renk = "KIRMIZI";
			return true;

			break;
		case 2:
			renk = "MAVI";
			return true;
			break;
		case 3:
			renk = "SIYAH";
			return true;
			break;
		case 4:
			renk = "BEYAZ";
			return true;
			break;
		case 5:
			renk = "GRI";
			return true;
			break;
		default:
			return false;
			break;
		}
	}


	bool beden_secim(int secim)
	{
		switch (secim)
		{
		case 1:
			beden = "SMALL";
			return true;

			break;
		case 2:
			beden = "MEDIUM";
			return true;
			break;
		case 3:
			beden = "LARGE";
			return true;
			break;
		default:
			return false;
			break;
		}
	}
};


class siparis : public kiyafet
{
private:
	int siparis_no;
	double siparis_fiyat;
	zaman siparis_baslangici;// kurye kısmından alınacak
	zaman siparis_ulasim;// kurye kısmından alınacak
	string kullanici_ad;

public:

	siparis(string kullanici_ad)
	{

		this->kullanici_ad = kullanici_ad;
	};

	void setKullanici_ad(string kullanici_ad)
	{
		this->kullanici_ad = kullanici_ad;
	}
	string getKullanici_ad()
	{
		return kullanici_ad;
	}

	void setSiparis_fiyat(double siparis_fiyat)
	{
		this->siparis_fiyat = siparis_fiyat;
	}
	double getSiparis_fiyat()
	{
		return siparis_fiyat;
	}

	int getSiparisNo()
	{
		return siparis_no;
	}

	void siparisNoOlustur()
	{
		ifstream read;
		string line;
		getline(read, line);
		read.open("sepet.txt");
		do {
			srand(time(NULL));
			siparis_no = 1000000000 + rand() % 1000 + 1;

		} while (line == to_string(siparis_no));


	}


	void sepet_olustur()
	{
		string line;
		ofstream write;
		write.open("sepet.txt", ios::app);
		write << kullanici_ad << endl;
		write << siparis_no << endl;
		write.close();
	}
	void sepete_kiyafet_ekle()
	{
		ofstream write;
		write.open("sepet.txt", ios::app);
		write << kategori << endl;
		write << renk << endl;
		write << beden << endl;
		write << fiyat << endl;
		write.close();
	}
	void sepet_Goster()
	{
		string line, line2;
		ifstream read;
		read.open("sepet.txt");
		int sayac = 0;
		string value = to_string(siparis_no);
		while (!read.eof())
		{
			getline(read, line);
			getline(read, line2);

			if (line == kullanici_ad && line2 == value)
			{
				cout << line << endl;
				cout << line2 << endl;
				do
				{
					getline(read, line);
					cout << line << endl;
				} while (line != "");
			}

		}
		cout << "Siparis Tutari: " << siparis_fiyat << " TL" << endl;
		read.close();
	}

};



bool kod_sorgu(string kullaniciadi, string kod) {
	ifstream okuma;
	string line1, line2;
	okuma.open("kupon.txt");
	while (!okuma.eof()) {
		getline(okuma, line1);
		getline(okuma, line2);
		if (line1 == kullaniciadi && line2 == kod) return true;

	}
	return false;
}
kullanici nesne;
void yonetici::indirim_kodu_tanımla() {
	string kullanici_adi, kod;
		cout << "INDIRIM KULLANMAK ISTEDIGINIZ KULLANICI ADINI GIRINIZ:";
		cin >> kullanici_adi;
		cout << "KULLANICI ICIN INDIRIM KODU GIRINIZ:";
		cin >> kod;
		ofstream write;
		write.open("kupon.txt", ios::app);
		write << kullanici_adi << endl;
		write << kod << endl;
		write.close();
	
}
bool yonetici::yonetici_giris () {
	string yonetici[2][2] = { {"derya","1234"},{"talha","1234"} };
	cout << "YONETICI ADI VE SIFRE GIRINIZ" << endl;
	cin >> yonetici[0][0];
	if (yonetici[0][0] == "derya" || yonetici[0][0] == "talha") {
		cin >> yonetici[0][1];
		if (yonetici[0][1] == "1234") {
			cout << "BASARILI BIR SEKILDE GIRIS YAPTINIZ" << endl;
			system("PAUSE");
			system("CLS");
			return true;
		}
		else {
			cout << "YANLIS KULLANICI ADI VEYA SIFRE LUTFEN TEKRAR DENEYINIZ" << endl;
			system("PAUSE");
			system("CLS");
			return false;
		}
	}
	else {
		cout << "YANLIS KULLANICI ADI VEYA SIFRE LUTFEN TEKRAR DENEYINIZ" << endl;
		system("PAUSE");
		system("CLS");
		return false;
       }
	
	
}
void yonetici::sikayet_goster() {
	ifstream oku;
	string line;
	oku.open("sikayet.txt");
	while (!oku.eof()) {
		getline(oku, line);
		cout << line << endl;
	}
}

void yonetici::fatura_goster() {
	ifstream oku;
	string line;
	oku.open("sepet.txt");
	while (!oku.eof()) {
		getline(oku, line);
		cout << line << endl;
	}
}
bool Giris()
{
	string kullanciadi, sifre;
	cout << "Kullanici Adi: "; cin >> kullanciadi;
	cout << "Sifre: "; cin >> sifre;
	string line1, line;
	int intline=0;
	ifstream read;
	read.open("kayit.txt");
	
	while(getline(read, line1))
	{

		nesne.setkullanci_adi(kullanciadi);
		getline(read, line);
		if (kullanciadi == line1 && sifre == line)
		{
			nesne.setsifre(line);
			getline(read, line);
			nesne.setName(line);
			getline(read, line);
			nesne.seteposta(line);
			getline(read, line);
			nesne.setTelno(stoi(line));
			getline(read, line);
			nesne.setadres(line);
			nesne.setindirim_kodu("");
			getline(read, line);
			nesne.setdtarihi(line);
			return true;
		}
			
	}
	return false;
}

class zaman {
public:
	int saat;
	int dakika;
	zaman()
	{
		saat = 0;
		dakika = 0;
	}
	void set_saat(int saat)
	{
		this->saat = saat;
	}
	void set_dakika(int dakika)
	{
		this->dakika = dakika;
	}
	int get_saat( )
	{
		return saat;
	}
	int get_dakika()
	{
		return dakika;
	}
};







int main()
{
	int menu_secimi{}, altmenu_secimi{};

	cout << "ISTEDIGINIZ MENUYE GECIS YAPMAK ICIN LUTFEN MENU ADI YANINDAKI NUMARAYI KLAVYEDEN GIRINIZ\n\n";
	cout << "1. KULLANICI GIRISI\n";
	cout << "2. YONETICI GIRISI\n";
	cout << "3. UYE KAYDI\n";
	cout << "4. CIKIS\n";
	cin >> menu_secimi;
	string sikayet = "";
	string ad = " ", kullanciadi = " ", sifre = " ", eposta = " ", adres = " ", indirim_kodu = " ", dtarihi = " ";
	int telno = 0;
	string yeni_sifre = " ";
	int kategori_secimi;
	ofstream file;
	ifstream read;
	bool durum;
	string sepet;
	string secim;
	int intSecim = 0, intrenksecim = 0,intbedensecim=0;
	double toplam = 0;
	kiyafet kiyafetNesne;
	siparis siparisNesne("");
	yonetici yoneticiNesne;
	
	string line1, line;
	switch (menu_secimi)
	{

	case 1:
		//burada sisteme 2 şekilde giris yapabilecegiz musteri girisi veya yönetici girişi
		//müsteriler kiyafet kıyafette beden ve renk tercihi yapabilecek ve birden fazla seçim yapabilecek
		//kişi ve kıyafet sınıflarının fonk çagırılacak
		durum = Giris();
		if (!durum)
		{
			cout << "Yanlis Giris Yaptiniz Tekrar Deneyiniz!" << endl;
			system("PAUSE");
			system("CLS");
			main();
		}
		else
		{


			system("CLS");
			cout << "Basarili bir sekilde giris yaptin!" << endl;
			Sleep(1000);
			system("CLS");
			//EYLEM SECIMI
		altmenu:
			toplam = 0;
			cout << "LUTFEN YAPMAK ISTEDIGINIZ ISLEMI SECINIZ\n\n";
			cout << "1. KATEGORILERI GOSTER\n";//done
			cout << "2. SIPERIS TAKIBI\n";//kurye kısmında halledilecek
			cout << "3. SIKAYET/ONERI OLUSTURMA\n";//done
			cout << "4. SIFRE DEGISTIR\n";
			cout << "5. GERI DON\n";//done
			cin >> altmenu_secimi;
			system("CLS");
			switch (altmenu_secimi)
			{
			case 1:
				//kategorilerin gösterimi
				siparisNesne.setKullanici_ad(nesne.getkullanci_adi());
				siparisNesne.siparisNoOlustur();
				siparisNesne.sepet_olustur();
				while (true)
				{
					cout << "LUTFEN YAPMAK ISTEDIGINIZ ISLEMI SECINIZ\n\n";
					cout << "1. ELBISE\n";
					cout << "2. TISORT\n";
					cout << "3. PANTOLON\n";
					cout << "4. ETEK\n";
					cout << "5. AYAKKABI\n";
					cout << "6. GOMLEK\n";
					cin >> kategori_secimi;
					system("CLS");
					kiyafetNesne.setkiyafet_id(kategori_secimi);
					if (siparisNesne.kategori_secim(kiyafetNesne.getkiyafet_id()))
					{

						do
						{
							cout << "ELBISE KATEGORISI\n\n";
							cout << "LUFTEN RENK SECIN \n\n";
							cout << "1.KIRMIZI\n";
							cout << "2.SARI\n";
							cout << "3.MAVI\n";
							cout << "4.SIYAH\n";
							cout << "5.GRI\n";
							cin >> intrenksecim;
							system("CLS");
							if (kiyafetNesne.renk_secim(intrenksecim))
							{
							
								do
								{
									cout << "LUTFEN KIYAFET BEDENINI SECIN" << endl;
									cout << "1.SMALL\n";
									cout << "2.MEDIUM\n";
									cout << "3.LARGE\n";
									cin >> intbedensecim;
									system("CLS");
									if (kiyafetNesne.beden_secim(intbedensecim))
									{
										siparisNesne.setkiyafet_id(kiyafetNesne.getkiyafet_id());
										siparisNesne.setrenk(kiyafetNesne.getrenk());
										siparisNesne.setbeden(kiyafetNesne.getbeden());


										cout << "KIYAFET BASIRIYLA EKLENDI." << endl << endl;
										cout << "ALISVERISE DEVAM ETMEK ICIN 1 E BASINIZ\n";
										cout << "SEPETINIZE GECMEK ICIN 2'E BASINIZ\n";
										cin >> intSecim;
										system("CLS");
										while (intSecim == 1 || intSecim == 2)
										{
											if (intSecim == 1)
											{
												siparisNesne.sepete_kiyafet_ekle();
												toplam += siparisNesne.getfiyat();
												cout << "URUNUNUZ BASARI ILE EKLENDI \n";
												system("CLS");
												break;
											}

											
											else if (intSecim == 2)
											{
												cout << "SEPET BASARIYLA OLUSTURULDU \n";
												siparisNesne.sepete_kiyafet_ekle();
												toplam += siparisNesne.getfiyat();
												cout << "INDIRIM KODU KULLANMAK ICIN 1'E BASINIZ." << endl;
												cout << "INDIRIM KODSUZ DEVAM ICIN HERHANGI BIR TUSA BASINIZ." << endl;
												cin >> secim;
												if (secim == "1") {
													kupongir:
													cout << "INDIRIM KODUNUZU GIRINIZ :";
													cin >> indirim_kodu;
													if (kod_sorgu(nesne.getkullanci_adi(), indirim_kodu)) {
														if (indirim_kodu == "INDIRIM10") {
															toplam -= 10;
														}
														else if (indirim_kodu == "INDIRIM20") {
															toplam -= 20;
														}
														else if (indirim_kodu == "INDIRIM30") {
															toplam -= 30;
														}
														else if (indirim_kodu == "INDIRIM50") {
															toplam -= 50;
														}
														cout << "INDIRIM UYGULANDI." << endl;
													}
													else {
														cout << "KOD TANIMLI DEGIL!" << endl;
														cout << "KODU TEKRAR GİRMEK ICIN 1'E KODSUZ DEVAM ETMEK ICIN HERHANGI BIR TUSA BASINIZ." << endl;
														cin >> intSecim;
														if (intSecim == 1) {
															system("cls");
															goto kupongir;
														}
													}
												}
												

												siparisNesne.setSiparis_fiyat(toplam);
												system("CLS");
												siparisNesne.sepet_Goster();
												cout << "ODEMEYI ONAYLAMAK ICIN 1 GIRINIZ" << endl;
												cout << "SIPARISI IPTAL EDIP ANA MENUYE DONMEK ICIN HERHANGI BIR KARAKTER GIRINIZ" << endl;
												cin >> secim;
												if (secim == "1")
												{
													cout << "SIPARISINIZ BASARIYLA ALINIMISTIR..." << endl;
													system("PAUSE");
													system("CLS");
													goto altmenu;
												}
												else
												{
													cout << "SIPARISINIZ IPTAL EDILMISTIR" << endl;
													system("PAUSE");
													system("CLS");
													goto altmenu;
												}
											}
											else
											{
												cout << "YANLIS SECIM YAPTINIZ LUTFEN TEKARAR DENEYIN!\n";
												system("PAUSE");
												system("CLS");

											}
										}

									}
									else
									{
										cout << "YANLIS BEDEN SECIM YAPTINIZ" << endl;
										system("PAUSE");
										system("CLS");


									}


								} while (!(kiyafetNesne.beden_secim(intbedensecim)));
							}
							else
							{
								cout << "YANLIS RENK SECIM YAPTINIZ" << endl;
								system("PAUSE");
								system("CLS");
							}

						} while (!(kiyafetNesne.renk_secim(intrenksecim)));
					}
					else
					{
						system("PAUSE");
						system("CLS");
					}


					
				}
				break;
			case 2:

					break;
			case 3:
				system("CLS");
				cout << "SIKAYET VE ONERI SAYFASINA YONLENDIRILIYORSUNUZ" << endl;
				Sleep(1000);
				system("CLS");
				cout << "LUTFEN SIKAYETINIZI VEYA ONERINIZI TEK SATIR HALINDE GIRINIZ" << endl;
				cin >> sikayet;
				file.open("sikayet.txt", ios::app);
				file << sikayet << endl;
				system("CLS");
				cout << "ILGINIZ ICIN TESEKKURLER EYLEM SAYFASINA YONLENDIRILIYORSUNUZ. " << endl;
				Sleep(1000);
				system("CLS");
				goto altmenu;
				break;
			case 4:
				cout << "SIFRENIZI DEGISTIRMEK ICIN GEREKLI ADIMLARI TAKIP EDINIZ. " << endl;
				cout << "LUTFEN KULLANICI ADINIZI GIRINIZ" << endl;
				cin >> kullanciadi;
				cout << "LUTFEN EPOSTA ADRESINIZI GIRINIZ" << endl;
				cin >> sifre;
				break;
				/*
				read.open("kullanici.txt");
				while (getline(read, line1))
				{
					if (line1.find(kullanciadi) != string::npos && line1.find(sifre) != string::npos)
					{
						cout << "LUTFEN YENI SIFRENIZI GIRINIZ" << endl;
						cin >> yeni_sifre;
						nesne.sifre_degistir(kullanciadi, yeni_sifre);

					}*/

					/*cout << "LUTFEN KULLANICI ADINIZI GIRINIZ" << endl;
					cin >> kullanciadi;
					cout << "LUTFEN GECERLI SIFRENIZI GIRINIZ." << endl;
					cin >> sifre;
					read.close();
					line1 = ""; line = "";
						read.open ("kayit.txt",ios::app);
						while (getline(read, line))
						{
							if (line.find(kullanciadi) != string::npos)
							{
								line1 = line;
								break;
							}
						}
						read.close();
						if (line1 == "")
						{
							cout << "KULLANICI ADI BULUNAMADI" << endl;
							Sleep(1000);
							system("CLS");
							goto altmenu;
						}
						else
						{
							if (line1.find(sifre) != string::npos)
							{
								cout << "LUTFEN YENI SIFRENIZI GIRINIZ" << endl;
								cin >> yeni_sifre;
								nesne.sifre_degistir(kullanciadi, sifre, yeni_sifre);
								cout << "SIFRENIZ BASARIYLA DEGISTIRILDI" << endl;
								Sleep(1000);
								system("CLS");
								goto altmenu;
							}
							else
							{
								cout << "SIFRE HATALI" << endl;
								Sleep(1000);
								system("CLS");
								goto altmenu;
							}
						}*/
						/* else
						{
							nesne.set_kullaniciadi(kullanciadi);
							nesne.set_sifre(sifre);
							if (nesne.sifre_kontrol())
							{
								cout << "LUTFEN YEN*/
								/*while (getline(read, line1))
								{
									getline(read, line);
									if (kullanciadi == line1 && sifre == line)
									{
										getline(read, line);
										cout << "YENI SIFRE GIRINIZ:" << endl;
										cin >> sifre;
										file.clear();
										file << sifre;
										nesne.setsifre(sifre);
										cout << "SIFRE BASARIYLA DEGISTIRILDI" << endl;
										system("CLS");
										goto altmenu;
									}

								}*/
								/*cout << "KULLANICI BULUNAMADI TEKARA DENEYINIZ" << endl;*/

			

			case 5:
				system("CLS");
				main();
				break;
			default:
				system("CLS");
				cout << "YANLIS SECIM YAPTINIZ TEKARAR DENEYINIZ!" << endl;
				goto altmenu;
				break;
			}
			
			break;
	case 2:
		if (yoneticiNesne.yonetici_giris()) {
			yoneticiPaneli:
			cout << "1.INDIIRM KODU TANIMLAMA.\n" << endl;
			cout << "2.KURYE EKLE.\n " << endl;
			cout << "3.SIKAYET OKU.\n " << endl;
			cout << "4.FATURALARI GORUNTULE.\n " << endl;
			cout << "5.GERI DON.\n " << endl;
			cin >> intSecim;
			switch (intSecim)
			{
			case 1:
				yoneticiNesne.indirim_kodu_tanımla();
				cout << "KUPON BASARI ILE TANIMLANDI." << endl;
				cout << "YONETICI PANELINE GECMEK ICIN HERHANGI BIR TUSA BASIN." << endl;
				system("Pause");
				system("CLS");
				goto yoneticiPaneli;
				break;
			case 3:
				yoneticiNesne.sikayet_goster();
				cout << "YONETICI PANELINE GECMEK ICIN HERHANGI BIR TUSA BASINIZ." << endl;
				cin >> secim;
				goto yoneticiPaneli;
			case 4:
				system("CLS");
				yoneticiNesne.fatura_goster();
				cout << "YONETICI PANELINE GECMEK ICIN HERHANGI BIR TUSA BASINIZ." << endl;
				cin >> secim;
				goto yoneticiPaneli;
			case 5:
				system("CLS");
				main();
				break;
			default:
				break;
			}
		}
		
		else {
			main();
		}
		

		break;
	case 3:
		cout << "UYE KAYDI YAPMAK ICIN GEREKLI ADIMLARI TAKIP EDINIZ\n";
		//burada kişi sınıfının fonk cağırılacak ve uye kaydı alınacak.

		cout << "ADINIZI GIRINIZ:\n ";
		cin >> ad;
		cout << "TELEFON NOSU GIRINIZ:\n ";
		cin >> telno;
		cout << "Kullanici adi seciniz:\n ";
		cin >> kullanciadi;
		cout << "Sifre seciniz:\n ";
		cin >> sifre;
		cout << "E POSTA GIRINIZ:\n ";
		cin >> eposta;
		cout << "ADRES GIRINIZ:\n ";
		cin >> adres;
		cout << "DOGUM TARIHI GIRINIZ:\n ";
		cin >> dtarihi;


		file.open("kayit.txt", ios::app);
		file << kullanciadi << endl << sifre << endl << eposta << endl << adres << endl << telno << endl << dtarihi << endl;
		file.close();
		cout << "KAYIT BASARILI" << endl;
		system("PAUSE");
		system("CLS");
		main();
		break;
	case 4:
		system("cls");
		Sleep(1000);
		cout << "CIKIS YAPTINIZ. TESEKURLER\n";
		break;
		


		}
	}
}
