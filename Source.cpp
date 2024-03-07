#include <iostream>
using namespace std;

void moveDisk(int disk, char start, char destination) {
    cout << "Перемещаем диск " << disk << " с стержня " << start << " на стержень " << destination << endl;
}

void hanoiTower(int disks, char start, char auxiliary, char destination) {
    if (disks == 1) {

        moveDisk(disks, start, destination);
        return;
    }   
    hanoiTower(disks - 1, start, destination, auxiliary);
    moveDisk(disks, start, destination);
    hanoiTower(disks - 1, auxiliary, start, destination);

}

int main() {
    setlocale(LC_ALL, "Rus");
    int numDisks = 3; // Количество дисков
    char startRod = 'A', auxiliaryRod = 'B', destinationRod = 'C';

    cout << "Ходы для решения Ханойской башни с " << numDisks << " диск:" << endl;
    hanoiTower(numDisks, startRod, auxiliaryRod, destinationRod);

    return 0;
}
