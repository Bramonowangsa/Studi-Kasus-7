#include <iostream>
using namespace std;

class Kasus{
public:
int jumlahHewan, pilih;
string hewan[100];
string hewandipilih;
char karakter;

void input() {
  cout<<"= = = = = G E M B I R A  L O K A = = = = =\n"<<endl;
  cout<<"Masukkan jumlah hewan : ";
  cin>>jumlahHewan;
  for (int i=0; i<jumlahHewan; i++) {
    cout<<"Input hewan ke-"<<i+1<<" : ";
    cin>>hewan[i];
  }
  cout<<endl;
  cout<<"Sebelum diurutkan."<<endl;
  cout<<" = = = = = = = OUTPUT  = = = = = = = "<<endl;
  for (int i=0; i<jumlahHewan; i++) {
    cout<<"Hewan ke-"<<i+1<<" : "<<hewan[i]<<"   	 	|"<<endl;
  }
  cout<<" = = = = = = = = = = = = = = = = = = "<<endl;
}


void bubbleSort(){
  int i, j;
  string tmp;
  for (i = 0; i < jumlahHewan; i++){
    for (j = 0; j < jumlahHewan - i - 1; j++){
      if (hewan[j] > hewan[j + 1]){
        tmp = hewan[j];
        hewan[j] = hewan[j + 1];
        hewan[j + 1] = tmp;
      }
    }
  }
  cout<<endl;
  cout<<"Setelah diurutkan."<<endl;
  cout<<" = = = = = = = OUTPUT  = = = = = = = "<<endl;
  for (int i=0; i<jumlahHewan; i++) {
    cout<<"Hewan ke-"<<i+1<<" : "<<hewan[i]<<"   	 	|"<<endl;
  }
  cout<<" = = = = = = = = = = = = = = = = = = "<<endl<<endl;
}
void search(){
  cout<<"Pilih Hewan Di Bawah ini : "<<endl;
  cout<<" = = = = = = = OUTPUT  = = = = = = = "<<endl;
  for (int i=0; i<jumlahHewan; i++) {
    cout<<"Hewan ke-"<<i+1<<" : "<<hewan[i]<<"   		 |"<<endl;
  }
  cout<<" = = = = = = = = = = = = = = = = = = "<<endl<<endl;
  cout<<"Pilih : ";cin>>pilih;
  cout<<"Hewan yang dipilih : "<<hewan[pilih-1]<<endl;
  hewandipilih = hewan[pilih - 1];
  cout<<"cari karakter apa : ";
  cin>>karakter;
  for(int i = 0 ;i < hewandipilih.size(); i++){
    if(hewandipilih[i] == karakter){
      cout<<"karakter ditemukan pada indeks ke-"<<i<<endl;
    }
    else{
      cout<<"karakter tidak ditemukan pada indeks ke-"<<i<<endl;
    }
  }
}
};
int main() {
  Kasus obj;
  obj.input();
  obj.bubbleSort();
  obj.search();
  return 0;
}