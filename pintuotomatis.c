#include <stdio.h>
#include <string.h>

int main(){
	
	/*input : -> skala jarak
	          -> gerakan*/
	 
	 //variabel
	 int Sjarak; //skala jarak
	 int output; //kondisi true false pintu

	 //inputan
	 printf("masukan jarak : ");
	 scanf("%d", &Sjarak);

	//Menentukan output

	 if(Sjarak < 7){
	 	output = 1;
	 }
	 else{
	 	output = 0;
	 }

	 //OUTPUT

	 if(output == 1){
	 	printf("+      +\n");
	 	printf("  OPEN\n");
	 	printf("+      +\n");
	 }
	 else{
	 	printf("-     -\n");
	 	printf(" CLOSE\n");
	 	printf("-     -\n");
	 }


	 return 0;
}
