/*
Typedef anahtar kelimesi C'de yeni bir tip olusturmak için kullanilir.
Önce typedef sonra veritipi yazilir daha sonra da tipe verilecek isim yazilir.
Bu kullanim programda degisiklik yapilacagi zaman büyük kolaylik saglar.
Tipin tanimlandigi yerden degistirildiginde o tipi kullanan bütün yerlerde tip degismis olur.
Ayrica struct larda kodlarin daha sade ve anlasilabilir olmasini saglar.
*/


typedef struct node // struct tipinde yeni bir tip tanimi. Bu tanimla NODE artik yeni bir tip gibi kullanilabilir.
{
 void* dataPtr;
 struct node* link; // Kendi cinsinden bir pointer tutarak bir sonraki struct'i cagirabilecegiz, yani birbiri ardina gelen structlar olacak.
} NODE; // typedef kullandigimiz zaman her zaman struct node yazmak yerine NODE yazmamiz yeterli olur.



/* =================== createNode ====================
Creates a node in dynamic memory and stores data
pointer in it.
 Pre itemPtr is pointer to data to be stored.
 Post node created and its address returned.
*/


NODE* createNode (void* itemPtr)
{
NODE* nodePtr;
nodePtr = (NODE*) malloc (sizeof (NODE)); // İlk degerimizi atariz, bu cok onemlidir.
nodePtr->dataPtr = itemPtr; // nodePtr icerisindeki dataPtr degiskenine itemPtr degeri atiyor.
nodePtr->link = NULL; // nodePtr icerisindeki link degiskenine null degeri atiyor. Eger son elemansa link yani sonraki her zaman null olur.
return nodePtr;
} // createNode
