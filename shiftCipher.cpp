/*
Nama        : Salma Tri Audryani
NPM         : 140810190051
Kelas       : A
Deskripsi   : Program Shift Cipher
*/

#include <iostream>
using namespace std;

string enkripsi(string text, int k){
    string result = "";

    for(int i = 0; i < text.length(); i++){
        if(isupper(text[i])){
            // Jika uppercase (huruf kapital)
            result += char(((text[i] + k - 'A') % 26) + 'A');
        }else{
            // Jika lowercase (huruf kecil)
            result += char(((text[i] + k - 'a') % 26) + 'a');
        }
    }
    return result;
}

string dekripsi(string text, int k){
    string result = "";

    for(int i = 0; i < text.length(); i++){
        if(isupper(text[i])){
            // Jika uppercase (huruf kapital)
            result += char(((text[i] - k - 'A' + 26) % 26) + 'A');
        }else{
            // Jika lowercase (huruf kecil)
            result += char(((text[i] - k - 'a' + 26) % 26) + 'a');
        }
    }
    return result;
}

int main(){
    string text, cipherText, plainText;
    int k;

    cout << "\nMasukkan text  : ";
    cin >> text;

    inputK :
    cout << "Masukkan angka perpindahan (shift)  : ";
    cin >> k;

    cipherText = enkripsi(text, k);
    plainText = dekripsi(cipherText, k);
        
    cout << "\n-----------------------------------------------------";
    cout << "\nTeks     : " << text;
    cout << "\nNilai k  : " << k;
    cout << "\n\nHasil Enkripsi (CipherText)  : " << cipherText;
    cout << "\nHasil Dekripsi (PlainText)   : " << plainText;
    cout << "\n-----------------------------------------------------\n";
}