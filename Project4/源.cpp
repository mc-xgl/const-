#include <stdio.h>
void main()
{
	volatile const int i=5;					//将const声明成易变属性,避开编译器的优化机制
	volatile const int* p = &i;			//将i的地址取出
	int* p1 = (int*)p;							//将i的地址转换为int*类型
	*p1 = 3;										//修改i的地址上的值
	printf("%d", i);								//获取i的值

	int* p2 = (int*)&i;
}
//从程序可以看出,const的不变性只是编译器在进行约束,但是并不是真正意义上的常量,
//完全可以说是不变变量(有些拗口)