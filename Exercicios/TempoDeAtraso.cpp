#include <bits/stdc++.h>
using namespace std;
int main(){
    int MinutoDeChegada, HoraDaChegada, HoraAtual, MinutoAtual, HoraDaReuniao, MinutoDaReuniao;
    int ReuniaoMinutos, ChegadaMinutos;

    cin >> HoraAtual >> MinutoAtual >>  HoraDaReuniao >>  MinutoDaReuniao;
    
    HoraDaChegada = HoraAtual;
    MinutoDeChegada = MinutoAtual + 45;
    
    if(MinutoDeChegada >= 60){
    	HoraDaChegada = HoraDaChegada + 1;
    	MinutoDeChegada = MinutoDeChegada - 60;
	}
	
	ChegadaMinutos = (HoraDaChegada * 60) + MinutoDeChegada;
	ReuniaoMinutos = (HoraDaReuniao * 60) + MinutoDaReuniao;	
	
	if(ChegadaMinutos < ReuniaoMinutos) 
		cout << "Sucesso" << endl;
	else 
		cout << "Atrasado " << ChegadaMinutos - ReuniaoMinutos<< endl;
	
}
