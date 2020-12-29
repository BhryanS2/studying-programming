#include <bits/stdc++.h>
using namespace std;
int main(){
    int MinutoDeChegada = 0, HoraDaChegada= 0, HoraAtual= 0, MinutoAtual= 0, HoraDaReuniao= 0, MinutoDaReuniao= 0;
    int ReuniaoMinutos= 0, ChegadaMinutos= 0;

    cin >> HoraAtual >> MinutoAtual >>  HoraDaReuniao >>  MinutoDaReuniao;
    
    HoraDaChegada = HoraAtual;
    MinutoDeChegada = MinutoAtual + 45;
    
    if(MinutoDeChegada >= 60){
    	HoraDaChegada = HoraDaChegada + 1;
    	MinutoDeChegada = MinutoDeChegada - 60;
	}
	
	ChegadaMinutos = (HoraDaChegada * 60) + MinutoDeChegada;
	ReuniaoMinutos = (HoraDaReuniao * 60) + MinutoDaReuniao;	

	if(ChegadaMinutos <= ReuniaoMinutos ) 
		cout << "Sucesso" << endl;
	else 
		cout << "Atrasado " << ChegadaMinutos - ReuniaoMinutos<< endl;
	
}
