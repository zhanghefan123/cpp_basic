#include "../header/FileReadAndWriteTest.h"
#include <stdio.h>
#include <stdlib.h>

// 文件指针的结构
/*
typedef struct
{
	short           level;	//缓冲区"满"或者"空"的程度
	unsigned        flags;	//文件状态标志
	char            fd;		//文件描述符
	unsigned char   hold;	//如无缓冲区不读取字符
	short           bsize;	//缓冲区的大小
	unsigned char   *buffer;//数据缓冲区的位置
	unsigned        ar;	 //指针，当前的指向
	unsigned        istemp;	//临时文件，指示器
	short           token;	//用于有效性的检查
}FILE;
 */

void testOpenError()
{
    /**
     * 如果无法打开文件则将返回的是NULL
     * fopen 函数返回的是 FILE 这个结构体的地址
     * 然后我们使用FILE*来接住这个地址
     */
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        perror("open file error");
        return;
    }
    else
    {
        // 进行文件的关闭
        /**
         * 功能：关闭先前fopen()打开的文件。此动作让缓冲区的数据写入文件中，
         * 并释放系统所提供的文件资源
         *
         * 返回值：成功则返回0，失败返回-1
         */
        fclose(fp);
    }

}

void testFileWriteWithFputc(const char * filePath)
{
    /**
     * @brief 使用fputc函数进行文本文件的写入
     * @param filePath 文件路径
     */
    char buf[] = "hello world";
    FILE *fp = fopen(filePath, "w");
    if(fp == NULL)
    {
        perror("open file error");
    }
    else
    {
        // 这里遍历到是\0的时候就会停止
        for(int i = 0; i < sizeof(buf)-1; i++)
        {
            fputc(buf[i], fp);
        }
    }
    fclose(fp);
}

void testFileReadWithFgetc(const char* filePath)
{
    /**
     * @brief 使用fgetc函数进行文本文件的读取
     * @param filePath 文件路径
     */
    FILE *fp = fopen(filePath, "r");
    if(fp == NULL)
    {
        perror("open file error");
    }
    else
    {
        char ch;
        // EOF的定义为 #define EOF (-1)
        /**
         * EOF 代表文件的结束符号，当文件读取到文件的末尾时，会返回EOF
         */
        while((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    fclose(fp);
}

// 进行二进制文件的拷贝
void copyWithFgetcAndFputc(const char* source, const char* dest)
{
    /**
     * @brief 使用fgetc和fputc函数进行二进制文件的拷贝
     * @param source 源文件路径
     * @param dest 目标文件路径
     */
    FILE * fp_source = fopen(source, "rb");
    if(fp_source == NULL)
    {
        perror("open file error");
        return;
    }
    FILE * fp_dest = fopen(dest, "wb");
    if(fp_dest == NULL)
    {
        perror("open file error");
        return;
    }

    for(int ch = fgetc(fp_source); ch != EOF; ch = fgetc(fp_source)) {
        fputc(ch, fp_dest);
    }
    fclose(fp_source);
    fclose(fp_dest);
}

void readTxtFileWithFgets(const char* filePath)
{
    /**
     * @brief 使用fgets函数进行文本文件的读取
     * @param filePath 文件路径
     */
    FILE *fp = fopen(filePath, "r");
    if(fp == NULL)
    {
        perror("open file error");
    }
    else
    {
        char buf[1024];
        while(fgets(buf, sizeof(buf), fp) != NULL)
        {
            printf("%s", buf);
        }
        printf("\n");
    }
    fclose(fp);
}

void writeTxtFileWithFputs(const char* filePath)
{
    /**
     * @brief 使用fputs函数进行文本文件的写入
     * @param filePath 文件路径
     */
    FILE *fp = fopen(filePath, "w");
    if(fp == NULL)
    {
        perror("open file error");
    }
    else
    {
        char buf[] = "12312312312\n12312312311\n12312312313\n";
        fputs(buf, fp);
    }
    fclose(fp);
}

// 使用fprintf函数进行文本文件的写入
void writeTxtFileWithFprintf(const char* filePath) {
    /**
     * @brief 使用fprintf函数进行文本文件的写入
     * @param filePath 文件路径
     */
    FILE *fp = fopen(filePath, "w");
    if (fp == NULL) {
        perror("open file error");
    } else {
        char buf[] = "输出的值是:";
        fprintf(fp, "%s %d\n", buf, 123);
    }
    fclose(fp);
}

void readTxtFileWithFscanf(const char* filePath)
{
    /**
     * @brief 使用fscanf函数进行文本文件的读取
     * @param filePath 文件路径
     */
    FILE *fp = fopen(filePath, "r");
    if(fp == NULL)
    {
        perror("open file error");
    }
    else
    {
        char buf[1024];
        int b;
        fscanf(fp, "%s %d",buf, &b);
        printf("%s %d", buf, b);
    }
}

// 使用块进行文件的拷贝
void freadAndFwriteBlock(const char* source, const char* dest)
{
    /**
     * @brief 使用fread和fwrite函数进行文件的拷贝
     * @param source 源文件路径
     * @param dest 目标文件路径
     */
    FILE *fp_source = fopen(source, "rb");
    if(fp_source == NULL)
    {
        perror("open file error");
        return;
    }
    FILE *fp_dest = fopen(dest, "wb");
    if(fp_dest == NULL)
    {
        perror("open file error");
        return;
    }

    char buf[1024];
    size_t size;
    while(!feof(fp_source))
    {
        // 读取一个字节，总共1024个字节
        size = fread(buf, 1, sizeof(buf), fp_source);
        // 写一个字节，总共size个字节
        fwrite(buf, 1, size, fp_dest);
    }
    fclose(fp_source);
    fclose(fp_dest);
}

// 使用块进行struct的写入
void fwriteStruct(const char* filePath)
{
    FILE *fp = fopen(filePath, "wb");
    if(fp == NULL)
    {
        perror("open file error");
        return;
    }
    // 然后我们进行文件的读取
    Person p[3] = {
            {"张三", 18},
            {"李四", 19},
            {"王五", 20}
    };
    fwrite(p, sizeof(Person), 3, fp);
    fclose(fp);
}

// 使用块进行struct的读取
void freadStruct(const char* filePath) {
    FILE *fp = fopen(filePath, "rb");
    if (fp == NULL) {
        perror("open file error");
        return;
    }
    // 然后我们进行文件的读取
    Person p[3];
    fread(p, sizeof(Person), 3, fp);
    for (int i = 0; i < 3; i++) {
        printf("name:%s, age:%d\n", p[i].name, p[i].age);
    }
    fclose(fp);
}

// 文件的随机读写
void randomAccess(const char* filePath)
{
    FILE * fp = fopen(filePath, "wb+");
    if(fp == NULL)
    {
        perror("open file error");
        return;
    }
    char hello[] = "hello world";
    for(int i = 0; i < sizeof(hello)/sizeof(hello[0])-1;i++)
    {
        fputc(hello[i], fp);
    }
    // 接着我们将指针往回走一点把world替换成为russia
    fseek(fp, -5, SEEK_CUR);
    char russia[] = "russia";
    for(int i = 0; i < sizeof(russia)/sizeof(russia[0])-1;i++)
    {
        fputc(russia[i], fp);
    }
    fclose(fp);
}