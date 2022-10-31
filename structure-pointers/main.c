#include <stdio.h>
#include <stdlib.h>

struct Item {
  char *name;
  int qty;
  float price;
  float amount;
};

void read_item(struct Item *item);
void print_item(struct Item *item);

int main(void) {
  struct Item item1;
  struct Item *p_item1;

  p_item1 = &item1;

  p_item1->name = (char *)malloc(25 * sizeof(char));

  if (!p_item1->name) {
    exit(EXIT_FAILURE);
  }

  read_item(p_item1);
  print_item(p_item1);

  free(p_item1->name);

  return 0;
}

void read_item(struct Item *item) {
  printf("Enter item name: ");
  scanf("%s", item->name);

  printf("Enter item quantity: ");
  scanf("%d", &item->qty);

  printf("Enter item price: ");
  scanf("%f", &item->price);

  item->amount = (float)item->qty * item->price;
};

void print_item(struct Item *item) {
  printf("name: %s\n", item->name);
  printf("qty: %d\n", item->qty);
  printf("price: %.2f\n", item->price);
  printf("amount: %.2f\n", item->amount);
};
