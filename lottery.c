/*
Lottery Scheduling: SO lanza una rifa de "tickets" del cual un proceso gana y se ejecuta.
	tickets: esta asociado al porcentaje de tiempo que el proceso ocupe la CPU.
		Debo saber: 	"cuantos tickets"
				"quien los posee"
	[time-slice: segmento de tiempo de ejecucion de un proceso]
	Mecanismo de manipulación: para evitar un mal response time:
		ticket currency: cantidad limitada de tickets respectiva; SO escala todos los tikets
			(El usuario elige la cantidad de tickets debido a la cantidad de procesos)
		ticket transfer: transferencia de tickets entre procesos -> cambia la proporción
		ticket inflation: un proceso aumenta transitoriamente su número de tickets
			(Solo con procesos confiables)
*/
#include "proc.h"
#include "proc.c"
#include "stdlib.h"

int main (void){
	// Implementar aca la entrada de usuario que determine la cantidad de tickets por proceso

	for(p = ptable.proc; p < &ptable.proc[NPROC]; p++){
		//Entrada->cantidad de ticket por proceso
		p->tickets = 1;
	}
	return 0;
}
