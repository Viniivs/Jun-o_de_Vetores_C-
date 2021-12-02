#include <iostream>

using namespace std;

class juntar{
int vet1[6]; 
int vet2[6]; 
int vet3[12];
int i;
  public: 
    int vetor1(int TAM[6]);
};

int juntar::vetor1(int TAM[6]){
	 
    //preenche o vetor
    for (i = 0; i < 6; i++) {
        cout << "Digite o " << i+1 << " valor do primeiro ARRAY"<< endl;
        cin >> vet1[i];
    }
  	
	for (i = 0; i < 6; i++) {
        cout << "Digite o " << i+1 << " valor do segundo ARRAY"<< endl;
        cin >> vet2[i];
    }
  
    for (i=0;i<6;i++){
    vet3[i] = vet1[i];
    }
    
	for ( i = 6; i < 12; i++ )
        vet3[i] = vet2[i-6];

    for ( i = 0; i < 12; i++ )
        cout<< "-" << "[" << vet3[i] << "]";
    }
    
    
	int main(){
    int TAM[6];
    
	juntar vett;
    vett.vetor1(TAM);
    
	return 0;
 	}
