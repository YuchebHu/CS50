#include <stdio.h>

int main(void) {
  // TODO: Prompt for start size
  int start_size = 0;
  while (start_size < 9) {
    printf("Start size: ");
    scanf("%d", &start_size);
    if (start_size < 9) {
      printf("Start size cannot be less than 9\n");
    }
  }

  // TODO: Prompt for end size
  int end_size = 0;
  while (end_size < start_size) {
    printf("End size: ");
    scanf("%d", &end_size);
    if (end_size < start_size) {
      printf("End size cannot be less than start size\n");
    }
  }

  // TODO: Calculate number of years until we reach threshold
  int year = 0;
  int current_size = start_size;
  while (current_size < end_size) {
    int new_llama = current_size / 3;
    int dead_llama = current_size / 4;
    current_size += new_llama - dead_llama;
    ++year;
  }
  // TODO: Print number of years
  printf("Years: %d\n", year);
}
