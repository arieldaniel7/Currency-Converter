#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>

using namespace std;

float curConv(float a, float b);
void printConv(float a);

int main(){

    cout << "Hi Welcome To Currency Converter" << endl;
    cout << "Small Project To Practice My C++ Skill" << endl;
    cout << "Made By Ariel" << endl;
    cout << endl;

    while (true)
    {
        string cur;
        string con;
        cout << "(GUNAKAN HURUF KAPITAL UNTUK MENGISI NILAI MATA UANG)" << endl;
        cout << "Pilih Mata Uang(USD/GBP): "; cin >> cur;
        if(cur == "USD"){
            double usd;
            double idr = 15232;
            double euro = 1.02;
            double jpy = 144.66;
            double myr = 4.64;
            double sgd = 1.43;
            double krw = 1430.27;
            double aed = 3.67;
            double hkd = 7.85;
            double inr = 81.62;
            double gbp = 0.90;
            cout << "Masukkan Jumlah USD: "; cin >> usd;
            cout << "IDR\n" << "EUR\n" << "JPY\n" << "MYR\n" << "SGD\n" << "KRW\n" << "AED\n" << "HKD\n" << "INR\n" << "GBP\n";
            cout << "(PILIH MATA UANG YANG TERSEDIA)\nMasukkan Mata Uang yang ingin di konversi: "; cin >> con;
            if(con == "IDR"){
                double result = usd * idr;
                printf("Indonesia Rupiah: ");
                printf("%d", result);
                cout << endl;
            } else if(con == "EUR"){
                cout << "Euro: " << usd * euro;
                cout << endl;
            } else if(con == "JPY"){
                cout << "Japanese Yen: " << usd * jpy;
                cout << endl;
            } else if(con == "MYR"){
                cout << "Malaysia Ringgit: " << usd * myr;
                cout << endl;
            } else if(con == "SGD"){
                cout << "Singapore Dollar: " << usd * sgd;
                cout << endl;
            } else if(con == "KRW"){
                cout << "Korea Won: " << usd * krw;
                cout << endl;
            } else if(con == "AED"){
                cout << "United Emirates Arab Dirham: " << usd * aed;
                cout << endl;
            } else if(con == "HKD"){
                cout << "Hongkong Dollar: " << usd * hkd;
                cout << endl;
            } else if(con == "INR"){
                cout << "India Rupee: " << usd * inr;
                cout << endl;
            } else if(con == "USD"){
                cout << "Poundsterling: " << usd * usd;
                cout << endl;
            } else {
                cout << "United States Dollar: " << usd;
                cout << endl;
            }

        } else if(cur == "GBP"){
            double gbp;
            double idr = 16914;
            double euro = 1.13;
            double jpy = 160.56;
            double myr = 5.15;
            double sgd = 1.59;
            double krw = 1586.29;
            double aed = 4.08;
            double hkd = 8.71;
            double inr = 90.63;
            double usd = 0.90;
            cout << "Masukkan Jumlah GBP: "; cin >> gbp;
            cout << "IDR\n" << "EUR\n" << "JPY\n" << "MYR\n" << "SGD\n" << "KRW\n" << "AED\n" << "HKD\n" << "INR\n" << "USD\n";
            cout << "Masukkan Mata Uang yang ingin di konversi: "; cin >> con;
            if(con == "IDR"){
                cout << "Indonesia Rupiah: " << gbp * idr;
                cout << endl;
            } else if(con == "EUR"){
                cout << "Euro: " << gbp * euro;
                cout << endl;
            } else if(con == "JPY"){
                cout << "Japanese Yen: " << gbp * jpy;
                cout << endl;
            } else if(con == "MYR"){
                cout << "Malaysia Ringgit: " << gbp * myr;
                cout << endl;
            } else if(con == "SGD"){
                cout << "Singapore Dollar: " << gbp * sgd;
                cout << endl;
            } else if(con == "KRW"){
                cout << "Korea Won: " << gbp * krw;
                cout << endl;
            } else if(con == "AED"){
                cout << "United Emirates Arab Dirham: " << gbp * aed;
                cout << endl;
            } else if(con == "HKD"){
                cout << "Hongkong Dollar: " << gbp * hkd;
                cout << endl;
            } else if(con == "INR"){
                cout << "India Rupee: " << gbp * inr;
                cout << endl;
            } else if(con == "USD"){
                cout << "United States Dollar: " << gbp * usd;
                cout << endl;
            } else {
                cout << "Poundsterling: " << gbp;
                cout << endl;
            }
        }
    }
    

    cin.get();
    return 0;
}
