#include <stdio.h>
void main()
{
	volatile const int i=5;					//��const�������ױ�����,�ܿ����������Ż�����
	volatile const int* p = &i;			//��i�ĵ�ַȡ��
	int* p1 = (int*)p;							//��i�ĵ�ַת��Ϊint*����
	*p1 = 3;										//�޸�i�ĵ�ַ�ϵ�ֵ
	printf("%d", i);								//��ȡi��ֵ

	int* p2 = (int*)&i;
}
//�ӳ�����Կ���,const�Ĳ�����ֻ�Ǳ������ڽ���Լ��,���ǲ��������������ϵĳ���,
//��ȫ����˵�ǲ������(��Щ�ֿ�)