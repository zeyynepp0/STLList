#include <iostream>
#include <list>
using namespace std;

void printList(list<int> l) {
	list <int> ::iterator itr;
	for (itr = l.begin(); itr != l.end(); itr++) {
		cout << *itr << "  ";
	}
	cout << endl;
}

//FONKS�YON KULLANARAK S�LME ��LEM� 
void sil(list <int> *l) {
	list <int> ::iterator it;
	it = l->begin();
	it++;
	it++;
	it++;
	l->erase(it);

}

int main() {
	// 5 8
	list <int> lst;  // <  >  icine hangi veriyi tutacaksak onu yazar�z. ornegin int, string, nesne
	lst.push_back(5); //push_back() listenin sonuna ekler. .push_front() listenin onune ekler.
	lst.push_back(8);
	lst.push_front(10);
	printList(lst);

	// lst.pop_back(); // l�STEN�N SONDAKI ELEMANI �IKARIR
	// lst.pop_front();   //  l�STEN�N BASINDAKI ELEMANI �IKARIR
	// printList(lst);


	// ARAYA ELEMAN EKLEME
	list <int> ::iterator it;
    it = lst.begin(); 
	it++;
	it++;
	lst.insert(it, 9);
	printList(lst);

	it = lst.begin();
	it++;
	lst.insert(it, 2, 7); // 10 7 7 5 9 8
	printList(lst);

	// ARADAN ELEMAN S�LME
	/*
	it = lst.begin();
	it++;
	it++; 
	it++;
	lst.erase(it);  // 10 7 7 9 8
	*/
	sil(&lst);
	printList(lst);
	return 0;
}