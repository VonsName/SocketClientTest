#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ͻ��˳�ʼ�� ��ȡhandle����
_declspec(dllexport)//����������Ϊ��̬��
int cltSocketInit(void **handle /*out*/)
{
	printf("cltSocketInit\n");
	return 0;
}

//�ͻ��˷�����
_declspec(dllexport)
int cltSocketSend(void *handle /*in*/, unsigned char *buf /*in*/, int buflen /*in*/)
{
	return 0;
}


//�ͻ����ձ���
_declspec(dllexport)
int cltSocketRev(void *handle /*in*/, unsigned char *buf /*in*/, int *buflen /*in out*/)
{
	return 0;
}

//�ͻ����ͷ���Դ
_declspec(dllexport)
int cltSocketDestory(void *handle/*in*/)
{
	if (handle!=NULL)
	{
		free(handle);
	}
	return 0;
}