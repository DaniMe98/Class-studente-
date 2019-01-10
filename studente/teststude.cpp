#include "studente.h"
#include "esame.h"
#include <iostream>

using namespace std;

int main(){
	
	studente danilo("algoritmi","basididati","calcolo");
	
	
	danilo.setEsame(30,1);
	danilo.setEsame(25,0);
	danilo.setEsame(22,2);
	danilo.setMatr("677455");
	
	float avg=danilo.getMedia();
	
	danilo.printStudente();
	
	return 0;
	
	
}
