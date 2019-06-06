#include <stdio.h>
#include <stdlib.h>

typedef enum {
    SMALL,
    MEDIUM,
    BIG
} screen_size_t;

typedef struct {
    char name[256];
    int year;
    screen_size_t scr_size;
} phone_t;

char *get_oldest_pone(phone_t phones[], int size);

int get_screen_size_count(phone_t phones[], int size, screen_size_t scr_size);

int price(phone_t phone);

int main()
{
    FILE *phone_file = fopen("../phones.txt", "rb");
    char line[50];
    char number[10];
    char scr[10];
    phone_t phones[15];
    for (int i = 0; i < 15; ++i) {
        fgets(line, 50, phone_file);
        char ch = line[0];
        for (int j = 0; line[j] != ' '; ++j) {
            phones[i].name[j] = line[j];
            phones[i].name[j + 1] = '\0';
            int l = 0;
            if (line[j + 1] == ' ') {
                for (int k = j + 2; line[k] != ' '; ++k) {
                    number[l] = line[k];
                    number[l + 1] = '\0';
                    ++l;
                    int n = 0;
                    if (line[k + 1] == ' ') {
                        for (int m = k + 2; line[m] != '\0'; ++m) {
                            scr[n] = line[m];
                            ++n;
                        }
                        if (atoi(scr) >= 15) {
                            phones[i].scr_size = BIG;
                        } else if (atoi(scr) < 12) {
                            phones[i].scr_size = SMALL;
                        } else {
                            phones[i].scr_size = MEDIUM;
                        }
                    }
                }
            }
            phones[i].year = atoi(number);
        }
    }
    printf("The %s is the oldest device in the database\n", get_oldest_pone(phones, 15));
    printf("There are %d phones with BIG screen size\n", get_screen_size_count(phones, 15, BIG));
    printf("There are %d phones with SMALL screen size\n", get_screen_size_count(phones, 15, SMALL));

    FILE *prices = fopen("../prices.txt", "a");
    for (int i1 = 0; i1 < 15; ++i1) {
        fprintf(prices, "%s : $%d \n", phones[i1].name, price(phones[i1]));
    }

    fclose(phone_file);
    fclose(prices);
    return 0;
}

char *get_oldest_pone(phone_t phones[], int size)
{
    char *oldest;
    int compare_year = 2019;
    for (int i = 0; i < 15; ++i) {
        if (phones[i].year < compare_year) {
            compare_year = phones[i].year;
            oldest = phones[i].name;
        }
    }
    return oldest;
}

int get_screen_size_count(phone_t phones[], int size, screen_size_t scr_size)
{
    int counter = 0;
    for (int i = 0; i < 15; ++i) {
        if (phones[i].scr_size == scr_size) {
            ++counter;
        }
    }
    return counter;
}

int price(phone_t phone)
{
    int price = 300;
    int deficit = (2019 - phone.year) * 50;

    switch (phone.scr_size) {
        case BIG:
            price *= 2;
            break;
        case MEDIUM:
            price += 100;
            break;
        default:;
    }

    if (deficit > 250) {
        price -= 250;
    } else {
        price -= deficit;
    }

    return price;
}