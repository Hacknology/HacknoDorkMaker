#include <iostream>
#include <conio.h>
#include <string>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <locale.h>
using namespace std;
class dorkYap{
	public:
		void wordlistli(){
			string dork1 = "(\"Comment on Hello world!\")";
			string dork2 = "(\"author/admin\")";
			string dork3 = "(\"uncategorized\")";
			string dork4 = "(\"Just another WordPress site\")";
			string dork5 = "(\"/wp/hello-world/\")";
			ifstream wordlist("wordlist.txt");
			string line;
			
			while(getline(wordlist, line)){
				string dork = dork1 + line;
				string dorka = dork2 + line;
				string dorkb = dork3 + line;
				string dorkc = dork4 + line;
				string dorkd = dork5 + line; 
				cout << dork << endl << dorka << endl << dorkb << endl << dorkc << endl << dorkd << endl;
				ofstream yeni("dorks.txt", ios::app);
				yeni << dork << endl;
				yeni << dorka << endl;
				yeni << dorkb << endl;
				yeni << dorkc << endl;
				yeni << dorkd << endl;
				yeni.close();
		}		
	}
		
}islet;
main(){
	setlocale(LC_ALL,"Turkish");
	int secim;
	cout << "Hacknology DorkMaker'a hoş geldiniz. Seçiminizi yapın. \n 1)Baslat \n 2)Cikis \n >> ";
	cin >> secim;
	switch(secim){
	case 1:
		islet.wordlistli();
		getch();
		break;
	case 2:
		exit(1);
	
}
}
