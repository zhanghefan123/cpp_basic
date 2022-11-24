# include "FileOperation.h"
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
int main()
{
    char* command = (char*)malloc(100);
    char* finalFilePath = (char*)malloc(100);
    char* result = NULL;
    size_t len = 0;
    // 当路径之中存在空格的时候我们需要在外面加上双引号
    const char* dirPath = "/Users/huangaoan/Desktop/zhf projects/c++ projects/c++ learning/C基础学习/12.C语言文件操作/files/";
    sprintf(command, "%s \"%s\"", "ls", dirPath);
    printf("command = %s\n", command);
    FILE*fp = popen(command, "r");
    if (fp == NULL) {
        printf("Cannot execute command:n%sn\n", command);
        return 0;
    }
    while(getline(&result, &len, fp) != -1) {
        // result 是我们要操纵的文件
        // 我们需要将 result 中的换行符去掉
        result[strlen(result) - 1] = '\0';
        strcat(finalFilePath, dirPath);
        strcat(finalFilePath, result);
        printf("finalFilePath = %s\n", finalFilePath);
        getFileStatus(finalFilePath);
        // 这里的新的文件名需要完全的路径
        renameFileTest(finalFilePath, "/Users/huangaoan/Desktop/zhf projects/c++ projects/c++ learn"
                                      "ing/C基础学习/12.C语言文件操作/files/test123.txt");
        // removeFileTest(finalFilePath);
    }
    free(command);
    free(finalFilePath);
    return 0;
}