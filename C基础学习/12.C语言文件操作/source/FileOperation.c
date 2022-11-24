#include <stdio.h>
#include <sys/stat.h>
#include <time.h>


void getFileStatus(const char* filePath)
{
    /**
     * @brief 获取文件的状态
     * @param filePath 文件路径
     */
    struct stat fileStatus;
    if(stat(filePath, &fileStatus) == 0)
    {
        // 进行文件的各项信息的输出
        printf("文件的大小为：%lld", fileStatus.st_size);
        printf("文件的权限为：%o", fileStatus.st_mode);
        printf("文件的最后修改时间为：%s", ctime(&fileStatus.st_mtime));
        printf("文件的最后访问时间为：%s", ctime(&fileStatus.st_atime));
        printf("文件的最后属性改变时间为：%s", ctime(&fileStatus.st_ctime));
    }
    else
    {
        perror("获取文件信息失败");
    }
}

void removeFileTest(const char* filePath)
{
    /**
     * @brief 删除文件
     * @param filePath 文件路径
     */
    if(remove(filePath) == 0)
    {
        printf("文件删除成功\n");
    }
    else
    {
        perror("文件删除失败");
    }
}

void renameFileTest(const char* filePath, const char* newFileName)
{
    /**
     * @brief 重命名文件
     * @param filePath 文件路径
     */
    if(rename(filePath, newFileName) == 0)
    {
        printf("文件重命名成功\n");
    }
    else
    {
        perror("文件重命名失败");
    }
}
