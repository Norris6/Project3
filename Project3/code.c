#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//接受一个整形，按照顺序打印他的每一位
//例如：输入1234，输出：1 2 3 4.
//%d是打印有符号的整数（会有正负数）
//%u是打印无符号的整数
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}

//函数的递归的实现(把大事化小）

//void print(unsigned int n)//调试即可得知运行过程
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度
//#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;//创建了一个临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int a = my_strlen("abc");
//	printf("%d", a);
//	return 0;
//}

//递归求解
//my_strlen('abc')
//1+my_strlen('bc')
//1+1my_strlen('c')
//1+1+1my_strlen('')
//1+1+1+0
//#include <string.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(1 + str);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char str[100];    
//	printf("请输入一个字符串(100个以内): ");
//	scanf("%s", str);
//	int a = my_strlen(str); 
//	printf("字符串的长度是: %d\n", a);
//	return 0;
//}

//递归法求阶乘
//int fac(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//		return x * fac(x - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = fac(a);
//	printf("%d的阶乘是:%d\n",a,b);
//	return 0;
//}

//int mian()
//{
//	//在c99标准前，数组的大小必须是常量或者常量表达式
//	//在c99之后，数组大小可以是变量，为了支持变长数组
//	char ch1[10] = { 'a','b','c' };//不完全初始化，剩余元素默认初始化为0
//	//a b c 0 0 0 0 0 0 0 
//	char ch2[10] = "abc";
//	//a b c \0 0 0 0 0 0 0
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][4] = { {1,2,3},{1,4},{5,6,7,8} };//列必须确定，而行可以自由指定。
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//形参是数组的形式
//冒泡排序核心思想
//两个相邻的元素进行比较
//void bubble_sort(int arr[],int sz)
//{
//	//趟数
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*///地址应该使用指针来接收，所以这里的arr看似是数组，本质上是指针变量
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
////冒泡排序算法
////数组名本质上是：数组首元素的地址
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	
//	return 0;
//}

//一维数组的数组名的理解
//数组名确实可以表示首元素的地址
//但是有两个例外
//1，sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节。
//2，&数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//首元素的地址
//	printf("%p\n", arr + 1);
//	printf("-----------------\n");
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0] + 1);
//	printf("-----------------\n");
//	printf("%p\n", &arr);//整个数组的地址
//	printf("%p\n", &arr + 1);
//	int n = sizeof(arr);
//	printf("%d", n);
//	return 0;
//}

//二维数组的数组名的理解
//二维数组的数组名也表示首元素的地址
//二维数组的首元素的地址表示第一行的元素的地址
//int main()
//{
//	int arr[3][4];
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//求二维数组有几行
//	printf("%d", sizeof(arr[0]) / sizeof(arr[0][0]));//求二维数组有几列
//	return 0;
//}

//正整数的原码、反码、补码相同
//负整数的原码、反码、补码不同
//7
//000000000000000000000000000111 - 原码
//000000000000000000000000000111 - 反码
//000000000000000000000000000111 - 补码
//-7
//100000000000000000000000000111 - 原码
//111111111111111111111111111000 - 反码（原码的符号位不变，其他位按位取反就是反码）
//111111111111111111111111111001 - 补码（反码+1就是补码）


//"<<"左移操作符 “>>”右移操作符
// 左右移操作符只对整数有效，对浮点数无效 

//左移操作符
//整数在内存中存储的是补码，我们所看到的是原码
//int main()
//{
//	/*int a = 7;*/
//	int a = -7;//我们所看到的是原码-------这里先是将-7的补码整体向左移动了一位，接着再将得到的数转化位原码，再转化为十进制，最后得到-14
//	int b = a << 1;//a即7的补码向左整体移动了一位
//	printf("%d\n", a);
//	printf("%d", b);
//	return 0;
//}

//右移操作符
//算术移位：右边丢弃，左边补原符号位
//逻辑移位：右边丢弃，左边补0
// VS采用的是算术移位
//int main()
//{
//	int a = 7;
//	int b = a >> 1;
//	printf("%d\n", a);
//	printf("%d", b);
//	return 0;
//}

// & - 按（二进制）位与
// | - 按（二进制）位或
// ^ - 按（二进制）位异或
//这些操作符只适用于整形

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	//int c = a | b;
//	//int c = a ^ b;
//	//000000000000000000000000000000000011 - 3的补码
//	//100000000000000000000000000000000101 - -5的原码
//	//111111111111111111111111111111111010 - -5的反码
//	//111111111111111111111111111111111011 - -5的补码
//	//000000000000000000000000000000000011 - 3的补码
//	//000000000000000000000000000000000011 - 按位与的结果，（即将-5和3的补码进行比对，只要有0则为0，两者为1才为1）
//	//111111111111111111111111111111111011 - 按位或的结果，（只要有1则为1，两者为0才为0
//	//111111111111111111111111111111111000 - 按位异或的结果，（相同为0，相异为1)
//	printf("%d", c);
//	return 0;
//}

//在不创建临时变量的前提下，实现两个数的交换
//a^a=0  0^b=b  a^b^a=b//异或操作符支持交换律
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d b=%d", a, b);
//	return 0;
//}

//c语言中，0表示假，非0表示真

//#include <stdio.h>
//#include <string.h>
//
//// 定义学生结构体
//struct Student 
//{
//    int studentNumber;
//    char name[50];
//    float grades[3]; // 三门课成绩
//    float average;   // 平均成绩
//};
//
//// 计算平均成绩和最高分同学的信息
//void calst(struct Student* students, int numStudents, int* highestIndex, float* highestAverage)
//{
//    *highestAverage = 0;
//
//    for (int i = 0; i < numStudents; ++i) 
//    {
//        // 计算平均成绩
//        float sum = 0;
//        for (int j = 0; j < 3; ++j) 
//        {
//            sum += students[i].grades[j];
//        }
//        students[i].average = sum / 3;
//
//        // 检查是否为最高分
//        if (students[i].average > *highestAverage) 
//        {
//            *highestAverage = students[i].average;
//            *highestIndex = i;
//        }
//    }
//}
//
//int main() 
//{
//    // 定义五名学生的数组
//    struct Student students[5];
//
//    // 输入学生数据
//    for (int i = 0; i < 5; ++i) 
//    {
//        printf("请输入第%d名学生的学号: ", i + 1);
//        scanf("%d", &students[i].studentNumber);
//
//        printf("请输入第%d名学生的姓名: ", i + 1);
//        scanf("%s", students[i].name);
//
//        printf("请输入第%d名学生的三门课成绩（用空格隔开）: ", i + 1);
//        for (int j = 0; j < 3; ++j) 
//        {
//            scanf("%f", &students[i].grades[j]);
//        }
//    }
//
//    // 使用指针进行参数传递
//    int highestIndex;
//    float highestAverage;
//
//    // 调用函数计算统计信息
//    calst(students, 5, &highestIndex, &highestAverage);
//
//    // 输出平均成绩和最高分同学的信息
//    printf("\n平均成绩：\n");
//    for (int j = 0; j < 3; ++j) 
//    {
//        float subjectAverage = 0;
//        for (int i = 0; i < 5; ++i) 
//        {
//            subjectAverage += students[i].grades[j];
//        }
//        subjectAverage /= 5;
//        printf("第%d门课平均成绩：%f\n", j + 1, subjectAverage);
//    }
//
//    printf("\n最高分同学信息：\n");
//    printf("学号：%d\n", students[highestIndex].studentNumber);
//    printf("姓名：%s\n", students[highestIndex].name);
//    printf("三门课成绩：%f %f %f\n", students[highestIndex].grades[0], students[highestIndex].grades[1], students[highestIndex].grades[2]);
//    printf("平均成绩：%f\n", students[highestIndex].average);
//
//    return 0;
//}

//指针是内存中一个最小单元的编号，也就是地址
//平时所说的指针是指指针变量，是用来存放内存地址的变量

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//pa是一个指针变量，用来存放a的地址
//	//通过pa这个指针变量可以找到一个内存单元
//	//一个内存单元是一个字节
//	//指针的大小在32位的平台下是4个字节，在64位的平台下是8个字节
//	return 0;
//}

//x86 - 32位的环境
//x64 - 64位的环境
//int main()
//{
//	int* p = NULL;
//	printf("zu", sizeof(p));//sizeof 返回值的类型是无符号整型
//	return 0;
//}

//指针类型的意义
 
//
//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc = (char*)&a;
//	*pc = 0;
//	//结论
//	//指针类型决定了指针在被解引用的时候访问几个字节
//	//如果是int*类型的指针，在x86环境下解引用访问4个字节
//	//如果是char*类型的指针，解引用访问1个字节
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//结论2：
//	//指针的类型决定了指针+1-1操作的时候，跳过几个字节
//	//即决定了指针的步长
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int i = 0;
//	int* p = arr;
//	//指针的第一种写法
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = 1;//1,*p=1 2,p++
//	//}
//
//	//第二种
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//指针的计算
//int main()
//{
//	int arr[10] = { 2 };
//	printf("%d\n", &arr[9] - &arr[0]);//指针减去指针得到的是指针和指针之间的元素个数
//	//不是所有的指针都能相减
//	//指向同一块空间的两个指针才能相减
//	return 0;
//}

//用指针的方法求字符串的长度
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//	return 0;
//}

//指针的标准规定：不不允许与指向第一个元素之间的那个内存位置的指针进行比较

//二级指针
//int main()
//{ 
//	int a = 10;
//	int* pa = &a;//pa是一个一级指针变量
//	int** ppa = &pa;//ppa是一个二级指针变量,二级指针是用来存放一级指针变量的地址
//	**ppa = 20;
//	printf("%d", a);
//	return 0;
//}

//指针数组
//即存放指针的数组
//int main()
//{
//	int a = 10;
//	int i = 0;
//	int b = 20;
//	int c = 30;
//	int* parr[10] = { &a,&b,&c };//指针数组
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	} 
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//结构体
//结构是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量
//struct peo
//{
//	char name[20];
//	char tele[20];
//	char sex[5];
//	int high;
//};
//struct st
//{
//	struct peo p;
//	int num;
//	float f;
//};
//void print2(struct peo* sp)
//{
//	printf("%s %s %s %d \n", sp->name, sp->tele, sp->sex, sp->high);
//}
//void print1(struct peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);
//}
//
//int main()
//{
//	struct peo p1 = {"张三","155367857464422","男",181};//结构体变量的创建，p1是结构体变量
//	struct st a = { {"李四","12345678","女",168},18,3.14f };
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", a.p.name, a.p.tele, a.p.sex, a.p.high, a.num, a.f);
//	print2(&p1);
//	print1(p1);
//	return 0;
//}

//结构体传参是尽量传结构体的地址，性能更高，效率更高




//#include <stdio.h>
//
//typedef struct student 
//{
//    int id; // 学号
//    char name[20]; // 姓名
//} student;
//
//student students[100];
//
//#define MAX 100
//
//int n = 0;
//
//void bubble_sort(student* students, int n) 
//{
//    for (int i = 0; i < n - 1; i++) 
//    {
//        int flag = 0;
//        for (int j = 0; j < n - i - 1; j++) 
//        {
//            if (students[j].id > students[j + 1].id) 
//            {
//                student temp = students[j];
//                students[j] = students[j + 1];
//                students[j + 1] = temp;
//                flag = 1;
//            }
//        }
//        if (flag == 0)
//        {
//            break;
//        }
//    }
//}
//
//int main() 
//{
//    while (1) 
//    {
//        int temp;
//        if (scanf("%d", &temp) != 1 || temp == -1)
//        {
//            break;
//        }
//        students[n].id = temp;
//        if (scanf("%s", students[n].name) != 1) 
//        {
//            break;
//        }
//        n++;
//        if (n == MAX) 
//        {
//            break;
//        }
//    }
//    bubble_sort(students, n);
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d %s\n", students[i].id, students[i].name);
//    }
//    return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//// 定义学生结构体
//struct Student 
//{
//    char name[50];
//    int id;
//    float grades[5]; // 假设每个学生有5门课程的成绩
//};
//
//// 函数声明
//void addStudent(struct Student* students, int* count);
//void displayStudents(struct Student* students, int count);
//float calculateAverage(struct Student* student, int courseCount);
//void sortStudentsById(struct Student* students, int count);
//void sortStudentsByAverage(struct Student* students, int count, int courseCount);
//int main() 
//{
//    struct Student students[100]; // 假设最多有100个学生
//    int studentCount = 0;
//    int choice;
//
//    do 
//    {
//        // 显示菜单
//        printf("--------------------------------------Student Information Management System--------------------------------------");
//        printf("\n 1. Add Student\n");
//        printf(" 2. Display Students (Sort by ID)\n");
//        printf(" 3. Display Students (Sort by Average)\n");
//        printf(" 4. Calculate Average Grade\n");
//        printf(" 5. Exit\n");
//        printf(" Enter your choice: ");
//        scanf("%d", &choice);
//
//        switch (choice) 
//        {
//        case 1:
//            addStudent(students, &studentCount);
//            break;
//        case 2:
//            sortStudentsById(students, studentCount);
//            displayStudents(students, studentCount);
//            break;
//        case 3:
//            sortStudentsByAverage(students, studentCount,5);
//            displayStudents(students, studentCount);
//            break;
//        case 4: 
//        {
//            int courseIndex;
//            printf("Enter the course index (0-4): ");
//            scanf("%d", &courseIndex);
//            float average = calculateAverage(students, studentCount, courseIndex);
//            printf("Average grade for course %d: %.2f\n", courseIndex, average);
//            break;
//        }
//        case 5:
//            printf("Exiting program.\n");
//            break;
//        default:
//            printf("Invalid choice. Please enter a valid option.\n");
//        }
//
//    } while (choice != 5);
//
//    return 0;
//}
//
//// 添加学生函数
//void addStudent(struct Student* students, int* count) 
//{
//    struct Student newStudent;
//
//    // 输入学生信息
//    printf("Enter student name: ");
//    scanf("%s", newStudent.name);
//    printf("Enter student ID: ");
//    scanf("%d", &newStudent.id);
//    printf("Enter grades for 5 courses:\n");
//    for (int i = 0; i < 5; i++)
//    {
//        printf("Enter grade for course %d: ", i);
//        scanf("%f", &newStudent.grades[i]);
//    }
//
//    // 使用指针操作数组元素
//    *(students + *count) = newStudent;
//    (*count)++;
//
//    printf("Student added successfully.\n");
//}
//
//// 显示学生函数
//void displayStudents(struct Student* students, int count)
//{
//    if (count == 0)
//    {
//        printf("No students available.\n");
//    }
//    else
//    {
//        printf("\nList of Students:\n");
//        for (int i = 0; i < count; i++)
//        {
//            // 使用指针访问结构体成员
//            printf("Name: %s, ID: %d\n", (students + i)->name, (students + i)->id);
//        }
//    }
//}
//
//// 计算平均分函数
//float calculateAverage(struct Student* student, int courseCount)
//{
//    float sum = 0;
//
//    for (int i = 0; i < courseCount; i++)
//    {
//        sum += student->grades[i];
//    }
//
//    return sum / courseCount;
//}
//
//
//// 根据学生ID排序函数
//void sortStudentsById(struct Student* students, int count)
//{
//    for (int i = 0; i < count - 1; i++)
//    {
//        for (int j = 0; j < count - i - 1; j++)
//        {
//            if ((students + j)->id > (students + j + 1)->id)
//            {
//                // 交换两个学生的位置
//                struct Student temp = *(students + j);
//                *(students + j) = *(students + j + 1);
//                *(students + j + 1) = temp;
//            }
//        }
//    }
//}
//
//// 根据平均分排序函数
//void sortStudentsByAverage(struct Student* students, int count, int courseCount)
//{
//    for (int i = 0; i < count - 1; i++) 
//    {
//        for (int j = 0; j < count - i - 1; j++)
//        {
//            float avg1 = calculateAverage(students + j, courseCount);
//            float avg2 = calculateAverage(students + j + 1, courseCount);
//
//            if (avg1 > avg2) 
//            {
//                // 交换两个学生的位置
//                struct Student temp = *(students + j);
//                *(students + j) = *(students + j + 1);
//                *(students + j + 1) = temp;
//            }
//        }
//    }
//}

//struct stu
//{
//	char name[500];
//	int id;
//	char gender[50];
//};
//void ss(struct stu*student)
//{
//	printf("name\n");
//	scanf("%s", student->name);
//	printf("id\n");
//	scanf("%d", &student->id);
//	printf("gender\n");
//	scanf("%s", student->gender);
//}
//int main()
//{
//	printf("-------------学生系统----------\n");
//	printf("选择\n");
//	struct stu student;
//	while (1)
//	{
//		int i = 0;
//		scanf("%d", &i);
//		int a = 0;
//		switch (i)
//		{
//		case 1:
//			ss(&student);
//			break;
//		case 2:
//			printf("%s %d %s\n", student.name, student.id, student.gender);
//			break;
//		case 3:
//			a = 1;
//			break;
//			
//		}
//		if (a == 1)
//		{
//			break;
//		}
//	
//	}
//	
//
//	return 0;
//}
//


