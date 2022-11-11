// FILE input output means reading the file or writing the file ex .txt file we can read and write
// we have to open file mode that is w or r or r+(both r and w) or a(adding the data previous data is present )
// the funtions to read and write are fscanf,fprintf etc
#include <stdio.h> // File functions are part of stdio.h header file

// Fuctions of file i o are ,,,,
// fprintf,fscanf,fputc,fputs,
// modes -- w,r , r+,w+
int main()
{

  //=============READING THE FILE===============
/*
  FILE *ptr = NULL; // to use file to open and find we have to make pointer
  char string[70] = "I am SK";
  ptr = fopen("myfile.txt", "r"); // to read file
  
    //fgets(string, 70, ptr); // remember here we dont write format specifier here string name is first then size and then pointer
    //printf("te cohntaint of file has %s\n", string); // i have made S as capital therefore i was not getting the result
  */
  // For getc or gets works only one at a time if we first do fgets then fgetc then result will not
  //show coz then it will be pointing at different loc .
  //note - when we use getc then automatically when we use getc it will be incremented no need
  //to increment again  as shown below
  /*
    char c = fgetc(ptr);
    printf("%c",c);
    c = fgetc(ptr);
    printf("%c",c);
  */

  /*
    //using scanf
    fscanf(ptr,"%s",string);
    printf("%s",string);

    fclose(ptr);
  */



    // =============WRITING THE FILE===============

     FILE *ptr = NULL; // to use file to open and find we have to make pointer
     char string[70] = "SGMCOE ";
     //ptr = fopen("myfile.txt", "r+"); // read/write , writing begining till new containt 
     //ptr = fopen("myfile.txt", "w"); // only write . previous containt will be erased 
     //ptr = fopen("myfile.txt", "w+");  // read/write , previous containt will be erased
     ptr = fopen("myfile.txt", "a+"); //containt will be added at end of the file . file will not be eresed

    // fprintf(ptr, "%s", string);
    fgets(string,70,ptr);
    printf("%s",string);
    // fputs(string,ptr);
     fclose(ptr);

     

  /*
    //=============IMPORTANT POINTS TO NOTE===============

    **** use of putc puts ,, modes r,w , r+,w+ ****
     r+****

    ptr = fopen("myfile.txt", "r+");

    here when  writing the file ,,, it goes begining of the txt file but it doesnot erase the file ,,
    it erase till the new containt is adding in file ,, after this it is as it is
    fputc('a', ptr);
    fputc('b', ptr); // it prints the character to file
    fputs(string,ptr); // it prints string to file

    ***   use of w+ ***
    in w+ the all containt of file will be erased when writing

    ptr = fopen("myfile.txt", "w+");
    fputs(string, ptr); // here we see that the containt is erased all then new containt is inserted
    fputc('a', ptr);

    ** use of a+(apend)

    ptr = fopen("myfile.txt", "a+"); // a means adding the containt in the last of the file and previous output is as it is
    fputs(string, ptr);
    fputc('a', ptr);
  */
  return 0;
}
