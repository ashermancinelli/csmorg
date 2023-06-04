#include <stdio.h>
int get_int(char * prompt) {
  printf("%s", prompt);

  int user_input;
  scanf("%d", &user_input);

  return user_input;
}

void print_grid(int grid_width) {
  for (int row = 0; row < grid_width; row++)
  {
    for (int col = 0; col < grid_width; col++)
    {
      printf("#");
    }
    printf("\n");
  }
}
