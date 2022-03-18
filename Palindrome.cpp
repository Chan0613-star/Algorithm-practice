#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
	static bool isPalindrome(int x) {
		vector<int> Arr;	//定义一个叫Arr的容器，用来保存传入的各个值
		if (x < 0){			//如果传入的值为负数，则返回false | 此处打印false
			cout << "false" << endl;
		}
		else if(0 <=x && x<10){
			cout << "true" << endl;
		}
		else
		{
			while (x){		//提取传入数的各个位，使用push_back()函数存入Arr
				int temp = x % 10;
				Arr.push_back(temp);
				x = x / 10;
			}
			//cout << Arr.size() << endl;		//查看Arr的长度，是否成功存入每一位
			for (int i = 0; i < Arr.size(); ++i){
				cout << Arr[i] << endl;
			}
			int i = 0;
			int temp = Arr.size() / 2;
			while (temp){
				if (Arr[i] != Arr[Arr.size() - i - 1]){
				cout << "false" << endl;
				break;
				}
					else{
					++i;
					--temp;
					if (temp == 0){
						cout << "true" << endl;
					}
				}
			}
			return 0;
		}
	}
};

int main(){
	int statistics = 119060911;
	Solution::isPalindrome(statistics);
	system("pause");
	return 0;
}
