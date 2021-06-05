#include <fstream>
#include <iostream>
#include "graph.h"

using namespace std;

int main() {
    graph test;
    setlocale(LC_ALL, "RUS");
    try {
        fstream in("F:\\������\\����� 4 ���\\AlgAndDataStruct_4Sem_TermWork\\pushRelabelMaxFlow\\in.txt");
        test.inputVertex(in);
        in.open("F:\\������\\����� 4 ���\\AlgAndDataStruct_4Sem_TermWork\\pushRelabelMaxFlow\\in.txt");
        test.inputEdge(in);
    }
    catch (exception warning) {
        cout << warning.what() << endl;
    }
    cout << endl;
    try {
        cout << "������������ ����� � ���� " << test.getMaxFlow();
    }
    catch (exception warning) {
        cout << warning.what() << endl;
    }
	return 0;
}