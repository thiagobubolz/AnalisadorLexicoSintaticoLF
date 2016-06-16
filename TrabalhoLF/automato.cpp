#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <stdio.h>


using namespace std;

int le_token(void);


int main(){



}


int le_token(void)
{
	int estado = 0;
	int token;
	static char atual = fgetc(fp);
	char* identificador = (char*)malloc(sizeof(char)* MAX);
	int posicao = 0;
	
	while(!feof(fp)){
		switch(estado){
			//Estado Inicial, do case 0 ele sai para os outros estados
			case 0:	
			break;
			//Se for letra vem pra ca
			case 1: 
			break;
			//Se for digito vem pra ca
			case 2: 
			break;
			//Se for _ vem pra ca
			case 3: 
			break;
			//Se for digito seguido de . vem pra ca
			case 4: 
			break;
			//Se for = vem pra ca
			case 5: 
			break;
			//Se ja tivr um igual seguido de outro = vem pra ca
			case 6: 
			break;
			
			case 7: 
			break;
			
			case 8: 
			break;
			
			case 9: 
			break;
			
			case 10: 
			break;
			
			case 11: 
			break;
			
			case 12: 
			break;
			
			case 13: 
			break;
			
			case 14:
			break;
			
			case 15: 
			break;
		}
	}
	return EOFILE;
}