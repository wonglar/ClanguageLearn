//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//// �ṹ��
//
//// ����һ��ѧ������
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
////����һ���������
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct Stu s1 = {"����", 20, 99.5};
//	printf("1��%s %d %lf\n", s1.name, s1.age, s1.score);
//	
//	struct Stu *ps = &s1;  // �ṹ��ָ��
//	printf("2��%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3��%s %d %lf\n", ps->name, ps->age, ps->score);  // �ȼ���2��д��
//
//	return 0;
//}