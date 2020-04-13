#include <iostream>
#include <string> //string방식을 쓰면 문자열 크기에 제약이 없으므로

using namespace std;
int main()
{
	
	int age;
	char major[100], birth[100];
	string name;
	

	cout << "이름을 입력하세요: ";
	cin >> name; getchar();
	

	
    cout << "생일을 입력하세요: ";
    cin.getline(birth, 100); //_월과 _일 사이에 공백이 있으므로 cin.getline(,); 을 사용
	

	cout << "나이를 입력하세요: ";
	cin >> age;


	cout << "소속 학과를 입력하세요: ";
	cin >> major;

	
	
	cout << "\n===================================\n";
	cout << "<회원정보>\n";
	
	cout << "이름: "<<name<<endl;
	cout << "생일: " << birth << endl;
	cout << "나이: " << age << endl;
	cout << "소속 학과: " << major << endl;

}