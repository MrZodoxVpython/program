#include <iostream>

using namespace std;

int main(){
	char name[20], web_address[30];
	
	printf("kode creator anda : ");
	gets("%[^\n]s", &name);
	
	printf("Alamat web yang anda inginkan : ");
	scanf("%s", &web_address);
	
	
	printf("\n---------------------------\n");
	printf("creator secure a/n: %s\n", name);
	printf("website has created: %s\n", web_address);
			
	return 0;
	
}
