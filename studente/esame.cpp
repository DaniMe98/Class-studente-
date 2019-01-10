#include "esame.h"
#include <string.h>
#include <iostream>

using namespace std;

esame::esame(){
	esame::n_esame="";
	esame::sostenuto=false;
	esame::voto=0;
}


esame::esame(string n_esame,int voto){
	esame::n_esame=n_esame;
	esame::voto=voto;
}

string esame::getEsame(){
	return esame::n_esame;
}

void esame::setEsame(string x){
	esame::n_esame=x;
}

int esame::getVoto(){
	return esame::voto;
}

void esame::setVoto(int v){
	esame::voto=v;
}

bool esame::isSostenuto(){
	return esame::sostenuto;	
}

void esame::setSostenuto(bool vl){
	esame::sostenuto=vl;
}

