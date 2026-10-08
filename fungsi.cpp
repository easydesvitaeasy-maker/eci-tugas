#include <iostream>
using namespace std;
string nama;
string kelas;
void sapa()
{
    cout<<"selamat datang "<<endl;
}
void name()
{
    cout<<"masukkan nama ";
    cin>>nama;
}
void sekolah()
{
    cout<<"masukkan kelas ";
    cin>>kelas;
}
int main() {

    sapa();
    name();
    sekolah();
    
    return 0;
}
