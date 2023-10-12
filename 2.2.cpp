#include<iostream>
using namespace std;

void Hanoi( char A,char B,char C,int  n)	//�ܹ���n��Բ�̣�����n��Բ��  ���� B ���� �� A �����ƶ���  C ����
{
	if (n == 1)								//��ֻ��һ��Բ��ʱ��ֱ��Բ�̴� A �� �ƶ��� C ��
	{
		cout<<n<<" "<<A<<" "<<B<<endl; 
	}
	else
	{
	
	Hanoi(A,C,B,n - 1);				 //����ֻһ��Բ��ʱ�������Ƚ����� ��n -1����Բ�� ���� B����  �� A �����ƶ��� C ����

	cout<<n<<" "<<A<<" "<<B<<endl;				//A��ʣ��һ��Բ�̣���ʣ�µ�һ��Բ�̴� A �ƶ��� C
	Hanoi(C,B, A, n - 1);	
		//�ٽ���n-1����Բ�� ���� A���� �� B���� �ƶ��� C����
}
}
int main()
{
	
	int  n = 0;							//��ŵ������
	char A = 'A';						//A����
	char B = 'B';						//B����
	char C = 'C';						//C����

cin>>n;
	Hanoi(A,B,C,n);						//��n��Բ�̣�������B���ӣ���A�����ƶ���C����
	return 0;
}



