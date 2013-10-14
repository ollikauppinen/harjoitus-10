/**********************************************************
*Teh�v�: Harjoitus10
*Tekij�: Olli Kauppinen
*PVM: 08.10.2013
*Kuvaus:
*Tee ohjelma, joka laskee sy�tetyist� kokonaisluvuista sek� positiivisten
*ett� negatiivisten kokonaislukujen osuuden. Lukujen sy�tt� lopetetaan
*sy�tt�m�ll� luku 0.
*
*Tulostus:
*Sy�tit kokonaislukuja seuraavasti:
*----------------------------------
*Negatiiviset 7 kpl 70.00%
*Positiiviset 3 kpl 30.00%
*Yhteens� 10 kpl 100.00%
*
* Versio 1.0 H4718 08.10.2013
***********************************************************/

#include<iostream>
using namespace std;

int main()
{
	int luku;
	double positive = 0;
	double negative = 0;
	double all = 0;
	double prosentti = 100;
		cout << "Sy�t� lukuja, positiivisia tai/ja negatiivisia, 0 lopettaa\n";

		do

		{
			cin >> luku;

			if (luku<0)
			{
				positive++;
				all++;
			}

			if (luku>0)
			{
				negative++;
				all++;
			}

		}

		while (luku !=0);

		cout << "Negatiiviset " << negative << " kpl " << negative*prosentti/all <<  "%\n";
		cout << "Positiiviset " << positive << " kpl " << positive*prosentti/all <<  "%\n";
		cout << "Yhteens� " << all << " kpl " << prosentti << "%\n";

}