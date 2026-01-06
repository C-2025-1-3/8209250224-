#include<iostream>
#include<vector>//用于储存不同数字
using namespace std;
int main()
{
	vector<int>uniquenums;
	int num;
	cout << "请输入10个数：";
	for (int i = 0; i < 10; i++) {
		cin >> num;
		//检查数字是否在当前容器中
		bool isDuplicate = false;//标记是否重复
		for (int j = 0; j < uniquenums.size(); j++)
		{
			//遍历已存在的数字
			if (uniquenums[j] == num) {
				isDuplicate = true;
				break;//无需继续遍历，退出循环
			}
			}
		//若不重复，加入容器
		if (!isDuplicate) {
			uniquenums.push_back(num);
		}
	}
	cout << "所有不同的数为：";
	for (int i = 0; i < uniquenums.size(); i++)
	{
		cout << uniquenums[i] << "";
	}
	cout << endl;
	return 0;
}
