# Jun-o_de_Vetores_C-
Junção de 2 vetores em um terceiro vetor.
Ter Windows como sistema operacional 7 ou superior;
Ter o software DEV++ instalado e com a linguagem C++ connfigurada;
Primeiro definimos as variáveis;

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

O código começa com 2 Arrays onde o usuário irá digitar os valores desejados, sendo 6 em cada um dos 2 Arrays;

    int juntar::vetor1(int TAM[6])
    for (i = 0; i < 6; i++) {
        cout << "Digite o " << i+1 << " valor do primeiro ARRAY"<< endl;
        cin >> vet1[i];
    }
	  for (i = 0; i < 6; i++) {
        cout << "Digite o " << i+1 << " valor do segundo ARRAY"<< endl;
        cin >> vet2[i];
    }
  
  Logo após o código irá executar a função de juntar os dois vetores iniciais em um terceiro vetor;
  Printando assim em ordem todos os valores digitados pelo usuário na tela;
  
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
                                          
