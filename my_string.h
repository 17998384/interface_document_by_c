#pragma once
#include <string.h>
typedef struct string
{
	int length;
	char* buffer;
}String;


//�����ַ���
String* new_string();

//�ַ�������
int string_length(String* str);

//׷���ַ���
String* string_append(String* str, char* source);

//����ַ���
String* string_clear(String* str);

//ɾ���ַ���
void delete_string(String* str);