#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d)
{
	int gift[4] = {a,b,c,d};
	for(int i = 0;i < 4;i++)
	{
		if(rand() %10 > 5)
		{
			int temp_money = gift[i];
			if(i == 3)
			{
				gift[i] = gift[0];
				gift[0] = temp_money;
			}
			else
			{
				gift[i] = gift[i+1];
				gift[i+1] = temp_money;
			}
		}
	}

	a = gift[0];
	b = gift[1];
	c = gift[2];
	d = gift[3];
}
