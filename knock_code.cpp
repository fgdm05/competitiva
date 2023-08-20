#include <iostream>
using namespace std;
void mostra_asterisco(int x) {
	for(int i = 0; i < x; i++) {
		cout << '*';
	}
}
using namespace std;
int main() {
	int n;
	char texto[10000];
	cin >> n;
	cin >>texto;

	int coord[26][2] = {
		{1,1}, {1,2}, {1,3}, {1,4}, {1,5},
		{2,1}, {2,2}, {2,3}, {2,4}, {2,5},
		{1,3},
		{3,1}, {3,2}, {3,3}, {3,4}, {3,5},
		{4,1}, {4,2}, {4,3}, {4,4}, {4,5},
		{5,1}, {5,2}, {5,3}, {5,4}, {5,5}
	};

	for(int i = 0; texto[i] != '\0'; i++) {
		if(i != 0) {
			cout << ' ';
		}
		char letra = texto[i];
		int x = coord[letra - 'A'][0];
		int y = coord[letra - 'A'][1];

		mostra_asterisco(x);
		cout << ' ';
		mostra_asterisco(y);
	}
	cout << endl;
}