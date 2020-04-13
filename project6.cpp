#include <iostream>

 int main()

{
	int x;
	float y; //나눗셈을 하면 실수가 나와야 하므로 x와 y중 하나는 실수로 지정



	using namespace std;

	cout << "First number>>";
	cin >> x;
	
	cout << "Second number>>";
	cin >> y;
	

	

	cout << "======계산 결과======\n";
	int result1 = x + y;
	cout << x << "+" << y << "=" << result1 << endl;
	
	 result1 = x - y;
	cout << x << "-" << y << "=" << result1 << endl;

	result1 = x * y;
	cout << x << "*" << y << "=" << result1 << endl;

	float result2 = x / y; //결과가 실수이므로 float로 입력
    cout << x << "/" << y<< "=" << result2 << endl;


}