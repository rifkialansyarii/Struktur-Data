#include <iostream>
using namespace std;
string kelas[30];
int pos = 0;
void inputData(string nama);
void outputData();

int main() {
    inputData("Indomi goreng plus telor");
    outputData();
    inputData("Ayam Bacem Sambal mata");
    outputData();
    inputData("Lontong Sayur Lauk Haruan");
    outputData();
    return 0;
}

void inputData(string nama){
    kelas[pos] = nama;
    pos++;
}

void outputData(){
    for (int i = 0; i < pos; i++){
        cout << kelas [i];
        if (i < pos-1){
            cout << ",";
        }else{
            cout << "."<< endl;
        }
    }
}