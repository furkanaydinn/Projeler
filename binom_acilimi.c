#include <stdio.h>

int faktoriyel(int a){
    int fakt = 1;
    while(a>0){
        fakt = fakt * a;
        a--;
    }
    return fakt;
}

int kombinasyon(int i, int j){
    return faktoriyel(i) / (faktoriyel(j) * faktoriyel(i-j));
}

int main()
{
    int p;
    printf ("Adim-Soyadim: Hamit Güllüce\n");
    printf("Numaram: 456315\n");
    printf("(a+b)^p acilimi icin p=? ");
    scanf("%d",&p);
    
    for(int i=0; i<=p; i++)
    {
        for(int j=0; j<=i; j++){
            int komb = kombinasyon(i,j);
            if(komb != 1) printf("%d*", komb);
            int ust = i-j;
            if(ust > 0) printf("a^%d", ust);
            if(ust > 0 && j > 0) printf("*");
            if(j > 0) printf("b^%d", j);
            if(j!=i){
                printf(" + ");
            }
        }
        printf("\n");
    }
    
    if(p<0){
        printf("Lütfen pozitif bir p degeri giriniz!");
    }
    
    return 0;
}