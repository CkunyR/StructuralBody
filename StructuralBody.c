#include <stdio.h>
#include <string.h>

struct Book
{
	char name[20];
	short price;
};

int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计", 55 };

	strcpy(b1.name, "C++");//strcpy---string copy ----字符串拷贝---库函数---string.h
	printf("%s\n", b1.name);

	/*struct Book* pd = &b1;
	printf("%s\n", pd->name);
	printf("%d\n", pd->price);*/
	//   结构体变量.成员
	//->  结构体指针->成员

	/*printf("书名 %s\n", (*pd).name);
	printf("价格 %d\n", (*pd).price);*/

	/*printf("书名:%s\n", b1.name);
	printf("价格:%d元\n", b1.price);

	b1.price = 15;
	printf("修改后价格：%d元", b1.price);*/

	return 0;
}