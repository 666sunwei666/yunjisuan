#include<iostream>
using namespace std;

void Hanoi( char A,char B,char C,int  n)	//总共有n个圆盘，将这n个圆盘  借助 B 柱子 从 A 柱子移动到  C 柱子
{
	if (n == 1)								//当只有一个圆盘时，直接圆盘从 A 柱 移动到 C 柱
	{
		cout<<n<<" "<<A<<" "<<B<<endl; 
	}
	else
	{
	
	Hanoi(A,C,B,n - 1);				 //当不只一个圆盘时，我们先将上面 （n -1）个圆盘 借助 B柱子  从 A 柱子移动到 C 柱子

	cout<<n<<" "<<A<<" "<<B<<endl;				//A柱剩余一个圆盘，将剩下的一个圆盘从 A 移动到 C
	Hanoi(C,B, A, n - 1);	
		//再将（n-1）个圆盘 借助 A柱子 从 B柱子 移动到 C柱子
}
}
int main()
{
	
	int  n = 0;							//汉诺塔层数
	char A = 'A';						//A柱子
	char B = 'B';						//B柱子
	char C = 'C';						//C柱子

cin>>n;
	Hanoi(A,B,C,n);						//将n个圆盘，借助于B柱子，从A柱子移动到C柱子
	return 0;
}



