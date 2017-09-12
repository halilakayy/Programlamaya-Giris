def asalMi(sayi):
    if(sayi==1):
        return False
    elif(sayi==2):
        return True
    else:
        for i in range(2,sayi):
            if(sayi%i==0):
                return False
            else:
                return True
               
while True:
        print("""......................
    ***Asal Sayı Bulan Program***
    .............................
    Talimatlar: 'q' çıkış
    'q' dışında sadece sayı girebilirsiniz.
    **************************""");
        sayi=input("Sayıyı Girin: ");
        if(sayi=='q'):
            break
        elif(sayi==""):
            print("Herhangi bir değer girilmedi!")
        else:
            sayi=int(sayi)
            if(asalMi(sayi)==True):
                print(sayi, "Sayısı Asaldır")
            else:
                print(sayi, "Sayısı Asal Değildir")
