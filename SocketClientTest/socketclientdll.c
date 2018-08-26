#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//客户端初始化 获取handle上下
_declspec(dllexport)//将函数导出为动态库
int cltSocketInit(void **handle /*out*/)
{
	printf("cltSocketInit\n");
	return 0;
}

//客户端发报文
_declspec(dllexport)
int cltSocketSend(void *handle /*in*/, unsigned char *buf /*in*/, int buflen /*in*/)
{
	return 0;
}


//客户端收报文
_declspec(dllexport)
int cltSocketRev(void *handle /*in*/, unsigned char *buf /*in*/, int *buflen /*in out*/)
{
	return 0;
}

//客户端释放资源
_declspec(dllexport)
int cltSocketDestory(void *handle/*in*/)
{
	if (handle!=NULL)
	{
		free(handle);
	}
	return 0;
}