#include <iostream>

#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varIbu = new ibu("dini");
	ibu* varIbu2 = new ibu("novi");
	anak* varAnak1 = new anak("tono");
	anak* varAnak2 = new anak("rini");
	anak* varAnak3 = new anak("Dewi");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varIbu->tambahAnak(varAnak3);
	varIbu->tambahAnak(varAnak4);

	varIbu->cetakanak();
	varIbu2->cetakAnak();
}