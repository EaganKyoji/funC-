#include <iostream>
using namespace std;

int main(){
    string text;
    int geser;

    cout<<"Masukkan teks: ";
    getline(cin, text);
    
    cout<<"Masukkan pergeseran: ";
    cin>>geser;
    
    int length = text.length();
    int i = 0;

    while(i<length){
        text[i] = text[i]+geser;
        i++;
    }

    cout<<text;

}