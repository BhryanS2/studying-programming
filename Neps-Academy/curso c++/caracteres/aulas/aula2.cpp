#include <iostream> // cin e cout

using namespace std;
 
int main(){
  
  string A;
  int a=0, e=0, i=0, o=0, u=0; //Até agora não apareceu nenhuma vogal na string A

  cin << A; //Leio a string A do dispositivo de entrada (teclado)

  for(int x=0;x<A.size(); x++){ //Passa por cada letra da palavra A.
    if(A[x] == 'a'){ //Caso a letra na posição i seja a letra 'a'
      a++; //Aumento a quantidade de a's encontrados em 1
    }
    else if(A[x] == 'e'){ //O mesmo vale para todas as outras letras
      e++;
    }
    else if(A[x] == 'i'){
      i++;
    }
    else if(A[x] == 'o'){
      o++;
    }
    else if(A[x] == 'u'){
      u++;
    }
  }

  cout<<"a: "<<a<<"\n"; //Imprimo a quantidade encontrada de cada letra.
  cout<<"e: "<<e<<"\n";
  cout<<"i: "<<i<<"\n";
  cout<<"o: "<<o<<"\n";
  cout<<"u: "<<u<<"\n";
  
  return 0;
}