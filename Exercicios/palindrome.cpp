#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int contp = 0, contn = 0, j = 0;
    string risada,consoantesrev, consoantesnorm, totalr, totaln;
    cin >> risada;
    for(int i = 0; i < risada.size(); i++){	
		if((risada[i] == 'a') || (risada[i] == 'e') || (risada[i] == 'i') || (risada[i] == 'o') || (risada[i] == 'u')){
            consoantesnorm[i] = risada[i];
	        totaln += consoantesnorm[i];
	    }
	}
	
    int i =  risada.size()-1;
	  
    while(j != risada.size()){
        if((risada[i] == 'a') || (risada[i] == 'e') || (risada[i] == 'i') || (risada[i] == 'o') || (risada[i] == 'u')){   
            consoantesrev[j] = risada[i];
            totalr += consoantesrev[j];
        }
        i--;
        j++;
    }
    
    i =  totalr.size();
    
    while(i > 0){
        if(totalr[i] == totaln[i]){
           contp = contp + 1;
        }else{
            contn = contn + 1;
        }
        i--;
    }
    
    if(contp > contn){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
}
