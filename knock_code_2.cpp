#include <iostream>
#include <vector>
using namespace std;
void mostra_asterisco(int x) {
	for(int i = 0; i < x; i++) {
		cout << '*';
	}
}
using namespace std;
int main() {
	int n;
	string texto;
	cin >> n;
	cin >> texto;

	vector<pair<int, int> > coord = {
		make_pair(1,1),	make_pair(1,2),	make_pair(1,3),	make_pair(1,4),	make_pair(1,5), 
		make_pair(2,1),	make_pair(2,2),	make_pair(2,3),	make_pair(2,4),	make_pair(2,5), 
		make_pair(1,3),	 
		make_pair(3,1),	make_pair(3,2),	make_pair(3,3),	make_pair(3,4),	make_pair(3,5), 
		make_pair(4,1),	make_pair(4,2),	make_pair(4,3),	make_pair(4,4),	make_pair(4,5), 
		make_pair(5,1),	make_pair(5,2),	make_pair(5,3),	make_pair(5,4),	make_pair(5,5), 
	};

	for(int i = 0; texto[i] != '\0'; i++) {
		if(i != 0) {
			cout << ' ';
		}
		char letra = texto[i];
		int x = coord[letra - 'A'].first;
		int y = coord[letra - 'A'].second;

		mostra_asterisco(x);
		cout << ' ';
		mostra_asterisco(y);
	}
	cout << endl;
}