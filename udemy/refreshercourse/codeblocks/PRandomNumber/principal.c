#include <stdio.h>

int random_number_generator(int seed);

int main(int argc, char* argv[]) {

    int random_number;

    random_number = random_number_generator(3);

    printf("%d \n", random_number);
//    FILE *fp;


    //esperando caracter
//    getc(stdin);

    char myname[20] = "Abracadabra";

    putc(myname[0], stdout);

    putc(myname[1], stdout);

    printf("\n %d, %d\n", myname[0], myname[1]);

    printf("\n size of a character = %d\n", sizeof(char));

    char c;



    char mychar, newchar;

    mychar = 'a';

    newchar = mychar + 9;

    printf("newchar = %c, value = %d\n", newchar, newchar);

    printf("size of unsigned int = %d, size of int = %d\n", sizeof(unsigned int), sizeof(int));

    int house = 1234;
    int *which_house = &house;

    printf("\n \n *which_house = %d, which_house = %p, &which_house = %p\n", *which_house,which_house, &which_house);

    *which_house = 5678;

    printf("house = %d\n", house);

    int **which_which_house = &which_house;

    int another_house = 90;

    *which_which_house = &another_house;

    printf("%d\n", *which_house);

    char myname1[80] = "alessandro santos";

    char *my_name_again;

    printf("%s\n", myname1);

    my_name_again = myname1;

    printf("%s\n", my_name_again);

//

     c = getc(stdin);

    printf("%d\n",c);

//    c = getc(stdin);

    return 0;
}

int random_number_generator(int seed) {
    int number;

    number = seed * 1103515245 + 12345;

    return (unsigned int) (number / 65536) % 32768;
}
