#include<iostream>
using namespace std;

"hhhhhhhhhhhhh"
class Ticket{
	public:
		Ticket(int k);
		void function(int a);
	private:
		float x;
};


Ticket::Ticket(int k)
{
	x = k;
}


void Ticket::function(int j)
{
	int z;
	cout << x << "," << j << endl;
	cin >> z;
	cout << z << endl;  
}



int main(){
	Ticket dx(10); 
	dx.function(20);
// 	cout << dx.x << endl;
	return 0;
}
