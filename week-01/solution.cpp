

#include<iostream>
int main() {
int a, b;
std::cin >> a >> b;
for(int i = a; i <= b; i++) {

if(a % 3==0)
{

std::cout << "foo\n"; 
}
else if(a % 2 == 0 && a % 3!=0)
{

std::cout << "bar\n";
}
else
{
std::cout << "baz\n";
}
}
} 
