//
// Created by huang aoan on 2022/11/23.
//
#include <stdio.h>
#include "TypeDefTest.h"
// 字符类型

void testCharType(){
    char ch = 'a';
    printf("sizeof(ch) = %lu\n", sizeof(ch));

    // 两个% 我们就能够将我们的%进行转移输出出来
    printf("ch[%%c] = %c\n", ch); //打印字符
    printf("ch[%%d] = %d\n", ch); //打印‘a’ ASCII的值

    char A = 'A';
    char a = 'a';
    printf("a = %d\n", a);		//97
    printf("A = %d\n", A);	//65

    printf("A = %c\n", 'a' - 32); //小写a转大写A
    printf("a = %c\n", 'A' + 32); //大写A转小写a

    ch = ' ';
    printf("空字符：%d\n", ch); //空字符ASCII的值为32
    printf("A = %c\n", 'a' - ' '); //小写a转大写A
    printf("a = %c\n", 'A' + ' '); //大写A转小写a
}


void testConvert()
{
    printf("abc");
    printf("\refg\n"); //\r切换到句首， \n为换行键

    printf("abc");
    printf("\befg\n");//\b为退格键， \n为换行键

    printf("%d\n", '\123');// '\123'为8进制转义字符，0123对应10进制数为83
    printf("%d\n", '\x23');// '\x23'为16进制转义字符，0x23对应10进制数为35
}

void testFloat()
{
    //传统方式赋值
    float a = 3.14f; //或3.14F
    double b = 3.14;

    printf("a = %f\n", a);
    printf("b = %lf\n", b);

    //科学法赋值
    a = 3.2e3f; //3.2*1000 = 3200，e可以写E
    printf("a1 = %f\n", a);

    a = 100e-3f; //100*0.001 = 0.1
    printf("a2 = %f\n", a);

    a = 3.1415926f;
    printf("a3 = %f\n", a); //结果为3.141593
}

// C语言如何表示相应的进制数
void testBaseOfNumbers()
{
    int a = 123;		//十进制方式赋值
    int b = 0123;		//八进制方式赋值， 以数字0开头
    int c = 0xABC;	//十六进制方式赋值

    //如果在printf中输出一个十进制数那么用%d，八进制用%o，十六进制是%x
    printf("十进制：%d\n",a );
    printf("八进制：%o\n", b);	//%o,为字母o,不是数字
    printf("十六进制：%x\n", c);
}

// 输出补码
void testComplement()
{
    int a = -15;
    printf("%x\n",a);
    //结果为 fffffff1
    //fffffff1对应的二进制：1111 1111 1111 1111 1111 1111 1111 0001 这是计算机之中存储的补码
    //符号位不变，其它取反：1000 0000 0000 0000 0000 0000 0000 1110 取反
    //上面加1：1000 0000 0000 0000 0000 0000 0000 1111  最高位1代表负数，就是-15 取反完成后进行+1
}

// 数值的溢出
void testOverflow()
{
    char ch;

    //符号位溢出会导致数的正负发生改变
    ch = 0x7f + 2; //127+2
    printf("%d\n", ch);
    //	0111 1111
    //+2后 1000 0001，这是负数补码，符号为不变，其余位取反再+1，变为其原码为 1111 1111，结果为-127

    //最高位的溢出会导致最高位丢失
    unsigned char ch2;
    ch2 = 0xff+1; //255+1
    printf("%u\n", ch2);
    //	  1111 1111
    //+1后 10000 0000， char只有8位最高位的溢出，结果为0000 0000，十进制为0

    ch2 = 0xff + 2; //255+1
    printf("%u\n", ch2);
    //	  1111 1111
    //+1后 10000 0001， char只有8位最高位的溢出，结果为0000 0001，十进制为1
}

// 类型限定符
/*
限定符	    含义
extern	    声明一个变量，extern声明的变量没有建立存储空间。 extern int a;//变量在定义的时候创建存储空间
const	    定义一个常量，常量的值不能修改。 const int a = 10;
Volatile	防止编译器优化代码
register	定义寄存器变量，提高效率。register是建议型的指令，而不是命令型的指令，如果CPU有空闲寄存器，那么register就生效，如果没有空闲寄存器，那么register无效。
 */

// printf 的格式字符
/*
打印格式	对应数据类型	含义
%d	    int	接受整数值并将它表示为有符号的十进制整数
%hd	    short int	短整数
%hu	    unsigned short 	无符号短整数
%o	    unsigned int	无符号8进制整数
%u	    unsigned int	无符号10进制整数
%x,%X	unsigned int	无符号16进制整数，x对应的是abcdef，X对应的是ABCDEF
%f	    float	单精度浮点数
%lf	    double	双精度浮点数
%e,%E	double	科学计数法表示的数，此处"e"的大小写代表在输出时用的"e"的大小写
%c	    char	字符型。可以把输入的数字按照ASCII码相应转换为对应的字符
%s	    char * 	字符串。输出字符串中的字符直至字符串中的空字符（字符串以'\0‘结尾，这个'\0'即空字符）
%p	    void *	以16进制形式输出指针
%%	    %	输出一个百分号
 */

// printf 附加的格式
/*
字符  	        含义
l(字母l)	        附加在d,u,x,o前面，表示长整数
-	            左对齐
m(代表一个整数)	数据最小宽度
0(数字0)	        将输出的前面补上0直到占满指定列宽为止不可以搭配使用-
m.n(代表一个整数)	m指域宽，即对应的输出项在输出设备上所占的字符数。n指精度，用于说明输出的实型数的小数位数。对数值型的来说，未指定n时，隐含的精度为n=6位。
 */

void printfAndPutCharTest()
{
    int a = 100;
    printf("a = %d\n", a);//格式化输出一个字符串
    printf("%p\n", &a);//输出变量a在内存中的地址编号
    printf("%%d\n"); // 输出一个百分号

    char c = 'a';
    putchar(c);//putchar只有一个参数，就是要输出的char
    long a2 = 100;
    printf("%ld, %lx, %lo\n", a2, a2, a2);

    long long a3 = 1000;
    printf("%lld, %llx, %llo\n", a3, a3, a3);

    int abc = 10;
    printf("abc = '%6d'\n", abc); // 默认右对齐，左边补空格
    printf("abc = '%-6d'\n", abc);
    printf("abc = '%06d'\n", abc);
    printf("abc = '%-06d'\n", abc); //这里选择了左对齐，所以0无效

    double d = 12.3;
    printf("d = \' %-10.3lf \'\n", d);
}


void testScanfAndGetChar()
{
    char ch1;
    char ch2;
    char ch3;
    int a;
    int b;

    printf("请输入ch1的字符：");
    ch1 = getchar();
    printf("ch1 = %c\n", ch1);

    getchar(); //测试此处getchar()的作用

    printf("请输入ch2的字符：");
    ch2 = getchar();
    printf("\'ch2 = %ctest\'\n", ch2);

    getchar(); //测试此处getchar()的作用
    printf("请输入ch3的字符：");
    int count = scanf("%c", &ch3);//这里第二个参数一定是变量的地址，而不是变量名
    printf("ch3 = %c\n", ch3);
    printf("count = %d\n", count);

    printf("请输入a的值：");
    scanf("%d", &a);
    printf("a = %d\n", a);

    printf("请输入b的值：");
    scanf("%d", &b);
    printf("b = %d\n", b);
}

// 隐式类型转换
void testImplicitTypeConversion()
{
    int a = 10;
    double b = 3.14;
    printf("a + b = %lf", a + b);
}

// 强制类型转换
void testExplicitTypeConversion()
{
    int a = 10;
    double b = 3.14;
    printf("a + b = %lf", (double)a + b);
}


// 分割线函数
void splitLine()
{
    printf("------------------------------------------\n");
}

void testTypeDef()
{
    Person p1;
    // name 的类型是 const char* ,我们可以将字符串常量赋值给他
    p1.name = "zhf";
    u32 age = 10;
    printf("p1.name = %s, p1.age = %d\n", p1.name, age);
}

