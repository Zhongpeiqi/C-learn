/*#include <iostream>
#include <string>
using namespace std;

int SearchStrPosition(string str1, string str2)
{
	int len1, len2;
	int pos = -1;
	//��ȡ���ַ�������
	len1 = str1.size();
	len2 = str2.size();
	//��str2�ĳ��ȴ���str1����str2�ز�������str1�У�ֱ�����-1
	if (len2 > len1)
		return -1;
	//��Ϊ�����ִ�Сд����str1��str2ȫ��ת��ΪСд
	for (int i = 0; i < len1; i++)
		str1[i] = tolower(str1[i]);
	for (int i = 0; i < len2; i++)
		str2[i] = tolower(str2[i]);

	//ѭ���ж�str2�Ƿ���str1֮�У����ڣ���¼str2���ַ���str1�е�λ��
	for (int i = 0; i < len1; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if ((i + j) >= len1)
				return -1;
			if (str1[i + j] != str2[j])
				break;
			if (j == len2 - 1)
				pos = i;
		}
	}
	return pos;
}
int main()
{
	string str1, str2;
	int pos;

	cout << "�����ַ���\n" << endl;
	cin >> str1;
	cout << "�����ַ���\n" << endl;
	cin >> str2;

	pos = SearchStrPosition(str1, str2);

	if (pos != -1)
		cout << "the position of str2 in the str1 is " << pos << endl;
	else
		cout << "The " << str2 << " ������ " << str1 << endl;

	return 0;
}*/