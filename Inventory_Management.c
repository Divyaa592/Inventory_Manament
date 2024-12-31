 
#include<stdio.h>
 int MAX_ITEMS=50; 
struct InventoryItem { 
int id; 
char name[50];
 int quantity;
 float price;
 }; 

void addItem(struct InventoryItem inventory[], int *itemCount) { 

printf("Enter item details:\n");
printf("ID: "); 
scanf("%d", &inventory[*itemCount].id);
 printf("Name: "); 
scanf("%s", inventory[*itemCount].name); 
printf("Quantity:"); 
scanf("%d",&inventory[*itemCount].quantity); 
printf("Price: "); 
scanf("%f", &inventory[*itemCount].price);
 (*itemCount)++; 
}

 void displayInventory(const struct InventoryItem inventory[], int itemCount) { 

printf("\nInventory:\n"); 
printf("ID\tName\tQuantity\tPrice\n"); 
for (int i = 0; i < itemCount; ++i) 
{ 
printf("%d\t%s\t\t%d\t\t%.2f\n", inventory[i].id,inventory[i].name, inventory[i].quantity, inventory[i].price); 
} 
}
 int main() 
{ 
struct InventoryItem inventory[MAX_ITEMS]; 
int itemCount = 0; 
int choice;
 do 
{ 
printf("\n1. Add Item\n"); 
printf("2. Display Inventory\n"); 
printf("3. Exit\n"); 
printf("Enter your choice: "); 
scanf("%d", &choice);
switch (choice) 
{ 
case 1: addItem(inventory, &itemCount); 
break; 
case 2: displayInventory(inventory, itemCount); 
break; 
case 3: printf("Exiting program.\n"); 
break; 
default: printf("Invalid choice. Please try again.\n"); 
} 
} 
while (choice != 3);
return 0;
 } 
