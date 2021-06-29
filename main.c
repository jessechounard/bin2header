#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        printf("Usage:\n\tbin2header binary_filename header_filename variable_name\n\n"
            "Example:\n\tbin2header input.bin myfile.h input_bytes\n");
        return 0;
    }

    FILE *input = fopen(argv[1], "rb");
    if(input == NULL)
    {
        printf("Couldn't open input file (%s) for reading\n", argv[1]);
        return 0;        
    }

    FILE *output = fopen(argv[2], "w");
    if(input == NULL)
    {
        fclose(input);
        printf("Couldn't open output file (%s) for writing\n", argv[2]);
        return 0;        
    }

    fseek(input, 0, SEEK_END);
    int inputLength = ftell(input);
    fseek(input, 0, SEEK_SET);

    uint8_t *data = malloc(inputLength);
    fread(data, 1, inputLength, input);

    fprintf(output, "#ifndef %s_BIN2HEADER\n", argv[3]);
    fprintf(output, "#define %s_BIN2HEADER\n\n", argv[3]);

    fprintf(output, "#ifdef __cplusplus\nextern \"C\" {\n#endif\n\n");

    fprintf(output, "unsigned int %s_length = %d;\n\n", argv[3], inputLength);

    fprintf(output, "unsigned char %s[] =\n{\n", argv[3]);

    int byteCount = 0;
    for(int i=0; i<inputLength; i++)
    {
        if(byteCount == 0)
        {
            fprintf(output, "\t");
        }

        fprintf(output, "0x%02x", data[i]);

        if(i != inputLength - 1)
        {
            fprintf(output, ", ");

            byteCount++;
            if(byteCount == 16)
            {
                byteCount = 0;
                fprintf(output, "\n");
            }
        }
    }

    fprintf(output, "\n};\n\n");

    fprintf(output, "#ifdef __cplusplus\n}\n#endif\n\n");

    fprintf(output, "#endif\n");

    free(data);
    fclose(output);
    fclose(input);

    return 0;
}
