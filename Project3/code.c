#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һ�����Σ�����˳���ӡ����ÿһλ
//���磺����1234�������1 2 3 4.
//%d�Ǵ�ӡ�з��ŵ�������������������
//%u�Ǵ�ӡ�޷��ŵ�����
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

//�����ĵݹ��ʵ��(�Ѵ��»�С��

//void print(unsigned int n)//���Լ��ɵ�֪���й���
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

//��д��������������ʱ���������ַ����ĳ���
//#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;//������һ����ʱ����
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

//�ݹ����
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
//	printf("������һ���ַ���(100������): ");
//	scanf("%s", str);
//	int a = my_strlen(str); 
//	printf("�ַ����ĳ�����: %d\n", a);
//	return 0;
//}

//�ݹ鷨��׳�
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
//	printf("%d�Ľ׳���:%d\n",a,b);
//	return 0;
//}

//int mian()
//{
//	//��c99��׼ǰ������Ĵ�С�����ǳ������߳������ʽ
//	//��c99֮�������С�����Ǳ�����Ϊ��֧�ֱ䳤����
//	char ch1[10] = { 'a','b','c' };//����ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//a b c 0 0 0 0 0 0 0 
//	char ch2[10] = "abc";
//	//a b c \0 0 0 0 0 0 0
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][4] = { {1,2,3},{1,4},{5,6,7,8} };//�б���ȷ�������п�������ָ����
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

//�β����������ʽ
//ð���������˼��
//�������ڵ�Ԫ�ؽ��бȽ�
//void bubble_sort(int arr[],int sz)
//{
//	//����
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*///��ַӦ��ʹ��ָ�������գ����������arr���������飬��������ָ�����
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
////ð�������㷨
////�������������ǣ�������Ԫ�صĵ�ַ
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

//һά����������������
//������ȷʵ���Ա�ʾ��Ԫ�صĵ�ַ
//��������������
//1��sizeof�������������������������ʾ�������飬���������������Ĵ�С����λ���ֽڡ�
//2��&���������������������ʾ�������飬ȡ��������������ĵ�ַ��
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//��Ԫ�صĵ�ַ
//	printf("%p\n", arr + 1);
//	printf("-----------------\n");
//	printf("%p\n", &arr[0]);//��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0] + 1);
//	printf("-----------------\n");
//	printf("%p\n", &arr);//��������ĵ�ַ
//	printf("%p\n", &arr + 1);
//	int n = sizeof(arr);
//	printf("%d", n);
//	return 0;
//}

//��ά����������������
//��ά�����������Ҳ��ʾ��Ԫ�صĵ�ַ
//��ά�������Ԫ�صĵ�ַ��ʾ��һ�е�Ԫ�صĵ�ַ
//int main()
//{
//	int arr[3][4];
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//���ά�����м���
//	printf("%d", sizeof(arr[0]) / sizeof(arr[0][0]));//���ά�����м���
//	return 0;
//}

//��������ԭ�롢���롢������ͬ
//��������ԭ�롢���롢���벻ͬ
//7
//000000000000000000000000000111 - ԭ��
//000000000000000000000000000111 - ����
//000000000000000000000000000111 - ����
//-7
//100000000000000000000000000111 - ԭ��
//111111111111111111111111111000 - ���루ԭ��ķ���λ���䣬����λ��λȡ�����Ƿ��룩
//111111111111111111111111111001 - ���루����+1���ǲ��룩


//"<<"���Ʋ����� ��>>�����Ʋ�����
// �����Ʋ�����ֻ��������Ч���Ը�������Ч 

//���Ʋ�����
//�������ڴ��д洢���ǲ��룬��������������ԭ��
//int main()
//{
//	/*int a = 7;*/
//	int a = -7;//��������������ԭ��-------�������ǽ�-7�Ĳ������������ƶ���һλ�������ٽ��õ�����ת��λԭ�룬��ת��Ϊʮ���ƣ����õ�-14
//	int b = a << 1;//a��7�Ĳ������������ƶ���һλ
//	printf("%d\n", a);
//	printf("%d", b);
//	return 0;
//}

//���Ʋ�����
//������λ���ұ߶�������߲�ԭ����λ
//�߼���λ���ұ߶�������߲�0
// VS���õ���������λ
//int main()
//{
//	int a = 7;
//	int b = a >> 1;
//	printf("%d\n", a);
//	printf("%d", b);
//	return 0;
//}

// & - ���������ƣ�λ��
// | - ���������ƣ�λ��
// ^ - ���������ƣ�λ���
//��Щ������ֻ����������

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	//int c = a | b;
//	//int c = a ^ b;
//	//000000000000000000000000000000000011 - 3�Ĳ���
//	//100000000000000000000000000000000101 - -5��ԭ��
//	//111111111111111111111111111111111010 - -5�ķ���
//	//111111111111111111111111111111111011 - -5�Ĳ���
//	//000000000000000000000000000000000011 - 3�Ĳ���
//	//000000000000000000000000000000000011 - ��λ��Ľ����������-5��3�Ĳ�����бȶԣ�ֻҪ��0��Ϊ0������Ϊ1��Ϊ1��
//	//111111111111111111111111111111111011 - ��λ��Ľ������ֻҪ��1��Ϊ1������Ϊ0��Ϊ0
//	//111111111111111111111111111111111000 - ��λ���Ľ��������ͬΪ0������Ϊ1)
//	printf("%d", c);
//	return 0;
//}

//�ڲ�������ʱ������ǰ���£�ʵ���������Ľ���
//a^a=0  0^b=b  a^b^a=b//��������֧�ֽ�����
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d b=%d", a, b);
//	return 0;
//}

//c�����У�0��ʾ�٣���0��ʾ��

//#include <stdio.h>
//#include <string.h>
//
//// ����ѧ���ṹ��
//struct Student 
//{
//    int studentNumber;
//    char name[50];
//    float grades[3]; // ���ſγɼ�
//    float average;   // ƽ���ɼ�
//};
//
//// ����ƽ���ɼ�����߷�ͬѧ����Ϣ
//void calst(struct Student* students, int numStudents, int* highestIndex, float* highestAverage)
//{
//    *highestAverage = 0;
//
//    for (int i = 0; i < numStudents; ++i) 
//    {
//        // ����ƽ���ɼ�
//        float sum = 0;
//        for (int j = 0; j < 3; ++j) 
//        {
//            sum += students[i].grades[j];
//        }
//        students[i].average = sum / 3;
//
//        // ����Ƿ�Ϊ��߷�
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
//    // ��������ѧ��������
//    struct Student students[5];
//
//    // ����ѧ������
//    for (int i = 0; i < 5; ++i) 
//    {
//        printf("�������%d��ѧ����ѧ��: ", i + 1);
//        scanf("%d", &students[i].studentNumber);
//
//        printf("�������%d��ѧ��������: ", i + 1);
//        scanf("%s", students[i].name);
//
//        printf("�������%d��ѧ�������ſγɼ����ÿո������: ", i + 1);
//        for (int j = 0; j < 3; ++j) 
//        {
//            scanf("%f", &students[i].grades[j]);
//        }
//    }
//
//    // ʹ��ָ����в�������
//    int highestIndex;
//    float highestAverage;
//
//    // ���ú�������ͳ����Ϣ
//    calst(students, 5, &highestIndex, &highestAverage);
//
//    // ���ƽ���ɼ�����߷�ͬѧ����Ϣ
//    printf("\nƽ���ɼ���\n");
//    for (int j = 0; j < 3; ++j) 
//    {
//        float subjectAverage = 0;
//        for (int i = 0; i < 5; ++i) 
//        {
//            subjectAverage += students[i].grades[j];
//        }
//        subjectAverage /= 5;
//        printf("��%d�ſ�ƽ���ɼ���%f\n", j + 1, subjectAverage);
//    }
//
//    printf("\n��߷�ͬѧ��Ϣ��\n");
//    printf("ѧ�ţ�%d\n", students[highestIndex].studentNumber);
//    printf("������%s\n", students[highestIndex].name);
//    printf("���ſγɼ���%f %f %f\n", students[highestIndex].grades[0], students[highestIndex].grades[1], students[highestIndex].grades[2]);
//    printf("ƽ���ɼ���%f\n", students[highestIndex].average);
//
//    return 0;
//}

//ָ�����ڴ���һ����С��Ԫ�ı�ţ�Ҳ���ǵ�ַ
//ƽʱ��˵��ָ����ָָ�����������������ڴ��ַ�ı���

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//pa��һ��ָ��������������a�ĵ�ַ
//	//ͨ��pa���ָ����������ҵ�һ���ڴ浥Ԫ
//	//һ���ڴ浥Ԫ��һ���ֽ�
//	//ָ��Ĵ�С��32λ��ƽ̨����4���ֽڣ���64λ��ƽ̨����8���ֽ�
//	return 0;
//}

//x86 - 32λ�Ļ���
//x64 - 64λ�Ļ���
//int main()
//{
//	int* p = NULL;
//	printf("zu", sizeof(p));//sizeof ����ֵ���������޷�������
//	return 0;
//}

//ָ�����͵�����
 
//
//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc = (char*)&a;
//	*pc = 0;
//	//����
//	//ָ�����;�����ָ���ڱ������õ�ʱ����ʼ����ֽ�
//	//�����int*���͵�ָ�룬��x86�����½����÷���4���ֽ�
//	//�����char*���͵�ָ�룬�����÷���1���ֽ�
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
//	//����2��
//	//ָ������;�����ָ��+1-1������ʱ�����������ֽ�
//	//��������ָ��Ĳ���
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int i = 0;
//	int* p = arr;
//	//ָ��ĵ�һ��д��
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = 1;//1,*p=1 2,p++
//	//}
//
//	//�ڶ���
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

//ָ��ļ���
//int main()
//{
//	int arr[10] = { 2 };
//	printf("%d\n", &arr[9] - &arr[0]);//ָ���ȥָ��õ�����ָ���ָ��֮���Ԫ�ظ���
//	//�������е�ָ�붼�����
//	//ָ��ͬһ��ռ������ָ��������
//	return 0;
//}

//��ָ��ķ������ַ����ĳ���
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

//ָ��ı�׼�涨������������ָ���һ��Ԫ��֮����Ǹ��ڴ�λ�õ�ָ����бȽ�

//����ָ��
//int main()
//{ 
//	int a = 10;
//	int* pa = &a;//pa��һ��һ��ָ�����
//	int** ppa = &pa;//ppa��һ������ָ�����,����ָ�����������һ��ָ������ĵ�ַ
//	**ppa = 20;
//	printf("%d", a);
//	return 0;
//}

//ָ������
//�����ָ�������
//int main()
//{
//	int a = 10;
//	int i = 0;
//	int b = 20;
//	int c = 30;
//	int* parr[10] = { &a,&b,&c };//ָ������
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

//�ṹ��
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
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
//	struct peo p1 = {"����","155367857464422","��",181};//�ṹ������Ĵ�����p1�ǽṹ�����
//	struct st a = { {"����","12345678","Ů",168},18,3.14f };
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", a.p.name, a.p.tele, a.p.sex, a.p.high, a.num, a.f);
//	print2(&p1);
//	print1(p1);
//	return 0;
//}

//�ṹ�崫���Ǿ������ṹ��ĵ�ַ�����ܸ��ߣ�Ч�ʸ���




//#include <stdio.h>
//
//typedef struct student 
//{
//    int id; // ѧ��
//    char name[20]; // ����
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
//// ����ѧ���ṹ��
//struct Student 
//{
//    char name[50];
//    int id;
//    float grades[5]; // ����ÿ��ѧ����5�ſγ̵ĳɼ�
//};
//
//// ��������
//void addStudent(struct Student* students, int* count);
//void displayStudents(struct Student* students, int count);
//float calculateAverage(struct Student* student, int courseCount);
//void sortStudentsById(struct Student* students, int count);
//void sortStudentsByAverage(struct Student* students, int count, int courseCount);
//int main() 
//{
//    struct Student students[100]; // ���������100��ѧ��
//    int studentCount = 0;
//    int choice;
//
//    do 
//    {
//        // ��ʾ�˵�
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
//// ���ѧ������
//void addStudent(struct Student* students, int* count) 
//{
//    struct Student newStudent;
//
//    // ����ѧ����Ϣ
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
//    // ʹ��ָ���������Ԫ��
//    *(students + *count) = newStudent;
//    (*count)++;
//
//    printf("Student added successfully.\n");
//}
//
//// ��ʾѧ������
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
//            // ʹ��ָ����ʽṹ���Ա
//            printf("Name: %s, ID: %d\n", (students + i)->name, (students + i)->id);
//        }
//    }
//}
//
//// ����ƽ���ֺ���
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
//// ����ѧ��ID������
//void sortStudentsById(struct Student* students, int count)
//{
//    for (int i = 0; i < count - 1; i++)
//    {
//        for (int j = 0; j < count - i - 1; j++)
//        {
//            if ((students + j)->id > (students + j + 1)->id)
//            {
//                // ��������ѧ����λ��
//                struct Student temp = *(students + j);
//                *(students + j) = *(students + j + 1);
//                *(students + j + 1) = temp;
//            }
//        }
//    }
//}
//
//// ����ƽ����������
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
//                // ��������ѧ����λ��
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
//	printf("-------------ѧ��ϵͳ----------\n");
//	printf("ѡ��\n");
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


