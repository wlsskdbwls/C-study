#include <iostream>
#include <string> //string����� ���� ���ڿ� ũ�⿡ ������ �����Ƿ�

using namespace std;
int main()
{
	
	int age;
	char major[100], birth[100];
	string name;
	

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name; getchar();
	

	
    cout << "������ �Է��ϼ���: ";
    cin.getline(birth, 100); //_���� _�� ���̿� ������ �����Ƿ� cin.getline(,); �� ���
	

	cout << "���̸� �Է��ϼ���: ";
	cin >> age;


	cout << "�Ҽ� �а��� �Է��ϼ���: ";
	cin >> major;

	
	
	cout << "\n===================================\n";
	cout << "<ȸ������>\n";
	
	cout << "�̸�: "<<name<<endl;
	cout << "����: " << birth << endl;
	cout << "����: " << age << endl;
	cout << "�Ҽ� �а�: " << major << endl;

}