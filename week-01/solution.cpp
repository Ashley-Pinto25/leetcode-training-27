#include<iostream>
int main() {
	int a, b;
	std::cin >> a >> b;
	for(int i = a; i <= b; i++) {
		if (i % 3==0) {
			std::cout << "foo\n"; 
		} else if (i % 2 == 0 && i % 3!=0) {

			std::cout << "bar\n";
		} else {
			std::cout << "baz\n";
		}
	}
} 
