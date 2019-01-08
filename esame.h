#ifndef _ESAME_H
#define _ESAME_H

#include <string.h>
#include <iostream>

using namespace std;

class esame{
	
	public:	
		string getEsame();     //restituisce il nome dell'esame
  		esame();     //costruttore gen
		  
		esame(string n_esame,int voto);
		void setEsame(string x);  //imposta x come nome dell'esame
		int getVoto() ;      //restituisce il voto dell'esame
		void setVoto(int v);     //imposta v come voto dell'esame
		bool isSostenuto();  //restituisce true se l'esame è stato sostenuto, false altrimenti
	    void setSostenuto(bool vl);
	
	
	private:
		string n_esame;
		bool sostenuto;
		int voto;
	
};





#endif //_ESAME_H
