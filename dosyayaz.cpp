#include<stdio.h>
#include<stdlib.h>

int yazdir();
int oku();
int benim_main();

int main(){
benim_main();
getchar();
}


int benim_main(){
system("cls");
char islem;
printf("Islem Turu Secin:");
scanf("%c", &islem);

if(islem=='o'){
oku();
}else if(islem=='y'){
yazdir();
}else if(islem=='x'){
system("exit");
}else{
benim_main();
}

}

int yazdir(){
FILE *dosya;
char oku;

dosya=fopen("Yaz.txt", "w");
printf("Dosyaya Yazýlýyor...\n");
printf("Yaz:");
while(scanf("%c", &oku)){
if(oku=='x'){break;}
fprintf(dosya, "%c", oku);
}
fclose(dosya);
printf("Yazma Islemi Tamamlandi.");
system("pause");
benim_main();
}


int oku(){
FILE *dosya;
char oku;

printf("Dosya Okunuyor...\n");
dosya=fopen("Yaz.txt", "r");
printf("Oku:");
while(fscanf(dosya, "%c", &oku)!=EOF){
printf("%c", oku);
}
fclose(dosya);
printf("Okuma Islemi Tamamlandi.");
system("pause");
benim_main();
}