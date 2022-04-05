#ifndef EasyStringHeader

#include <stdlib.h>
#include <string.h>

char* newEmptyString(int size){
	return (char*)malloc(size*sizeof(char));
}

char* newString(char *Reference){
	int size = strlen(Reference);
	char *Output = (char*)malloc((size)*sizeof(char));
	
	strcpy(Output,Reference);
	
	return Output;
}

void freeString(char *Reference){
	free(Reference);
}

char* newLimitedCopy(char *Reference,int Limit){
	char *Output = (char*)malloc(Limit + sizeof(char));
	printf("[Teste:%d]",strlen(Output));
	for(int i = 0;i<Limit;i++){
		*(Output+i) = Reference[i];
	}
	
	
	
	return Output;
}

int costString(char *Reference){
	int PointerSize = sizeof(Reference);
	int CharArraySize = strlen(Reference)*sizeof(char);
	
	return PointerSize + CharArraySize;
}

#define EasyStringHeader
#endif