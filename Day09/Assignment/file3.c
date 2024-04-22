/*read the contents from the file reverse the content and store it in the another new file*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  // Open the input file.
  FILE *input_file = fopen("input.txt", "r");
  if (input_file == NULL) {
    printf("Error opening input file.\n");
    return 1;
  }

  // Get the size of the input file.
  fseek(input_file, 0, SEEK_END);
  long input_file_size = ftell(input_file);
  fseek(input_file, 0, SEEK_SET);

  // Allocate a buffer to store the contents of the input file.
  char *input_file_buffer = malloc(input_file_size);
  if (input_file_buffer == NULL) {
    printf("Error allocating memory for input file buffer.\n");
    return 1;
  }

  // Read the contents of the input file into the buffer.
  fread(input_file_buffer, 1, input_file_size, input_file);

  // Close the input file.
  fclose(input_file);

  // Open the output file.
  FILE *output_file = fopen("output.txt", "w");
  if (output_file == NULL) {
    printf("Error opening output file.\n");
    return 1;
  }

  // Write the contents of the buffer to the output file in reverse order.
  for (long i = input_file_size - 1; i >= 0; i--) {
    fputc(input_file_buffer[i], output_file);
  }

  // Close the output file.
  fclose(output_file);

  // Free the buffer.
  free(input_file_buffer);

  return 0;
}