#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Turkish"); //Yazı dilini türkçe karakterlere açıyoruz.
    int islem, sifre, sifre2, tutar;
    int para = 1000;
    char eh;
    string islemler;

    cout << "X BANKASINA HOŞGELDİNİZ  " << endl;
    cout << "*Maskenizi takınız." << endl;
    cout << "-------------------" << endl;
    cout<<"Lütfen şifrenizi belirleyin:"; //Kullanıcının şifre belirlemesi.
    cin >> sifre;
    sifre2 = sifre;
    cout<<"Lütfen şifrenizi giriniz:";
    cin >> sifre;

    islemler:
    if (sifre == sifre2) //Şifre doğrulama
        cout<<"\nİŞLEMLER\n(1) Para Çekme\n(2) Para Yatırma\n(3) Bakiye Sorgula\n(4) Çıkış\n\n\n";
    else {
        cout<<"Şifreyi yanlış girdiniz sistemden çıkılıyor...";
        return 0;
    }
   cout<<"Yapılacak işlemi seçiniz:"; //Yapılacak işlemlerin seçilmesi
   cin >> islem;

    switch (islem) //Kullanıcının girdisine göre işlemlerin gerçekleşmesi
    {
    case 1:
        cout << "Bakiyeniz: " << para<<endl;
        cout << "Çekilecek Tutar: " << endl;;
        cin>>tutar;

        if (tutar > para) {
            cout << "Bakiye Yetersiz" << endl;
            goto islembitimi;
        }
        if (tutar <= para) 
        {
            para -= tutar;
            cout<<"Para Çekme Gerçekleşti!"<<endl;
            cout << "Bakiyeniz: " << para << endl;
            goto islembitimi;
            
        }
        break;

    case 2:
        cout<<"Bakiyeniz: " <<para<<endl;
        cout<<"Yatırılacak Tutar: ";
        cin>>tutar;
        para += tutar;
        cout<<"Para Yatırma Gerçekleşti!"<<endl;
        cout << "Bakiyeniz: " << para << endl;
        goto islembitimi;
        break;

    case 3:
        cout << "Bakiyeniz: " << para << endl;
        goto islembitimi;
        break;
    case 4: 
        break;
   
    default:
        cout<<"Yanlış tuşladınız!";
        break;
    }
    return 0;

    islembitimi:
    cout << "Başka bir işlem yapmak istiyor musunuz? (E/H) : ";
    cin >> eh;

    switch (eh)
    {
    case 'E': goto islemler;
        break;
    case 'H': break;
    default:
        break;
    }
}