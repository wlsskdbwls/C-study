#include <iostream>

 int main()

{
	int x;
	float y; //�������� �ϸ� �Ǽ��� ���;� �ϹǷ� x�� y�� �ϳ��� �Ǽ��� ����



	using namespace std;

	cout << "First number>>";
	cin >> x;
	
	cout << "Second number>>";
	cin >> y;
	

	

	cout << "======��� ���======\n";
	int result1 = x + y;
	cout << x << "+" << y << "=" << result1 << endl;
	
	 result1 = x - y;
	cout << x << "-" << y << "=" << result1 << endl;

	result1 = x * y;
	cout << x << "*" << y << "=" << result1 << endl;

	float result2 = x / y; //����� �Ǽ��̹Ƿ� float�� �Է�
    cout << x << "/" << y<< "=" << result2 << endl;


}