#include <iostream>
using namespace std;
string kelas[30];
int pos = 0;
void inputData(string nama){
    kelas[pos] = nama;
    pos++;
}

int main() {
    inputData("Rifki Al Ansyari");
    return 0;
}
