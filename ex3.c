#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
    int a[100];
    int b =1;
    int c = 0;
    if(argc<=1){
    printf("The program needs at least one integer parameter to run!\n") ;
    return 0;
    }
    if(argc<=2){
    printf("Min parameter is %s\n",argv[1]);
    return 0;
    }
    {
    for(b=1;b<argc;b++,c++)
    {
    if(*argv[b]>'0'&&*argv[b]<'9')
    {
        printf("The parameter has to be an integer format!\n");
          
        return 0;
    }
    
        {
            a[c]=atof(argv[b]);
            }
    }
    int j=0;
    int temp;
    for(j=0;j<argc-2;j++){
     if(a[j]<a[j+1]) 
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;}
    }
    printf("Min parameter is %d\n",a[argc-2]);
    return 0;
    }  
    }