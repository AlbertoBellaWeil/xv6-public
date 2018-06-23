#include "types.h"
#include "stat.h"
#include "user.h"

int main (void){
        printf(2, "El numero de procesos corriendo en la CPU es: %d\n", getprocs());
	exit();
}
