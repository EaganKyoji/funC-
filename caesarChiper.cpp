#include <iostream>
#include <iomanip>
using namespace std;

void judul();
void closed();

int main(){
    judul();

    string text;
    int geser;

    cout<<left<<setw(12)<<"Plain text"<<":";
    getline(cin, text);
    
    cout<<left<<setw(12)<<"Pergeseran"<<":";
    cin>>geser;
    
    int length = text.length();
    int i = 0;

    while(i<length){
        if(text[i]>='a' && text[i]<='z'){
            text[i] = (text[i] - 'a' + geser)%26 + 'a';
        }
        else if(text[i]>='A' && text[i]<='Z'){
            text[i] = (text[i] - 'A' + geser)%26 + 'A';
        }
        else{
            text = "GALAT! STRING/CHAR TIDAK DIDETEKSI";
        }
        i++;
    }

    closed();
    cout<<left<<setw(12)<<"Chiper text"<<":"<<text<<"\n";
    closed();

}

void judul(){
    cout<<"█████████████████████████████████████████████████████\n";
    cout<<"█─▄▄▄─██▀▄─██▄─▄▄─█─▄▄▄▄██▀▄─██▄─▄▄▀█████████████████\n";
    cout<<"█─███▀██─▀─███─▄█▀█▄▄▄▄─██─▀─███─▄─▄█████████████████\n";
    cout<<"▀▄▄▄▄▄▀▄▄▀▄▄▀▄▄▄▄▄▀▄▄▄▄▄▀▄▄▀▄▄▀▄▄▀▄▄▀▀▀██████████████\n";
    cout<<"█████████████████████████████████████████████████████\n";
    cout<<"█████████████████████─▄▄▄─█─█─█▄─▄█▄─▄▄─█▄─▄▄─█▄─▄▄▀█\n";
    cout<<"█████████████████████─███▀█─▄─██─███─▄▄▄██─▄█▀██─▄─▄█\n";
    cout<<"████████████████████▀▄▄▄▄▄▀▄▀▄▀▄▄▄▀▄▄▄▀▀▀▄▄▄▄▄▀▄▄▀▄▄▀\n";
    cout<<"█████████████████████████████████████████████████████\n";
    cout<<"╔════════════════════════════════════════════════════╗\n";
}

void closed(){
    cout<<"╚════════════════════════════════════════════════════╝\n";
}