// activitystruct_0222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    string umur;
};


int main()
{
    Mahasiswa mhs;
    cout << "Nomor mahasiswa :";
    cin >> mhs.nim;
    cout << "Mama Mahasiswa :";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa :";
    cin >> mhs.alamat;
    cout << "Umur Mahasiswa :";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n NIM :"  << mhs.nim;
    cout << "\n Nama :" << mhs.nama;
    cout << "\n Alamat :" << mhs.alamat;
    cout << "\n Umur :" << mhs.umur;

}


