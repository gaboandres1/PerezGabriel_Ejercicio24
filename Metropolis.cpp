#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>
  
int main(){
  
    int N = 10000;
	float delta = 1.0;
	float datoAnterior;
	float propuesta;
	float r;
	float alpha;
	
	srand48(8);
	datoAnterior = drand48();
	
	std::cout << 0 << " " << datoAnterior std::endl;
	
	for (int i=1; i<N;i++){
		
		propuesta = datoAnterior + (drand48() - 0.5)*delta;
		r = std::min(1, exp(propuesta, 1))/exp(datoAnterior,1);
		alpha = drand48();
		if(alpha<r){
			std::cout << i << " " << propuesta << std::endl;
		}
		else{
			std::cout << i << " " << datoAnterior << std::endl;
		}
	}
    return 0;
}