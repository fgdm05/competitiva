#include <iostream>
#include <vector>
using namespace std;
void triangulo_inferior(int base) {
	for(int i = 1; i <= base; i++) {
		for(int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
void triangulo_inferior_inverso(int base) {
	for(int i = 1; i <= base; i++) {
		for(int j = 1; j <= base - i + 1; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
void triangulo_equilatero(int base) {
	for(int i = 1; i <= base; i++) {
		for(int j = 0; j < base - i; j++) {
			cout << " ";
		}
		for(int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void triangulo_equilatero_inverso(int base) {
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j < i; j++) {
			cout << " ";
		}
		for(int j = 1; j <= base - i + 1; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void triangulo_superior(int base) {
	for(int i = 1; i <= base; i++) {
		for(int j = 1; j < i; j++) {
			cout << "  ";
		}
		for(int j = 1; j <= base - i + 1;j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void triangulo_superior_inverso(int base) {
	/*
	base = 5
	    *
	   **
	  ***
	 ****
	*****
	*/

	for(int i = 1; i <= base; i++) {
		string linha = string(base-i, ' ') + string(i, '*');
		cout << string(base - i, ' ') << string(i, '*') << endl;
	}
}

void triangulo_inferior_esquerda(int base) {
	for(int i = 1; i <= base; i++) {
		cout << string(i, '*') << string(base - i, ' ') << endl;
	}
}
void triangulo_superior_esquerda(int base) {
	for(int i = 0; i < base; i++) {
		cout << string(base - i, '*') << endl;
	}
}
void triangulo_superior_direita(int base) {
	for(int i = 0; i < base; i++) {
		cout << string(i, ' ') << string(base - i, '*') << endl;
	}
}
void triangulo_inferior_direita(int base) {
	for(int i = 1; i <= base; i++) {
		cout << string(base - i, ' ') << string(i, '*') << endl;
	}
}

void equi(int base) {
	/* base=5
	  * i=1 (base-i)/2
	 *** i=3
	***** i=5
	*/
	for(int i = 1; i <= base; i += 2) {
		string ast = string(i, '*');
		string p1 = string((base-i)/2, ' ');
		string linha = p1 + ast + p1;
		cout << linha << endl;
	}
}
void equi_inverso(int base) {
	for(int i = 1; i <= base; i+=2) {
		string ast = string(base-i+1, '*');
		string p1 = string(i/2, ' ');
		cout << p1 << ast << p1 << endl;
	}
}
int main() {
	cout << "Triângulo inferior" << endl;
	triangulo_inferior(5);
	cout << "Triângulo inferior invertida" << endl;
	triangulo_inferior_inverso(5);
	cout << "Triângulo equilátero" << endl;
	triangulo_equilatero(5);
	cout << "Triângulo equilátero invertida" << endl;
	triangulo_equilatero_inverso(5);
	cout << "Triângulo superior" << endl;
	triangulo_superior(5);
	cout << "Triângulo superior inverso" << endl;
	triangulo_superior_inverso(5);
	cout << "Triângulo equilatero inverso:  " << endl;
	equi_inverso(5);

	return 0;
}