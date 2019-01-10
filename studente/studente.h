#ifndef _STUDENTE_H
#define _STUDENTE_H
#include <string.h>
#include <iostream>
#include "esame.h"


using namespace std;

class studente{
	
	public:
		studente(); //default constructor
		studente(string nome1, string nome2, string nome3);
		void setMatr(string matr);
		void setNome(string name);
		void setEsame(int voto,int i);
		void printStudente();
		string getMatricola();
		string getNome();
		int getNumEsami();
		int getVotoEsame(int i);
		float getMedia();
		string getNomeEsame(int i);
		bool getSostenuto(int i);
	
	
	private:
		string matricola;
		string nome;
		esame esami[3];
		const int numesami=3;
	
};

#endif //_STUDENTE_H
