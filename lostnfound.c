#include <stdio.h>
#include <string.h>

#define MAX 100

// Global arrays to store item information

char itemName[MAX][50];
char itemColor[MAX][30];
char itemLocation[MAX][50];
char itemDescription[MAX][100];

int itemType[MAX];
int claimed[MAX] = {0};

// Function declarations

void addItem(int *count, int type);
void displayItems(int count, int type);
void searchItem(int count);
void findMatchingItems(int count);
void claimItem(int count);


// Main function

int main()
{
    int choice;
    int count = 0;

    do
    {
        printf("\n");
        printf("========================================\n");
        printf("       SMART CAMPUS LOST & FOUND\n");
        printf("========================================\n");

        printf("1. Report Lost Item\n");
        printf("2. Report Found Item\n");
        printf("3. View Lost Items\n");
        printf("4. View Found Items\n");
        printf("5. Search Item\n");
        printf("6. Find Matching Items\n");
        printf("7. Claim Found Item\n");
        printf("8. Exit\n");

        printf("========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addItem(&count, 1);
                break;

            case 2:
                addItem(&count, 2);
                break;

            case 3:
                displayItems(count, 1);
                break;

            case 4:
                displayItems(count, 2);
                break;

            case 5:
                searchItem(count);
                break;

            case 6:
                findMatchingItems(count);
                break;

            case 7:
                claimItem(count);
                break;

            case 8:
                printf("\nThank you for using our system!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 8);

    return 0;
}


// 1. Add Lost or Found Item

void addItem(int *count, int type)
{
    if(*count >= MAX)
    {
        printf("\nSorry! Item storage is full.\n");
        return;
    }

    printf("\n----------------------------------------\n");

    if(type == 1)
        printf("          REPORT LOST ITEM\n");
    else
        printf("          REPORT FOUND ITEM\n");

    printf("----------------------------------------\n");

    printf("Enter item name: ");
    scanf(" %49[^\n]", itemName[*count]);

    printf("Enter item colour: ");
    scanf(" %29[^\n]", itemColor[*count]);

    printf("Enter location: ");
    scanf(" %49[^\n]", itemLocation[*count]);

    printf("Enter item description: ");
    scanf(" %99[^\n]", itemDescription[*count]);

    itemType[*count] = type;

    claimed[*count] = 0;

    (*count)++;

    printf("\nItem registered successfully!\n");
}


// 2. Display Lost or Found Items

void displayItems(int count, int type)
{
    int i;
    int found = 0;

    if(type == 1)
        printf("\n========== LOST ITEMS ==========\n");
    else
        printf("\n========== FOUND ITEMS ==========\n");

    for(i = 0; i < count; i++)
    {
        if(itemType[i] == type && claimed[i] == 0)
        {
            printf("\nRecord Number: %d\n", i + 1);
            printf("Item Name: %s\n", itemName[i]);
            printf("Colour: %s\n", itemColor[i]);
            printf("Location: %s\n", itemLocation[i]);
            printf("Description: %s\n", itemDescription[i]);

            printf("--------------------------------\n");

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("\nNo records available!\n");
    }
}


// 3. Search Item

void searchItem(int count)
{
    char searchName[50];
    int i;
    int found = 0;

    printf("\nEnter item name to search: ");
    scanf(" %49[^\n]", searchName);

    for(i = 0; i < count; i++)
    {
        if(strcmp(itemName[i], searchName) == 0)
        {
            printf("\nItem Found!\n");

            printf("Record Number: %d\n", i + 1);
            printf("Name: %s\n", itemName[i]);
            printf("Colour: %s\n", itemColor[i]);
            printf("Location: %s\n", itemLocation[i]);
            printf("Description: %s\n", itemDescription[i]);

            if(itemType[i] == 1)
                printf("Status: Lost Item\n");
            else
                printf("Status: Found Item\n");

            if(claimed[i] == 1)
                printf("Claim Status: Claimed\n");
            else
                printf("Claim Status: Not Claimed\n");

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("\nSorry! Item not found.\n");
    }
}


// 4. Find Matching Lost and Found Items

void findMatchingItems(int count)
{
    int i, j;
    int found = 0;

    printf("\n======= MATCHING ITEMS =======\n");

    for(i = 0; i < count; i++)
    {
        if(itemType[i] == 1 && claimed[i] == 0)
        {
            for(j = 0; j < count; j++)
            {
                if(itemType[j] == 2 && claimed[j] == 0)
                {
                    if(strcmp(itemName[i], itemName[j]) == 0 &&
                       strcmp(itemColor[i], itemColor[j]) == 0)
                    {
                        printf("\nPossible Match Found!\n");

                        printf("Item Name: %s\n", itemName[i]);
                        printf("Colour: %s\n", itemColor[i]);

                        printf("Lost Location: %s\n",
                               itemLocation[i]);

                        printf("Found Location: %s\n",
                               itemLocation[j]);

                        printf("Lost Record: %d\n", i + 1);
                        printf("Found Record: %d\n", j + 1);

                        found = 1;
                    }
                }
            }
        }
    }

    if(found == 0)
    {
        printf("\nNo matching items found!\n");
    }
}


// 5. Claim Found Item

void claimItem(int count)
{
    int number;
    int i;

    printf("\n======= CLAIM FOUND ITEM =======\n");

    displayItems(count, 2);

    printf("\nEnter record number to claim: ");
    scanf("%d", &number);

    if(number < 1 || number > count)
    {
        printf("\nInvalid record number!\n");
        return;
    }

    i = number - 1;

    if(itemType[i] == 2 && claimed[i] == 0)
    {
        claimed[i] = 1;

        printf("\nItem claimed successfully!\n");
        printf("Item Name: %s\n", itemName[i]);
    }
    else
    {
        printf("\nThis item cannot be claimed!\n");
    }
}
