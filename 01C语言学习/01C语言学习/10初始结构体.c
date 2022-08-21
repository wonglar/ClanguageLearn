//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//// 结构体
//
//// 创建一个学生类型
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
////创建一个书的类型
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct Stu s1 = {"张三", 20, 99.5};
//	printf("1：%s %d %lf\n", s1.name, s1.age, s1.score);
//	
//	struct Stu *ps = &s1;  // 结构体指针
//	printf("2：%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3：%s %d %lf\n", ps->name, ps->age, ps->score);  // 等价于2的写法
//
//	return 0;
//}