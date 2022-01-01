#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cnt1,n;
    bool Alex_Opinion=false;
    //cnt1 --> Mεταβλητή μετρητή
    //n --> Περιγραφές Λάπτοπ
    //Alex_Opinion --> Μεταβλητή (Ισχυρισμός_Αλέξη) (1=Αληθής , 0=Ψευδής)
    scanf("%d",&n); //Είσαγωγή Αριθμού περιγραφής των λάπτοπ
    int pricearray[n],qualityarray[n]; // Δήλωση Των πίνακών τιμών,ποιότητας
    n-=1; // Λόγω οτι οι πίνακες ξεκινάνε απο το μηδεν την αριθμισή τους
    //Απο κάτω ακολουθεί η for η οποία θα είσαγει τα δεδομένα στους πίνακες
    for (cnt1=0;cnt1<=n;cnt1++)
    {
        scanf("%d %d",&pricearray[cnt1],&qualityarray[cnt1]);
    }
//Εκκίνηση επαναληπτικής διαδικασίας for η οποία θα σαρώνει τους πίνακες και..
    for(cnt1=0;cnt1<=n;cnt1++){
        //Αν ο ισχύρισμός ισχύει .... Τότε
        if(pricearray[cnt1] < qualityarray[cnt1])
        {
            //Η μεταβλητή αλλάζει τιμή
            Alex_Opinion=true;
            //Και τερματίζεται η επαναληπτική διαδικασία
            break;
        }
    }
    //Αν ο ισχυρισμός του αλέξη ισχύεί τότε εκτύπωσε ("Happy Alex")
    if(Alex_Opinion==true)printf("Happy Alex");
    //Αλλίως εκτύπωσε ("Poor Alex")
    else printf("Poor Alex");

}
