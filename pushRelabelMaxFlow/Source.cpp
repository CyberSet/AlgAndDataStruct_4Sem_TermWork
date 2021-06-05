#include <fstream>
#include <iostream>
#include "graph.h"

using namespace std;

int main() {
    graph test;
    setlocale(LC_ALL, "RUS");
    try {
        fstream in("F:\\Универ\\Прога 4 сем\\AlgAndDataStruct_4Sem_TermWork\\pushRelabelMaxFlow\\in.txt");
        test.inputVertex(in);
        in.open("F:\\Универ\\Прога 4 сем\\AlgAndDataStruct_4Sem_TermWork\\pushRelabelMaxFlow\\in.txt");
        test.inputEdge(in);
    }
    catch (exception warning) {
        cout << warning.what() << endl;
    }
    cout << endl;
    try {
        cout << "Максимальный поток в сети " << test.getMaxFlow();
    }
    catch (exception warning) {
        cout << warning.what() << endl;
    }
	return 0;
}