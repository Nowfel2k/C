#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

static int top = -1;

typedef struct writer_info {

    char name[15];
    char surname[20];
    int number_of_books;

} writer_info;


typedef struct book_info {

    char book_name[20];
    writer_info writer;
    int first_publication_year;

} book_info;


// Creating main book list

book_info book_list[100];



void print_book_info(book_info* book_list);
void search_book(book_info* book_list);
void add_new_book(book_info* book_list);
void create_new_book(char* bName, writer_info writer, int pubYear);
void remove_book(book_info* book_list);
void find_writer_info(book_info* book_list, char* book_name);








void print_book_info(book_info* book_list) {

    printf("\n\tBook Name\tWriter Name\tSurname\tFirst Publication Year\n\n");

    for(int i = 0 ; i <= top ; i++) {
        printf("%d.\t", i+1);
        printf("%s\t", book_list[i].book_name);
        printf("%s\t", book_list[i].writer.name);
        printf("%s\t", book_list[i].writer.surname);
        printf("%d\t\n", book_list[i].first_publication_year);

    }

}



void search_book(book_info* book_list) {

    int search_choice;
    char search_book_name[20];
    char search_writer_name[20];
    char search_writer_surname[20];
    int search_date;
    bool found_Book_Name = false;
    bool found_Writer_Name = false;
    bool found_Writer_Surname = false;
    bool found_Publication_Date = false;

    printf("\n\tPlease choose one of the options for searching the book\n\n");
    printf("1.\tBook Name\n");
    printf("2.\tWriter Name\n");
    printf("3.\tWriter Surname\n");
    printf("4.\tPublication Date\n\n");

    scanf("%d", &search_choice);

        switch(search_choice) {

        case 1:
            printf("\nEnter Book Name> ");
            scanf("%s", search_book_name);
//            gets(search_book_name);
            // code to search via book name

            for(int i = 0 ; i <= top ; i++) {

                if(!strcmpi(book_list[i].book_name, search_book_name)) {
                   printf("\nNumber of book is %d", i+1);
                   found_Book_Name = true;
                }

            }

            if(found_Book_Name == false) {
                printf("\n%s not found", search_book_name);
            }



            break;

        case 2:
            printf("\nEnter Writer Name> ");
            scanf("%s", search_writer_name);
//            gets(search_writer_name);
            // code to search via writer name

            for(int i = 0 ; i <= top ; i++) {

                if(!strcmpi(book_list[i].writer.name, search_writer_name)) {
                   printf("\nNumber of book is %d", i+1);
                   found_Writer_Name = true;
                }

            }

            if(found_Writer_Name == false) {
                printf("\n%s not found", search_writer_name);
            }





            break;

        case 3:
            printf("\nEnter Writer Surname> ");
            scanf("%s", search_writer_surname);
//            gets(search_writer_surname);
            // code to search via writer surname

            for(int i = 0 ; i <= top ; i++) {

                if(!strcmpi(book_list[i].writer.surname, search_writer_surname)) {
                   printf("\nNumber of book is %d", i+1);
                   found_Writer_Surname = true;
                }

            }

            if(found_Writer_Surname == false) {
                printf("\n%s not found", search_writer_surname);
            }

            break;

        case 4:
            printf("\nEnter Publication Date> ");
            scanf("%d", &search_date);
            // code to search via book date

            for(int i = 0 ; i <= top ; i++) {

                if(book_list[i].first_publication_year == search_date) {
                   printf("\nNumber of book is %d", i+1);
                   found_Publication_Date = true;
                }

            }

            if(found_Publication_Date == false) {
                printf("\n%d not found", search_date);
            }

            break;

        default:
            printf("\nInvalid Input");
            search_book(book_list);
       }

}


void add_new_book(book_info* book_list) {


    char bName[50];
    writer_info add_writer;
    int pubYear;

    /*
    printf("\nBook name\t: ");
    scanf("%s", bName);
//    gets(bName);

    printf("\nWriter Name\t:");
    scanf("%s", add_writer.name);
//    gets(add_writer.name);

    printf("\nWriter Surname\t:");
    scanf("%s", add_writer.surname);
//    gets(add_writer.surname);

    printf("\nFirst Publication Year\t:");
    scanf("%d", &pubYear);

    printf("\nNumber of Writer's Books\t:");
    scanf("%d", &add_writer.number_of_books);
    */



    // gets book_info data from function -> SHOULD TO ADD TO THE ARRAY OF BOOKS Struct
    // create_new_book(bName, add_writer, pubYear);


    top++;

    printf("\nBook name\t: ");
    scanf("%s", book_list[top].book_name);

    printf("\nWriter Name\t:");
    scanf("%s", book_list[top].writer.name);

    printf("\nWriter Surname\t:");
    scanf("%s", book_list[top].writer.surname);

    printf("\nFirst Publication Year\t:");
    scanf("%d", &book_list[top].first_publication_year);

    printf("\nNumber of Writer's Books\t:");
    scanf("%d", &book_list[top].writer.number_of_books);




    /*
    book_list[top].book_name);
    book_list[top].first_publication_year = pubYear;
    book_list[top].writer.name);
    book_list[top].writer.number_of_books
    book_list[top].writer.surname);
    */


    printf("\nCreation of book successful");



}


//book_info create_new_book(char* bName, writer_info writer, int pubYear) {

void create_new_book(char* bName, writer_info writer, int pubYear) {


    book_info new_book_list;

    strcpy(new_book_list.book_name, bName);
    strcpy(new_book_list.writer.name, writer.name);
    new_book_list.writer.number_of_books = writer.number_of_books;
    strcpy(new_book_list.writer.surname, writer.surname);
    new_book_list.first_publication_year = pubYear;


    top++;
}


void remove_book(book_info* book_list) {

    int remove_choice;
    print_book_info(book_list);
    printf("\n\nEnter position of book you want to remove : ");
    scanf("%d", &remove_choice);

    remove_choice--;

    if(remove_choice > top) {
        printf("\nWrong Input");
        remove_book(book_list);
    }

    if(remove_choice <= top) {
    // 1, 2, 3 top would be 2  if you choose '2' from list then index is actually 1
    for(int i = remove_choice ; i <= top ; i++) {
        if(i != top) {

        strcpy(book_list[i].book_name, book_list[i+1].book_name);
        book_list[i].first_publication_year = book_list[i+1].first_publication_year;
        strcpy(book_list[i].writer.name, book_list[i+1].writer.name);
        book_list[i].writer.number_of_books = book_list[i+1].writer.number_of_books;
        strcpy(book_list[i].writer.surname, book_list[i+1].writer.surname);



        } else {

            top--;
            strcpy(book_list[i].book_name, " ");
            book_list[i].first_publication_year = 0;
            strcpy(book_list[i].writer.name, " ");
            book_list[i].writer.number_of_books = 0;
            strcpy(book_list[i].writer.surname, " ");

        }

    }
    }



}

void find_writer_info(book_info* book_list, char* book_name) {


    for(int i = 0 ; i <= top ; i++) {
        if(strcmpi(book_name, book_list[i].book_name)) {

            if(i == top) {
                printf("%s is not found in the list\n", book_name);
                break;
            }

            continue;

        } else {
            printf("%s has been found in the list\n", book_name);

            printf("Writer name\t: %s\n", book_list[i].writer.name);
            printf("Number of writer's books\t: %d\n" ,book_list[i].writer.number_of_books);
        }
    }


}


int main() {

    int choice;
    char book_name[20];

    while(choice != 6) {

        printf("\nTop is %d", top);


        printf("\n\nEnter number of the option that you want to do : \n\n");

        printf("1.\tPrint Book List\n");
        printf("2.\tSearch Book\n");
        printf("3.\tSearch Writer Info Of Book\n");
        printf("4.\tAdd New Book\n");
        printf("5.\tRemove Book From List\n");
        printf("6.\tQuit\n");

        printf("\nYour Choice : ");
        scanf("%d", &choice);


        switch(choice) {

        case 1:
            print_book_info(book_list);
            break;

        case 2:
            search_book(book_list);
            break;

        case 3:

            printf("Enter book name to find book's writer info : ");
            scanf("%s", book_name);
//            gets(book_name);
            find_writer_info(book_list, book_name);
            break;

        case 4:
            add_new_book(book_list);
            break;

        case 5:
            remove_book(book_list);
            break;

        case 6:
            exit(0);
            break;

        default:
            printf("\nInvalid Input, Please try again");
            break;

        }
    }


    return 0;
}
