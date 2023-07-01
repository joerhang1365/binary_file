#include <stdio.h>

#define BYTES_SIZE 32768

int main()
{
   FILE *file = fopen("output.bin", "wb");
   if(file == NULL)
   {
      printf("failed to open file\n");
      return 1;
   }

   unsigned char data[BYTES_SIZE];
   size_t bytes = sizeof(data);
   size_t elements = 1;

   for(int i = 0; i < BYTES_SIZE; i++)
   {
      data[i] = 0xea;
   }

   fwrite(data, bytes, elements, file);

   fclose(file);

   return 1;
}
