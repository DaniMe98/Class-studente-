#include "studente.h"
#include "esame.h"
#include <string.h>
#include <iostream>

using namespace std;

studente::studente(){
	studente::matricola="";
	studente::nome="";
		
}

studente::studente(string nome1,string nome2, string nome3){
	
	studente::esami[0].setEsame(nome1);
	studente::esami[0].setSostenuto(false);
	studente::esami[1].setEsame(nome2);
	studente::esami[1].setSostenuto(false);
	studente::esami[2].setEsame(nome3);
	studente::esami[2].setSostenuto(false);
	
	
}

string studente::getMatricola(){
	return studente::matricola;	
}

float studente::getMedia(){
	float media=0,a,b,v;
	a=studente::esami[0].getVoto();
	b=studente::esami[1].getVoto();
	v=studente::esami[2].getVoto();
	
	media=(a+b+v)/3;
	return media;
}

string studente::getNome(){
	return studente::nome;
}

string studente::getNomeEsame(int i){
	string x=studente::esami[i].getEsame();
	return x;
}

int studente::getNumEsami(){
	return 3;
}

bool studente::getSostenuto(int i){
	bool y=studente::esami[i].isSostenuto();
	return y;
}

int studente::getVotoEsame(int i){
	int j=studente::esami[i].getVoto();
	return j;
}

void studente::printStudente(){
	cout<<studente::matricola<<" "<<studente::nome <<" "<<studente::numesami<<endl;
	for(int i=0; i<3; i++){	
		cout<<studente::esami[i].getEsame();
		cout<<studente::esami[i].getVoto();
		cout<<studente::esami[i].isSostenuto();
		cout<<endl;
	}
	cout<<"Media esami :"<<studente::getMedia();
}

void studente::setEsame(int voto,int i){
	studente::esami[i].setVoto(voto);
}

void studente::setMatr(string matr){
	studente::matricola=matr;
}

void studente::setNome(string name){
	studente::nome=name;
}
