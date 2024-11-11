// Hitung Volume Balok.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

static void calcVolume(int width, int height, int length, int& volume)
{
    volume = width * height * length;
}

int main()
{
    int width, height, length, volume = 0;

    cout << "Halo! Ini adalah aplikasi penghitung volume kubus!\n";
    cout << "------------------------------------------------------\n";
    cout << "Masukkan lebar (cm): ";
    cin >> width;
    cout << "Masukkan panjang (cm): ";
    cin >> length;
    cout << "Masukkan tinggi (cm): ";
    cin >> height;
    cout << "------------------------------------------------------\n";
    
    calcVolume(width, height, length, volume);

    cout << "Volume kubus adalah " << volume << " cm kubik.";
}
