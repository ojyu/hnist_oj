#include<stdio.h>
#include<string.h>

void func(char arr[11], int sz)
{
	int i = 0;
	for (i = 0; i < sz - i; i++)
	{
		char temp = 0;
		temp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = temp;
	}
}

int main()
{
	int i = 0;
	char arr[11] = { 0 };
	scanf("%s", arr);
	int sz = strlen(arr);
	func(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;

}