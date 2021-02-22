/*#include <iostream>
#include <string>
using namespace std;

int SearchStrPosition(string str1, string str2)
{
	int len1, len2;
	int pos = -1;
	//获取两字符串长度
	len1 = str1.size();
	len2 = str2.size();
	//若str2的长度大于str1，则str2必不可能在str1中，直接输出-1
	if (len2 > len1)
		return -1;
	//因为不区分大小写，将str1和str2全部转换为小写
	for (int i = 0; i < len1; i++)
		str1[i] = tolower(str1[i]);
	for (int i = 0; i < len2; i++)
		str2[i] = tolower(str2[i]);

	//循环判断str2是否在str1之中，若在，记录str2首字符在str1中的位置
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

	cout << "输入字符串\n" << endl;
	cin >> str1;
	cout << "输入字符串\n" << endl;
	cin >> str2;

	pos = SearchStrPosition(str1, str2);

	if (pos != -1)
		cout << "the position of str2 in the str1 is " << pos << endl;
	else
		cout << "The " << str2 << " 不包含 " << str1 << endl;

	return 0;
}*/