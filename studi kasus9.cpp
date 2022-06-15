#include <iostream>
using namespace std;



class Bilangan{
  public: 
    void masukkanbil();
    void urutkanbil();
    void matriks();
  private:
    int n,brs,klm;
    int data[20];
    int output[40][40];
    int d=0;
};


  void Bilangan::masukkanbil(){
    cout<<"Masukkan banyaknya bilangan :";
    cin>>n;

    for (int i=0; i<n;i++){
      cout<<"data ke- "<<i<<" = ";
      cin>>data[i];
    }
  }
    
  void Bilangan::urutkanbil(){
  int temp;
  for( int i=0; i<19; i++){
    for(int j=i+1; j<20;j++){
      if(data[i]>data[j]){
        temp = data[i];
        data[i] = data[j];
        data[j] = temp;
      }
    }
  }
  cout << "\nSETELAH DIURUTKAN \n";
  for (int j=0; j<n;j++){
    cout << data[j] << " ";
  }
  cout << endl;
  }
  
  void Bilangan::matriks(){
  cout<<endl<<"\n";
  cout<<"masukkan banyaknya kolom = ";
  cin>>klm;
  cout<<"masukkan banyaknya baris = ";
  cin>>brs;
	
	for (int k=0; k<brs; k++){
	  for (int l=0; l<klm; l++){
	    output[k][l]=data[d];
	    d++;
    }
  }
  for (int k=0; k<brs; k++){
	  for (int l=0; l<klm; l++){
      cout<<output[k][l]<<"  ";
    }
    cout<<endl;
  }
  }

  int main(){
    Bilangan z;
    z.masukkanbil();
    z.urutkanbil();
    z.matriks();
    return 0;
  }

