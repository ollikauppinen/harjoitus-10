/**********************************************************
*Tehävä: Harjoitus10
*Tekijä: Olli Kauppinen
*PVM: 08.10.2013
*Kuvaus:
*Tee ohjelma, joka laskee syötetyistä kokonaisluvuista sekä positiivisten
*että negatiivisten kokonaislukujen osuuden. Lukujen syöttä lopetetaan
*syöttämällä luku 0.
*
*Tulostus:
*Syötit kokonaislukuja seuraavasti:
*----------------------------------
*Negatiiviset 7 kpl 70.00%
*Positiiviset 3 kpl 30.00%
*Yhteensä 10 kpl 100.00%
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
		cout << "Syötä lukuja, positiivisia tai/ja negatiivisia, 0 lopettaa\n";

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
		cout << "Yhteensä " << all << " kpl " << prosentti << "%\n";

}