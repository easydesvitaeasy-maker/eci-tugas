#include <iostream>
using namespace std;
int main() {
    string nama;
    string sekolah;
    string ulang;
    do{
    cout<<"nama anda adalah "<<endl;
    cin>>nama;
    cout<<"masukkan nama sekolah anda "<<endl;
    cin>>sekolah;
    cout<<"namamu adalah ";
    cout<<nama <<endl;
    cout<<"nama sekolah mu adalah ";
    cout<<sekolah <<endl;
        cout<<"apakah anda mau mengulang, tekan y atau Y  "<<endl;
        cin>>ulang;
    }
      while  (ulang=="y"|| ulang=="Y");
    system ("pause");
    return 0;
}
