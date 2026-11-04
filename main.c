include <stdio.h>
#include <string.h>

int main(void)
{
	char message[20];
	char good[]="Good ";
	char morning[]="morning!";
	char noon[]="afternoon!";

	char newyer[20]="A Happy New Year";
	int n;

	strcpy(message,good);	// good変数の文字列をmessageにコピー
	strcat(message,morning);// messageの末尾にmorning変数の内容を結合
	printf("%s\n",message);

	strncpy(message,good,2);// good変数の文字列を2文字だけコピー
	message[2]='\0';		// strncpyで文字数指定コピーをするとNULLが付かないことがあるので追加
	strcat(message,noon);
	printf("%s\n",message);

	strcpy(message,"good");
	strcat(message," night!!");
	printf("%s\n",message);


	n=strlen(newyer);		// newyerの文字数カウント
	printf("%s は%d文字です。\n",newyer,n);


	newyer[7]='\0';			// newyerの文字列の途中にヌル文字挿入
	n=strlen(newyer);
	printf("%s は%d文字です。\n",newyer,n);

	return 0;
}
