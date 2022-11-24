#include "header/FileReadAndWriteTest.h"
int main()
{
    testOpenError();
    const char* filePath = "/Users/huangaoan/Desktop/zhf projects/c++ projects/c++ learning/C基础学习/10.C语言文件读写/files/password.txt";
    const char* source = "/Users/huangaoan/Desktop/zhf projects/c++ projects/c++ learning/C基础学习/10.C语言文件读写/files/test.png";
    const char* dest = "/Users/huangaoan/Desktop/zhf projects/c++ projects/c++ learning/C基础学习/10.C语言文件读写/files/dest.png";
    const char* dest1 = "/Users/huangaoan/Desktop/zhf projects/c++ projects/c++ learning/C基础学习/10.C语言文件读写/files/dest1.png";
    const char* lines = "/Users/huangaoan/Desktop/zhf projects/c++ projects/c++ learning/C基础学习/10.C语言文件读写/files/lines.txt";
    const char* fprintfLine = "/Users/huangaoan/Desktop/zhf projects/c++ projects/c++ learning/C基础学习/10.C语言文件读写/files/fprintfLine.txt";
    const char* structFile = "/Users/huangaoan/Desktop/zhf projects/c++ projects/c++ learning/C基础学习/10.C语言文件读写/files/structFile.txt";
    const char* randomAccessFile = "/Users/huangaoan/Desktop/zhf projects/c++ projects/c++ learning/C基础学习/10.C语言文件读写/files/randomAccess.txt";
    // 当前的相对路径在cmake-build-debug目录下，所以我们使用的是绝对路径
    // 在vs之中工作路径是工程文件的路径
    // 手动执行exe，相对路径相对的是exe文件
    testFileWriteWithFputc(filePath);
    testFileReadWithFgetc(filePath);
    copyWithFgetcAndFputc(source,dest);
    readTxtFileWithFgets(lines);
    writeTxtFileWithFputs(lines);
    writeTxtFileWithFprintf(fprintfLine);
    readTxtFileWithFscanf(fprintfLine);
    freadAndFwriteBlock(source,dest1);
    fwriteStruct(structFile);
    freadStruct(structFile);
    randomAccess(randomAccessFile);
    return 0;
}