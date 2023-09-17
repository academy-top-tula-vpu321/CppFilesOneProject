#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
    
    FILE* file = fopen("data.bin", "rb");
    
    /*
    int x{ 123 };
    int array[]{ 11, 22, 33, 44, 55 };
    double y = 123.0;
    char ch = 'A';
    char str[] = "Hello world\0";

    fwrite(&x, sizeof(x), 1, file);
    fwrite(array, sizeof(array[0]), sizeof(array) / sizeof(array[0]), file);
    fwrite(&y, sizeof(y), 1, file);
    fwrite(&ch, sizeof(ch), 1, file);
    fwrite(str, sizeof(str[0]), sizeof(str), file);
    */

    /*
    int n;
    int arr[5];
    double t;
    char a;
    char* s = new char[12];

    fread(&n, sizeof(n), 1, file);
    std::cout << n << "\n";
    fread(arr, sizeof(arr[0]), sizeof(arr), file);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
    fread(&t, sizeof(t), 1, file);
    fread(&a, sizeof(a), 1, file);
    fread(s, sizeof(char), strlen(s), file);
    //s[strlen(s)] = '\0';

    std::cout << t << "\n";
    std::cout << a << "\n";
    std::cout << s << "\n";
    */

    /*int position{ 26 };

    fseek(file, position, SEEK_SET);

    std::cout << "current file position: " << ftell(file) << "\n";

    fseek(file, position, SEEK_SET);
    fputs("Insert string\n", file);*/

    /*int size{ 10 };
    //char* str = new char[size];

    while (fgets(str, size, file))
        std::cout << str;*/
    
    /*for (int i = 65; i < 91; i++)
        fputc(i, file);
    fputc('\n', file);

    fputs("Hello world\n", file);*/
    

    fclose(file);
}
