#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "socketclientdll.h"
#include "itcastlog.h"



int main01(int argc,char *argv[])
{
	void	*handle=NULL;
	//初始化
	int ret=cltSocketInit(&handle);
	if (ret!=0)
	{
		printf("error\n");
		return ret;
	}

	char buf[128] = { 0 };
	char outbuf[128] = { 0 };
	int buflen = 3;
	int outbuflen = 0;
	strcpy(buf, "adbaskdhasdhasdsa");
	//客户端发送报文
	ret= cltSocketSend(handle , buf ,buflen );
	if (ret != 0)
	{
		printf("error\n");
		return ret;
	}
	
	//客户端收报文
	ret= cltSocketRev(handle , outbuf, &outbuflen);
	if (ret != 0)
	{
		printf("error\n");
		return ret;
	}
	printf("%s\n", outbuf);


	//客户端释放资源
	ret= cltSocketDestory(handle);
	if (ret != 0)
	{
		printf("error\n");
		return ret;
	}
	system("pause");
	return 0;
}

int main()
{
	ITCAST_LOG(__FILE__, __LINE__, LogLevel[1], 0, "11111");
	ITCAST_LOG(__FILE__, __LINE__, LogLevel[2], 0, "22222");
	ITCAST_LOG(__FILE__, __LINE__, LogLevel[3], 0, "33333");
	return 0;
}
