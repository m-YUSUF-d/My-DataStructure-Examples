#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "LinkedList_Methods.c"

int main()
{
    /**LinkedListMethods**/
    {
        List* myList = createList();

        // Listeye eleman ekleme
        myList->append(myList, 10);
        myList->append(myList, 20);
        myList->append(myList, 30);

        // Listeyi yazdırma
        myList->print(myList);

        // Eleman arama
        printf("20 is %s in the list.\n", myList->search(myList, 20) ? "found" : "not found");

        // Eleman silme
        myList->remove(myList, 20);
        myList->print(myList);

        // Bulunamayan bir elemanı silmeye çalışma
        myList->remove(myList, 40);

        // Belleği temizleme
        free(myList);
    }

}

