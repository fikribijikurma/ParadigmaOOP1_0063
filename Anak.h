#ifndef IBU_H
#define IBU_H

class anak {
public:
	string nama;
	vector<anak*> daftar_anak;

	anak(string pNama) :nama(pNama) {
		cout << "Anak" \"" << nama << "\" ada\n;
	}
	~anak() {
		cout << "Anak \"" << nama << "\" tidak ada\n;
	}


