/*
Compression: We need compression of files to reduce files size and allow faster transfer and recieving of files
A compression program has two stages: 1. Compresion 2.Decompression
Ways to do compresion: 1. Run Line Encoding (RLE) Loseless 2. Huffman compression Lossy
*/
// compression and decompression by RLE.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Compress()
{
    char buffer[256]; // stores each line
    FILE *ptr = fopen("repetitive_demo.txt", "r");//to be compressed
    FILE *out = fopen("compressed.txt", "w"); // compressed output file
    if (ptr == NULL)
    {
        printf("Error opening file!\n");
    }
    else
    {
        while (fgets(buffer, sizeof(buffer), ptr) != NULL)
        {
            int num = 1;
            char NL[256]; // to store new string
            int k = 0;    // index
            for (int i = 0; i < strlen(buffer); i++)
            {
                if (buffer[i] == '\n') continue; // skip newline
                if (buffer[i] == buffer[i + 1])
                {
                    num += 1;
                }
                else
                {
                    // store char + count in NL
                    k += sprintf(&NL[k], "%c%d", buffer[i], num);
                    num = 1; // reset counter
                }

            }
            fprintf(out, "%s\n", NL); // write compressed line
        }
    }

    fclose(ptr);
    fclose(out);
    printf("File compressed successfully!");
    //closing both files
}

void Read(){
    FILE *ptr = fopen("compressed.txt","r");
    char buffer[256];
    while(fgets(buffer,sizeof(buffer),ptr)!=NULL){
        printf("%s\n",buffer);
    }
}

void Decompress() {
    FILE *in = fopen("compressed.txt", "r");
    FILE *out = fopen("decompressed.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), in) != NULL) {
        char DC[512];  // to store decompressed line
        int k = 0;     // index for DC

        for (int i = 0; i < strlen(buffer); ) {
            if (buffer[i] == '\n') { 
                i++;
                continue;
            }

            char c = buffer[i];   // the character
            i++;

            int num = 0;
            while (buffer[i] >= '0' && buffer[i] <= '9') {
                num = num * 10 + (buffer[i] - '0'); // handle multi-digit numbers
                i++;
            }

            // repeat 'c' num times
            for (int j = 0; j < num; j++) {
                DC[k++] = c;
            }
        }

        DC[k] = '\0'; // null terminate string
        fprintf(out, "%s\n", DC);
    }

    fclose(in);
    fclose(out);
    printf("Decompression complete! Output saved to decompressed.txt\n");
}


int main()
{
    Compress();
    // Read();
    return 0;
}


//code suitable for highly repetative files. Gives negative compression on other file with less repetative characters