#include<stdio.h>
struct rec{
	int x;
};
int main(){
	int i;
	FILE *ptr_myfile;
	struct rec my_record;
	ptr_myfile=fopen("etec.bin","wb");
	if(!ptr_myfile){
		printf("Unable to open file!");
		return 1;
	}
	for(i=1;i<=10;i++){
		my_record.x= i;
		fwrite(&my_record, sizeof(struct rec),1,ptr_myfile);
	}
	printf("Write Succesful...!");
	fclose(ptr_myfile);
	return 0;
}
