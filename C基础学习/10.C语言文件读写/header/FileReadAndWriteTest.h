//
// Created by huang aoan on 2022/11/24.
//

#ifndef C___LEARNING_FILEREADANDWRITETEST_H
#define C___LEARNING_FILEREADANDWRITETEST_H
void testOpenError();
void testFileWriteWithFputc(const char* filePath);
void testFileReadWithFgetc(const char* filePath);
void copyWithFgetcAndFputc(const char* source, const char* dest);
void readTxtFileWithFgets(const char* filePath);
void writeTxtFileWithFputs(const char* filePath);
void writeTxtFileWithFprintf(const char* filePath);
void readTxtFileWithFscanf(const char* filePath);
void freadAndFwriteBlock(const char* source, const char* dest);
void fwriteStruct(const char* filePath);
void freadStruct(const char* filePath);
void randomAccess(const char* filePath);
typedef struct Person{
    char *name;
    int age;
}Person;
#endif //C___LEARNING_FILEREADANDWRITETEST_H
