#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int binarLaZecimal(string binar) {
    int val = 0;
    for (int i = 0; i < binar.size(); i++)
        if (binar[binar.size() - 1 - i] == '1')
            val += pow(2, i);
    return val;
}

string mascaBinarLaZecimal(string masca) {
    stringstream ss(masca);
    string octet;
    string rezultat = "";

    while (getline(ss, octet, '.')) {
        int val = binarLaZecimal(octet);
        rezultat += to_string(val) + ".";
    }

    rezultat.pop_back(); 
    return rezultat;
}

int main() {
    string masca;
    cout << "Introdu masca binara (ex: 11111111.11111111.11111111.00000000): ";
    cin >> masca;

    cout << "Masca zecimala este: " << mascaBinarLaZecimal(masca) << endl;
    return 0;
}